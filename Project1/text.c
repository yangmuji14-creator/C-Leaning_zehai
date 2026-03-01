#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//ctrl+k ctrl+c：注释
//ctrl+/或ctrl+k ctrl+u：取消注释
//ctrl+z：上一步

//int main()
//{
//	printf("666");
//	return 0;
//}

//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//		return 0;
//}
//prinf("%d或zu\n", sizeof(short));




//
//char  //字符数据类型
//short //短整型
//int   //整型
//long  //长整型
//long long//更长的整型
//float //单精度浮点数
//double //双精度浮点数
 
//变量和常量的概念
//变量分为：
//局部变量——大括号内定义的变量
//全局变量——大括号外定义的变量

//在同一范围内变量只能出现一次



//int a = 20;//全局变量
//
//int main()
//{
//    int age = 20;//年龄
//    double price = 66.60;//价格
//    int high = 180;//身高
//    int a = 10;//局部变量
//    printf("%d\n",a);//当全局变量和全局变量冲突时，局部优先
//
//    return 0;
//}

//不建议将全局变量和局部变量的名字写成一样的

//写一个代码计算两个整数的和
//scanf 是输入函数
//printf 是输出函数

int main()
{
    int a = 0;
    int b = 0;//初始化
    
    //输入两个数
    scanf("%d %d", &a, &b);
    
    //求和
    int c = a + b;

    //输出
    printf("%d\n", c);
 }
//scanf_s是VS编译器自己提供函数，的非标准C提供的函数，只有VS认识，其他编译器不认识！
//跨平台建议使用scanf


