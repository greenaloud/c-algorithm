void    rotate_left(int *arr, int s, int t)
{
    int first, i;

    first = arr[s];
    for (i = s + 1; i <= t; i++)
        arr[i - 1] = arr[i];
    arr[t] = first;
}
