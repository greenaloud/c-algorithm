int max_arr(int *arr, int length)
{
    int max, i;

    max = arr[0];
    for (i = 1; i < length; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}
