// 计算1/(2n - 1)的循环节
// 2018.5.17
// Creator: bxd

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    double sum = 0;
    double pi;
    double temp = 1;
    int i = 1;
    printf("Please input n: ");
    scanf("%d", &n);
    // 计算1/(2n - 1)的循环节
    while (fabs(temp) >= 1e-6) // fabs()函数用于计算浮点数的绝对值
    {
        temp = 1.0 / (2 * i - 1);
        if (i % 2 == 0)
        {
            sum -= temp;
        }
        else
        {
            sum += temp;
        }
        i++;
    }
    pi = 4 * sum;
    printf("pi = %lf\n", pi);
    return 0;
}
