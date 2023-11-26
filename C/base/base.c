#include <stdio.h>
#include <string.h> // �ַ���غ���

// ���鳤�Ȼ�ȡ string.h =>strlen() or sizeof(arr)/sizeof(char)
void arrayLength()
{
    char arr[10] = "hello";
    size_t len;
    gets(arr);
    len = strlen(arr);
    printf("Lenth: %ld\n", strlen(arr));

    // length = sizeof(arr)/sizeof(char);
}

// ��ά���������ֵ
void arrayMaxValue()
{
    int arr[3][4] = {{11, 12, 13, 14}, {1, 2, 3, 4}, {5, 6, 7, 8}};
    int i, j; // �ֱ��������
    int temp = arr[0][0];
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            if (arr[i][j] > temp)
            {
                temp = arr[i][j];
            }
        }
    }
    printf("i:%d,j:%d,max:%d", i, j, temp);
}

// �������
void yangHui()
{
    int a[10][10] = {{0}};
    int i, j;
    // �������� i ������ j ������
    for (i = 0; i < 10; i++)
    {
        a[i][0] = 1; // ���Ƶ�һ�еĵ�һ��Ԫ��
        // �ӵڶ��п�ʼ�������ֵ
        for (j = 1; j <= i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j]; //
        }
    }
    // ��ӡ���� i ������ j ������
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

// ���鵹��
void arrayReverse()
{
    int array[5] = {1, 2, 3, 4, 5};
    for (size_t i = sizeof(array) / sizeof(int); i >= 0; i--)
    {
        printf("%d", array[i]);
        puts("");
    }
}

// ָ�뵹���������
void pinterArray()
{
    int arr[5] = {1, 4, 5, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    int *p = &arr[n - 1];
    for (size_t i = n; i > 0; i--)
    {
        printf("%d", *p--);
        puts("");
    }
}

// ��ά������ָ��
void pinterDoubleArray()
{
    int arr[3][4] = {{11, 1, 14, 12}, {15, 22, 33, 44}, {25, 36, 47, 58}};
    int *p = &arr[0][0];
    // ��ָ������飬p[1] = array[0], p[2] = array[1], p(3) = array[2]
    // int *p[3] = {array[0], array[1], array[2]}; // ָ������
    printf("%d__%d\n", arr, **arr);
    printf("%d__%d\n", arr, *(*arr + 1));
    printf("%d__%d\n", arr + 1, *(*(arr + 1)));
    printf("%d__%d\n", arr[0] + 1, *(*(arr + 1) + 1));
}

// ɾ���ַ����Ŀո�
void del_Spaces(char *s1)
{
    char *s2;
    s2 = s1;
    while (*s1)
    {
        if (*s1 == ' ')
        {
            s1++;
        }
        else
        {
            *s2 = *s1;
            s2++;
            s1++;
        }
    }
    *s2 = '\0'; // �� \0 �����ַ���������־
}

int fibo(int n)
{
    for (size_t i = 1; i <= n; i++)
    {
        printf("%d  ", fibonacci_Sequence(i));
    }
}
int fibonacci_Sequence(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else if (n > 3)
    
        return n*fibonacci_Sequence(n-1);
}

int feibo(int n)
{
    if (n == 0)
    {
        printf("%d  ", 0);
    }
    else if (n == 1 || n == 2)
    {
        printf("%d  ", 1);
    }
    else
    {
        int a = 0, b = 1, c = 1;
        for (size_t i = 0; i < n; i++)
        {
            printf("%d  ", c);
            c = a + b;
            a = b;
            b = c;
        }
    }
}
// ������
int main(void)
{
    fibo(10);
}
