#include <stdio.h>
int main()
{
	char author[100]; // һ�����ֽ� author�����飬10��Ԫ�أ���0-9���������10�����ӵĳ��룬ÿ���������һ�� char �������������ͣ�
	int i;
	gets(author);//�Ӽ��̽���һ���ַ���������abc

	printf("�������ַ�: ");
	for(i=0 ; i< 10; i++) //һ��forѭ����i�ĳ�ʼֵ��0��ÿִ��һ��i++��ѭ��ͷ��ʱ���ж�i��ֵ��С��10��ִ��
	{
		printf("%c ,", author[i]); //����ַ�����������ĵ�1,2,3...��ֵ��author[0]��author[1]��author[2].... ֱ�� author[9]
	};
	printf("\n");

	printf("������ASCII: ");

	for(i=0 ; i< 10; i++)
	{
		printf("%x ,", author[i]);
	};
	printf("\n");

	return 0;
}
