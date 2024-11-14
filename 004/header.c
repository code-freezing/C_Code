#include "header.h"

// 函数 maxFood：计算猫咪可以获得的最多猫粮数量
// 参数 a[]：表示牌上的数字数组，正数表示奖励，负数表示扣减
// 参数 len：数组的长度，即牌的数量
int maxFood(int a[], int len) {
    int maxSum = 0;       // 初始化最大和为0，表示猫咪可以选择不选任何牌
    int currentSum = 0;   // 当前子数组的和，用于跟踪连续的最大子数组

    // 遍历数组中的每张牌
    for (int i = 0; i < len; i++) {
        currentSum += a[i];  // 将当前牌的数值加入到当前子数组和中

        // 如果当前和变为负数，重置为0，因为负数会降低最大和
        if (currentSum < 0) {
            currentSum = 0;
        }

        // 更新最大和，如果当前和大于已知的最大和
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    // 返回最大和，即猫咪能获得的最多猫粮数量
    return maxSum;
}

