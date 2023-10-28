## C_pointer

1. 定义： 内存单元地址即为指针

2. 声明：`char *str = "name"` `int a =20; int *b = &a;`

3. 指针运算：

   ```C
     int a[3] = {1,2,3};
     int *b,*c;
     b = a;
     c= &a[1];
     printf("%p %p\n",b,c); // 0x7ffc6992c7fc 0x7ffc6992c800
     printf("%d\n", *b); // 1
     printf("%d\n", *b+56); //  值的运算
     printf("%p\n",b+2);// 指针地址运算
     printf("%d\n", *(b+2)); // 指针运算后取值
   
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
   
   // *px = arr[];
   // arr[i] *(px+i) *(arr+i) px[i] 均相同
   ```

4. 

5. 

