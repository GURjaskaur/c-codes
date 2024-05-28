#include <stdio.h>
// recurion

// int fact(int n)
// {
//     if (n == 0)
//         return 1;
//     return fact(n - 1) * n;
// }

// using loops

// int fact(int n)
// {
//     int i;
//     int factt = 1;
//     if (n == 0 || n < 0)
//         return 1;
//     for (i = 2; i < n + 1; i++)
//     {
//         factt = factt * i;
//     }
//     return factt;
// }
int main()
{
    int a;
    a = fact(-2);
    printf("%d", a);
    return 0;
}