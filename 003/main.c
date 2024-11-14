#include <stdio.h>

int josephus(int n, int m) {
    int result = 0; // 初始情况：f(1, m) = 0
    for (int i = 2; i <= n; i++) {
        result = (result + m) % i; // 递推计算 f(i, m)
    }
    return result + 1; // 将结果从 0-based 转为 1-based
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m); // 输入人数 n 和报数上限 m
    printf("%d\n", josephus(n, m)); // 输出结果
    return 0;
}

