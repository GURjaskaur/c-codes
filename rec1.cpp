// finding sum of first natural numbers
#include <stdio.h>
// int sum(int n)
// {
//     if (n == 0)
//         return 0;
//     return sum(n - 1) + n;
// }

// using loops
// int sum(int n)
// {
//     int i;
//     int s = 0;
//     for (i = 0; i < n + 1; i++)
//     {
//         s = s + i;
//     }
//     return s;
// }

int main()
{
    int r;
    r = sum(5);
    printf("%d", r);
    return 0;
}