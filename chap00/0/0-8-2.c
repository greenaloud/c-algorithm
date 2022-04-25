#include <stdio.h>

void    rotate_part(int *arr, int s, int t)
{
    int i, temp;

    for (i = s; i < s + (t - s) / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[t - 1 - i + s];
        arr[t - 1 - i + s] = temp;
    }
}

void    rotate_right_k(int *arr, int len, int k)
{
    k %= len;
    rotate_part(arr, 0, len);
    rotate_part(arr, 0, k);
    rotate_part(arr, k, len);
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    rotate_right_k(arr, 8, 13);

    for (int i = 0; i < 8; ++i)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
