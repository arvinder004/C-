#include<stdio.h>
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort(int A[], int n)
{
    for (int i = 0; i < n - 1 : i++)
    {
        int min = A[i];
        int loc = i;

        for (int j = i + 1; j < n; j++)
        {
            if (min > A[j])
            {
                min = A[j];
                loc = j;
            }
        }
        swap(A[i], A[loc])
    }
}

int printA(int A, n)
{
    for (int i = 0; i <= n; i++)
    {
        printf(A[i]);
    }
    return 0;
}

int main()
{
    int A = {20, 40, 10, 50, 30};
    int n = sizeof(A) / sizeof(A[0]);

    printf("Array before sorting is:", printA(A, n))
}