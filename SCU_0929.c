#include <stdio.h>
main()
{
int Num=5;
float Total;
float price;
price=36.8;
printf("输入数量:");
scanf("%d",&Num);
printf("总数:%d\n",Num);
Total=price*Num;
printf("价格:%f\n",price);
printf("1、总金额:%f\n",Total);
printf("2、总金额:%6.2f\n",Total);
printf("3、总金额:%3.0f\n",Total);
printf("4、总金额:%2.2f\n",Total);

return 0 ;
 }
