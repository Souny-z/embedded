#include <stdio.h>

void yanghui()
{
  // 杨辉三角
  int a[10][10] = {{0}};
  int i, j;
  // 数字生成 i 控制行 j 控制列
  for (i = 0; i < 10; i++)
  {
    a[i][0] = 1; // 控制第一列的第一排元素
    // 从第二列开始计算后面值
    for (j = 1; j <= i; j++)
    {
      a[i][j] = a[i - 1][j - 1] + a[i - 1][j]; //
    }
  }
  // 打印行列 i 控制行 j 控制列
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j <= i; j++)
    {
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
}

void max()
{
  // 按行列遍历数组
  int arr[3][4] = {{11, 12, 13, 14}, {1, 2, 3, 4}, {5, 6, 7, 8}};
  int i,j;
  int temp = arr[0][0];
  for(i=0;i<=3;i++){
    for(j=0;j<=3;j++){
      if (arr[i][j]>temp)
      {
        temp = arr[i][j];
      }
      
    }
  }
  printf("i:%d,j:%d,max:%d",i,j,temp);
}
int main(void)
{
  // yanghui();
  // max();
  int arr[] = {1,2,3};
  int n;
  n = sizeof(arr) / sizeof(int);
  printf("%d/%d=%d \n",sizeof(arr),sizeof(int),n);
  printf("%d",sizeof(char));
}
