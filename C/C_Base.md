## C base

1. hello.c

   ```c
   #include <stdio.h>
   int main(void){
       printf("hello world");
   }
   ```

2. 字符类型（``%d %f %c %s`）

   - (unsigned) char`char str='h'`  `char string[] = "hello world!!"`
   - (unsigned) int
   - (unsigned) short
   - (unsigned) long
   - float
   - double
   - long double
   - 超出范围会再次从初始位置计数
   - const 表示常量 ``const int num=15`，大写表示常量，小写表示变量

3. 运算符

   - 数算运算符：+ - * / %
   - 一元运算符： +a -a ++ --，`a++` 与 `++a` 的区别在于：`a++` 在使用 `a` 之后才自增它的值，而 `++a` 会在使用 `a` 之前自增它的值。
   - 比较运算符：==    !=   >   <   >=   <=
   - 逻辑运算符： &&  ||  !
   - 符合运算符： +=  -=  *=   /=   %=
   - 三目运算符： <条件> ? <表达式> : <表达式>
   - `sizeof` 运算符返回你传入的操作数的大小。你可以传入变量，或者甚至是类型也可以。

4. 条件&循环语句

   - if……else ……
   - if……else if …… else ……
   - switch …… case …… 配合`break`使用
   - switch …… case …… default 
   - do …… while……
   - while……
   - for……

5. 数组

   - 数组中的每个值都必须有 **相同的类型**，且必须声明数组大小`double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};`

   - ```C
     int prices[5]; // 指向数组首个元素的指针
     
     for (int i = 0; i < 5; i++) {
       prices[i] = i + 1;
     }
     ```

   - 二维数组

   - ```C
     // 三行四列
     int a[3][4] = {  
      {0, 1, 2, 3} ,   /*  初始化索引号为 0 的行 */
      {4, 5, 6, 7} ,   /*  初始化索引号为 1 的行 */
      {8, 9, 10, 11}   /*  初始化索引号为 2 的行 */
     };
     
     ```

   - 杨辉三角

   - ```C
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
     ```
     
     ```C
     // 求最大值
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
     ```
     
   - 长度获取：`sizeof(arr) / sizeof(int);`

6. 字符串

   - 标准库： <string.h>
   - `strcpy()`：将一个字符串复制到另一个字符串
   - `strcat()`：将一个字符串追加到另一个字符串
   - `strcmp()`：比较两个字符串是否相等
   - `strncmp()`：比较两个字符串的前 `n` 个字符
   - `strlen()`：计算字符串的长度

7. 指针

   - `&` 获取内存中地址值

   - ```C
     int age = 37;
     int *address = &age;
     printf("%u", *address); /* 37 */
     
     
     int prices[3] = { 5, 4, 3 };
     printf("%u",`_ `(prices + 1)); /* 4 */
     ```

8. 函数

   - 函数 `void dosomething(int value1,float value2){}`
   - 传入的参数为一个 **指针**，你可以修改该变量的值,不能为参数定义默认值
   - 函数必须先声明

9. 输入输出

   - 在 C 中，我们有三种类型的 I/O 流：
     - `stdin`（标准输入）
     - `stdout`（标准输出）
     - `stderr`（标准错误）
   - `printf()` 打印到屏幕
   - `scanf()` 获取输入`int age; scanf("%d", &age);`
   - `sscanf()`
   - `fgets()`
   - `fprintf()`
   - `%d` 用于数字
   - `%c` 用于字符
   - `%s` 用于字符串
   - `%f` 用于浮点数
   - `%p` 用于指针
   -  `\n` 可以用来让输出创建一个新行。

10. 作用域

    - **全局变量（global variables）**，在函数内部”，因为全局变量默认就是静态的，任何函数都可以更新全局变量的值
    - **局部变量（local variables）**分配给局部变量的内存会在函数结束之后立即释放。

11. 静态变量

    - `static` 关键字初始化一个 **静态变量**

    - ```C
      // 每调用一次，就会增加该age值
      int incrementAge() {
        static int age = 0;
        age++;
        return age;
      }
      ```

12. 类型定义 & 枚举类型

    - `typedef` 关键字允许你定义新的类型，新类型通常是大写的

    - 枚举： ``typedef enum { //value }`

    - ```C
      #include <stdio.h>
      
      typedef enum {
        monday,  
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
        sunday
      } WEEKDAY;
      
      int main(void) {
        WEEKDAY day = monday;
      
        if (day == monday) {
          printf("It's monday!"); 
        } else {
          printf("It's not monday"); 
        }
      
      ```

13. 结构体

    - `struct` 关键字，我们可以使用基本的 C 类型创建复杂的数据结构

    - 注意到结构体是 **复制传递** 的，这一点很重要，除非，当然你可以传递一个指向结构体的指针，这种情况下它就是引用传递。

    - ```C
      typedef struct {
        int age;
        char *name;
      } PERSON;
      
      PERSON flavio = { 37, "Flavio" };
      printf("%s, age %u", flavio.name, flavio.age);
      ```

14. 命令行参数

    - `argc` 是一个整数，包含从命令行提供的参数的数量

    - `argv` 是一个字符串数组，包含输入的命令，以空格为切割

    - ```C
      int main(int argc, char const *argv[])
      {
        /* code */
        return 0;
      }
      ```

15. 头文件

    - `#include` 是一个预处理器指令，`#include <stdio.h>` ``#include "myfolder/myfile.h"`
    - 编译多个文件组成的程序，需要在命令行中列出
    - 配置更加复杂，一个告诉编译器如何编译该程序的 **Makefile** 是必需的

16. 预处理

    - 解析我们的程序，确保编译器在处理之前获得所有需要的东西

    - `#include` 指令包含的所有头文件

    -  `#define` 定义的每个常量并将其替换为实际的值

    - `#define` 定义 **宏（macro）类似于lamada函数**。宏与符号常量之间的差别在于：宏可以接受一个参数，并且通常包含代码，而符号常量只是一个值`#define POWER(x) ((x) * (x))`

    - `#ifdef` 来检查某个符号常量或宏是否被定义过，`#ifndev` 检查对立面（宏未定义）

    - ```C
      #include <stdio.h>
      #define VALUE 1
      
      int main(void) {
      #ifdef VALUE
        printf("Value is defined\n");
      #else
        printf("Value is not defined\n");
      #endif
      }
      ```

    - 预处理器还定义了很多你可以直接使用的符号常量

      - **`__LINE__`** 代表源代码文件中的当前行
      - **`__FILE__`** 代表文件的名字
      - **`__DATE__`** 表示编译日期，格式为 `Mmm gg aaaa`
      - **`__TIME__`** 表示编译实践，格式为 `hh:mm:ss`

 

































