void    right_rotate(int *arr, int s, int t)
{
    int temp, i;

    temp = arr[t];
    for (i = t; i > s; i--)
        arr[i] = arr[i - 1];
    arr[s] = temp;
}
