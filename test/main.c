#include <stdio.h>
#include <stdlib.h>
int max (int x,int y);  //函数原形及声明
int min (int x,int y);
int main()
{
    int a,b,c,d;
    printf("Please enter a and b.\n");
    scanf("%d%d",&a,&b);//键入要加& 取内存地址 输出则不需要

    printf("a=%d\n",a);
    printf("b=%d\n",b);

    c=min(a,b);
    d=max(a,b);
    printf("min=%d\n",c);
    printf("max=%d\n",d);
// printf("Hello world!\n");
    return 0;
}

//函数定义
int max (int x,int y) //函数首部(首部后面不加分号)

{
    int tt;
    if (x>=y)
        tt=x;
    else
        tt=y;
    return tt;
}
int min (int x,int y)
{
    int kk;
    if (x>=y)
        kk=y;
    else
        kk=x;
    return kk;

}






