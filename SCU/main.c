#include <stdio.h>
#include <stdlib.h>
#include  <math.h>
/*��Code Blocks С���ɡ���
1������ݼ� F9 build and run
2����CTRL+F���ң�F3������һ��
3���������Ҽ��˵���Format use Astyle �������룬���߲ο���һ����һ������Ϊ alt+F8��VS(Visual Studio)����һ�¡�
4��Click Settings->Editor->KeyboardShortcuts (in the left of dialog box)->Plugins->Source code formatter(Astyle)
Assign the short cut you want.
5��������ʱƴд��鲻��ȷ���к�ɫ�����ߣ��ڲ˵��� plugins(���) �����ҵ� manage plugins ���㿪�ҵ� spellChecker����������Ϊ disable���Ϳ�����
6��
*/
int main()
{
	int Num=5; //�������һ��������ʼֵ�����ϰ�ߺܺá�
	float Total=0;
	float price=0;
	price=36.8;
	main_1();//����������һ���ļ��ĺ���
	printf("��������:");
	scanf("%d",&Num);
	printf("����:%d\n",Num);
	Total=price*Num;
	printf("�۸�:%f\n",price);
	printf("1���ܽ��:%f\n",Total);
	printf("2���ܽ��:%6.2f\n",Total);
	printf("3���ܽ��:%3.0f\n",Total);
	printf("4���ܽ��:%2.2f\n",Total);

	printf("--------------------\n");

	double x=0.0;
	double y=0.0;

	Num=0;
	printf("������һ������\n");
	while(scanf("%lf",&x)==1)
		/*
		scanf����ֵ���������йأ�����Ҫ����ı�����
		����ɹ�ʱ���᷵������ĸ�������ֻ�ú�������һ
		��ֵ�����Է�����1����������������һ��double���ͣ�
		�������һ�������֣��ͷ���1�ˣ�����ѭ����
		*/
	{
		Num++;


		if(Num>3)
		{
			break ;/*����3���⣬��ȻҲ�˳�*/
		};
		printf("��%d��\n",Num);
		y=(x-10)*(x-10)*(x-10);

		/*
		C������%f��%lf������ - ACPIE - ����԰
		https://www.cnblogs.com/ACPIE-liusiqi/p/8877534.html
		��1������printf()��˵����û������
		��2��ʹ��scanf()��������ʱӦ������%f��%lf��������������floatʱ��%f,������������doubleʱ��%lf
		*/
		printf("------���������ʹ�����ʾ���߰���-----------\n");
		/*��ʵ�����ʱ����  warning(s)
		��Ϊ��printf x,y ����������������2 warning ����ͨ��,���������ȷ����Ӧ�������⡣
		F:\_2021\SCU\SCU\main.c|60|warning: format '%d' expects argument of type 'int', but argument 2 has type 'double' [-Wformat=]|
		F:\_2021\SCU\SCU\main.c|60|warning: format '%d' expects argument of type 'int', but argument 3 has type 'double' [-Wformat=]|
		||=== Build finished: 0 error(s), 2 warning(s) (0 minute(s), 3 second(s)) ===|
		||=== Run: Debug in SCU (compiler: GNU GCC Compiler) ===|
		*/
		printf("(%d-10)���η�=%d\n\n",x,y);//format '%d' expects argument of type 'int'������

		printf("------������3�η�--------------\n");
		printf("(%lf-10)���η�=%lf\n",x,y);
		printf("(%f-10)���η�=%f\n",x,y);
		printf("(%0.2f-10)���η�=%0.2f\n\n",x,y);

		y=pow(x-10,20);
		printf("------������20�η�������math����pow����--------------\n");
		printf("(%lf-10)���η�=%lf\n",x,y);
		printf("(%f-10)���η�=%f\n",x,y);
		printf("(%0.2f-10)���η�=%0.2f\n\n",x,y);

	}
	printf("--------------------\n");
	return 0;


}
