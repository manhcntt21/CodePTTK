#include <stdio.h>
#define MAX_ELEMENT 100

void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

void print(int arrray[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrray[i]);
    }
    printf("\n");
}

void recursive_bubble_sort(int arrray[], int n)
{
    if (n == 1)
        return;
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arrray[i] > arrray[i + 1])
            {
                swap(&arrray[i], &arrray[i + 1]);
            }
        }
    }
    print(arrray, 10);
    recursive_bubble_sort(arrray, n - 1);
}

void recursive_insertion_sort(int arrray[], int n )
{
    if (n <= 1)
    {
        return;
    }
    else
    {
        recursive_insertion_sort(arrray, n - 1);
        int last = arrray[n - 1];
        int j = n - 2;
        while (j > -1 && arrray[j] > last)
        {
            arrray[j+1] = arrray[j];
            j--;
        }
        arrray[j + 1] = last;
    }
    print(arrray, 10);
}

int main(int argc, char const *argv[])
{
    int arrray[10] = {4, 6, 3, 8, 5, 1, 9, 7, 0, 2};
    // recursive_bubble_sort(arrray, 10);
    recursive_insertion_sort(arrray,10);

    return 0;
}
