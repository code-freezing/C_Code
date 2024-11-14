#include <stdio.h>

int josephus(int n, int m) {
    int result = 0; // ��ʼ�����f(1, m) = 0
    for (int i = 2; i <= n; i++) {
        result = (result + m) % i; // ���Ƽ��� f(i, m)
    }
    return result + 1; // ������� 0-based תΪ 1-based
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m); // �������� n �ͱ������� m
    printf("%d\n", josephus(n, m)); // ������
    return 0;
}

