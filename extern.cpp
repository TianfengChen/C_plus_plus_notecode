//extern
//1. use in other file, declare a variable or function in other file
/****max.c****/
#include <stdio.h>
/*外部变量声明*/
extern int g_X ;
extern int g_Y ;
int max()
{
    return (g_X > g_Y ? g_X : g_Y);
}
 
 /***main.c****/
 #include <stdio.h>
 /*定义两个全局变量*/
 int g_X=10;
 int g_Y=20;
 int max();
 int main(void)
 {
     int result;
     result = max();
     printf("the max value is %d\n",result);
     return 0;
 }

//2.use global variable before define it
#include <stdio.h>
int max(int x,int y);
int main(void)
{
    int result;
    /*外部变量声明*/
    extern int g_X;
    extern int g_Y;
    result = max(g_X,g_Y);
    printf("the max value is %d\n",result);
    return 0;
}
/*定义两个全局变量*/
int g_X = 10;
int g_Y = 20;
int max(int x, int y)
{
    return (x>y ? x : y);
}