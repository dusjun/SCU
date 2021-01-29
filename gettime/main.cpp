#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("Line :%d\n", __LINE__);
    printf("ANSI :%d\n", __STDC__);
    char msg[1000];
    FILE *stream;
    int i = 0;
    if ((stream = fopen("D:/CppWorkspace/Class_2/Class4/abc.txt", "w")) == NULL)
    {
        perror("fail to write");
        exit(1);
    }
    scanf("%s", msg);    //控制台键入内容到文件中
    while (msg[i])
    {
        fputc(msg[i], stream);
        i++;
    }
    return 0;
}
