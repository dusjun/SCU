#include <stdio.h>
#include <stdlib.h>
#include  <math.h>
/*【Code Blocks 小技巧】：
1、按快捷键 F9 build and run
2、按CTRL+F查找，F3查找下一个
3、代码区右键菜单，Format use Astyle 美化代码，或者参考下一条，一般设置为 alt+F8与VS(Visual Studio)保持一致。
4、Click Settings->Editor->KeyboardShortcuts (in the left of dialog box)->Plugins->Source code formatter(Astyle)
Assign the short cut you want.
5、有中文时拼写检查不正确，有红色波浪线，在菜单栏 plugins(插件) 下拉找到 manage plugins ，点开找到 spellChecker，将它设置为 disable，就可以了
6、
*/
int main()
{
	int Num=5; //定义变量一定给赋初始值，这个习惯很好。
	float Total=0;
	float price=0;
	price=36.8;
	main_1();//调用了另外一个文件的函数
	printf("输入数量:");
	scanf("%d",&Num);
	printf("总数:%d\n",Num);
	Total=price*Num;
	printf("价格:%f\n",price);
	printf("1、总金额:%f\n",Total);
	printf("2、总金额:%6.2f\n",Total);
	printf("3、总金额:%3.0f\n",Total);
	printf("4、总金额:%2.2f\n",Total);

	printf("--------------------\n");

	double x=0.0;
	double y=0.0;

	Num=0;
	printf("请输入一个数：\n");
	while(scanf("%lf",&x)==1)
		/*
		scanf返回值与输入结果有关，当需要输入的变量都
		输入成功时，会返回输入的个数，你只让函数输入一
		个值，所以返回是1，这里期望是输入一个double类型，
		如果输入一个非数字，就返回1了，跳出循环。
		*/
	{
		Num++;


		if(Num>3)
		{
			break ;/*最多出3个题，不然也退出*/
		};
		printf("【%d】\n",Num);
		y=(x-10)*(x-10)*(x-10);

		/*
		C语言中%f和%lf的区别 - ACPIE - 博客园
		https://www.cnblogs.com/ACPIE-liusiqi/p/8877534.html
		（1）对于printf()来说二者没有区别
		（2）使用scanf()输入数据时应该区分%f和%lf，当输入数据是float时用%f,当输入数据是double时用%lf
		*/
		printf("------以下是类型错误，显示乱七八糟-----------\n");
		/*其实编译的时候有  warning(s)
		因为是printf x,y 两个变量，所以是2 warning ，能通过,但输出不正确，但应尽量避免。
		F:\_2021\SCU\SCU\main.c|60|warning: format '%d' expects argument of type 'int', but argument 2 has type 'double' [-Wformat=]|
		F:\_2021\SCU\SCU\main.c|60|warning: format '%d' expects argument of type 'int', but argument 3 has type 'double' [-Wformat=]|
		||=== Build finished: 0 error(s), 2 warning(s) (0 minute(s), 3 second(s)) ===|
		||=== Run: Debug in SCU (compiler: GNU GCC Compiler) ===|
		*/
		printf("(%d-10)三次方=%d\n\n",x,y);//format '%d' expects argument of type 'int'！！！

		printf("------以下是3次方--------------\n");
		printf("(%lf-10)三次方=%lf\n",x,y);
		printf("(%f-10)三次方=%f\n",x,y);
		printf("(%0.2f-10)三次方=%0.2f\n\n",x,y);

		y=pow(x-10,20);
		printf("------以下是20次方，用了math类库的pow函数--------------\n");
		printf("(%lf-10)三次方=%lf\n",x,y);
		printf("(%f-10)三次方=%f\n",x,y);
		printf("(%0.2f-10)三次方=%0.2f\n\n",x,y);

	}
	printf("--------------------\n");
	return 0;


}
