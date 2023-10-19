/*计算1/n后10位的二进制小数*/
#include "include.h"
int repeating_segment()
{   
    int n = 1;
    int i;
    int s;
    while(n < 100)
    {
        s = 1;
        i = 0;
        //printf("请输入n的值：");
        //scanf("%d",&n);//输入n
        printf("1/%d的二进制小数为：",n);
        for(i=0;i<100;i++)
        {   
            if(s>=n)
            {
                printf("1");
                if(n==1)
                {
                    printf(".");
                }  
                s -= n;
                if(s==1)
                {
                    printf(" 循环节长度:%d", i);
                    break;
                }
            }
            else
            {
                printf("0");
                if(i==0)
                {
                    printf(".");
                }
            }
            s = s*2;
        }
        printf("\n");
        n += 2;
    }
    return 0;
}