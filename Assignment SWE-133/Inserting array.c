#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter array size : \n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter array element's : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        printf("index[%d] = %d\n", i, arr[i]);
    }

    int n_index;
    printf("Enter new index : ");
    scanf("%d", &n_index);

    for(i = n+2; i >= n_index; i--)
    {
        arr[i] = arr[i - 3];
    }

    printf("Enter new 3 elements\n");
    for(i = n_index; i <= n_index+2; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("After adding 3 new elements: \n");
    for(i = 0; i < n+3; i++)
    {
        printf("index[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
