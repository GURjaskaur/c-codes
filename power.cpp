#include <stdio.h>

// int power(int n, int m)
// {
//     int pro = 1;
//     if (n == 0 && m == 0)
//         return 0;
//     for (int i = 1; i < m + 1; i++)
//     {
//         pro = pro * n;
//     }
//     return pro;
// }

// int power(int n, int m)
// {
//     if (n = 1)
//         return m;
//     return power(m, n - 1) * m;
// }

int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
        return power(m * m, n / 2);
    return m * power(m * m, n - 1 / 2);
}

int main()
{
    int r;
    r = power(2, 9);
    printf("%d", r);
    return 0;
}