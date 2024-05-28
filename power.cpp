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

int power(int n, int m)
{
    if (n = 1)
        return m;
    return power(m, n - 1) * m;
}
int main()
{
    int r;
    r = power(2, 3);
    printf("%d", r);
    return 0;
}