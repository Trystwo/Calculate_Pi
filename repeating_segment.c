/*计算1/n后10位的二进制小数*/
#include "include.h"
int repeating_segment()
{   int n = 1;
    int i;
    int s = 0;
    int m;
    int t;
    while(1)
    {
        s = 0;
        i = 0;
        
        printf("请输入n,m的值：");
        scanf("%d %d", &n, &m);//输入n
        printf("n/m的循环节为：" );
        s = n%m;
        t = n;
        printf("%d.",n/m);
        for(i=0;i<100;i++)
        {   
            s = (n = s*10)%m;
            printf("%d",n/m);
            if(s == t)
            {
                printf("\nn/m的循环节长度为：%d\n",i+1);
                break;
            }
        }
    
    }
    return 0;
}