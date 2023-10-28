#include <stdio.h>
#include <string.h>
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
  // int arr[] = {1,2,3};
  // int n;
  // n = sizeof(arr) / sizeof(int);
  // printf("%d/%d=%d \n",sizeof(arr),sizeof(int),n);
  // printf("%d",sizeof(char));
  // int value;
  // printf("请输入数字\n");
  // scanf("%d", &value);
  // printf("%d\n",value);
  
  // 字符长度获取
/*   char arr[10] = "hello";
  // size_t len;
  // gets(arr);
  // len = strlen(arr);
  printf("Lenth: %ld\n",strlen(arr)); */

  // int a[3] = {1,2,3};
  // int *b,*c;
  // b = a;
  // c= &a[1];
  // printf("%p %p\n",b,c); // 0x7ffc6992c7fc 0x7ffc6992c800
  // // printf("%p\n",b+2);
  // printf("%d\n", *b); // 1
  // printf("%d\n", *b+56); //  值的运算
  // printf("%p\n",b+2);// 指针地址运算
  // printf("%d\n", *(b+2)); // 指针运算后取值
  // printf("%p\n", b+4);

// 指针遍历数组
  int arr[5] = {1,4,5,7,8};
  int *array,i;
  array = arr;
  printf("%ld \n",sizeof(arr)/sizeof(int));
  // for(i=0;i<sizeof(arr)/sizeof(int);i++){
  //   printf("%d\n",arr[i]);
  // }
  for(i=0;i<sizeof(arr)/sizeof(int);i++){
    printf("%d",*array++);
    puts("");
  }
}

