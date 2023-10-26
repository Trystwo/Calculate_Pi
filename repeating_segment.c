#include "include.h"

#define NON_ZERO !0
/*计算1/n后10位的二进制小数*/
int repeating_segment()
{   
    int n, m, i;
    unsigned char *a;
    while(1)
    {
        printf("请输入n,m的值：");
        scanf("%d %d", &n, &m);//输入n,m
        a  = calloc(m, sizeof(unsigned char));
        printf("n/m的循环节为：%d.", n/m );
        n = n%m;
        for(i=0;a[n]==0;i++)
        {   
            a[n] = i;
            n = n*10;
            printf("%d",n/m);
            n = n%m;
        }

        printf("\nn/m的循环节长度为：%d\n",i-a[n]);
    
    }
    return 0;
}