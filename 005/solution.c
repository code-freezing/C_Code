#include <solution.h>

// 函数 spiralOrder：按顺时针螺旋顺序打印 m x n 大小的矩阵中的所有元素
// 参数 matrix：指向二维整数数组的指针，表示要打印的矩阵
// 参数 m：矩阵的行数
// 参数 n：矩阵的列数
void spiralOrder(int **matrix, int m, int n) {
    int top = 0, bottom = m - 1;   // 上、下边界的初始值
    int left = 0, right = n - 1;   // 左、右边界的初始值
    
    // 循环条件：确保上、下、左、右边界没有交叉
    while (top <= bottom && left <= right) {
        // 从左到右遍历当前上边界，并打印当前行的元素
        for (int i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;  // 移动上边界向下

        // 从上到下遍历当前右边界，并打印当前列的元素
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;  // 移动右边界向左

        // 检查是否仍有未打印的行
        if (top <= bottom) {
            // 从右到左遍历当前下边界，并打印当前行的元素
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;  // 移动下边界向上
        }

        // 检查是否仍有未打印的列
        if (left <= right) {
            // 从下到上遍历当前左边界，并打印当前列的元素
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;  // 移动左边界向右
        }
    }
}
