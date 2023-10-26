#include "include.h"

/*计算1/n后10位的二进制小数*/
int repeating_segment()
{
    int i, n, m;
    int s[100000];
    while (1)
    {
        i = 100;
        printf("请输入n,m的值：");
        scanf("%d %d", &n, &m); // 输入n,m
        printf("n/m的循环节为：%d.", n / m);
        n = n % m;

        while (i--)
        {
            n = n * 10;
            printf("%d", n / m);
            n = n % m;
        }
        // for (i = 0; s != t; i++)
        // {
        //     s = (n = s * 10) % m;

        //     printf("%d", n / m);
        //     // 如果n/m不是循环小数，退出循环
        //     if ((s == 0) || (s == t / 10))
        //     {
        //         printf("\n");
        //         break;
        //     }
        // }
        printf("\nn/m的循环节长度为：%d\n", i + 1);
    }
    return 0;
}