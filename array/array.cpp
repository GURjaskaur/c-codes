#include <stdio.h>
#include <stdlib.h>
struct array
{
    int *a;
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf(" \n elements are \n ");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.a[i]);
}
int main()
{
    int n, i;
    struct array arr;
    printf("Enter the number of elements: ");
    scanf("%d", &arr.size);
    // created an array inside heap.
    arr.a = (int *)malloc(sizeof(int) * arr.size);

    arr.length = 0;
    printf("enter number of numbers");
    scanf("%d", &n);
    printf("enter all elements \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.a[i]);
    }
    arr.length = n;
    display(arr);
}