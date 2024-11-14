#include <solution.h>

// ���� spiralOrder����˳ʱ������˳���ӡ m x n ��С�ľ����е�����Ԫ��
// ���� matrix��ָ���ά���������ָ�룬��ʾҪ��ӡ�ľ���
// ���� m�����������
// ���� n�����������
void spiralOrder(int **matrix, int m, int n) {
    int top = 0, bottom = m - 1;   // �ϡ��±߽�ĳ�ʼֵ
    int left = 0, right = n - 1;   // ���ұ߽�ĳ�ʼֵ
    
    // ѭ��������ȷ���ϡ��¡����ұ߽�û�н���
    while (top <= bottom && left <= right) {
        // �����ұ�����ǰ�ϱ߽磬����ӡ��ǰ�е�Ԫ��
        for (int i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;  // �ƶ��ϱ߽�����

        // ���ϵ��±�����ǰ�ұ߽磬����ӡ��ǰ�е�Ԫ��
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;  // �ƶ��ұ߽�����

        // ����Ƿ�����δ��ӡ����
        if (top <= bottom) {
            // ���ҵ��������ǰ�±߽磬����ӡ��ǰ�е�Ԫ��
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;  // �ƶ��±߽�����
        }

        // ����Ƿ�����δ��ӡ����
        if (left <= right) {
            // ���µ��ϱ�����ǰ��߽磬����ӡ��ǰ�е�Ԫ��
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;  // �ƶ���߽�����
        }
    }
}
