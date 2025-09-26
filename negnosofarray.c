#include<stdio.h>
int main()
{
    int arr[6] = {10, -20, 30, -40, 50, -60};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    
    for (int i = 0; i <= n - k; i++)
    {
        for (int j = i; j <i+k; j++)
        {
            if (arr[j] < 0)
            {
                printf("%d ", arr[j]);
            }
        }
        printf("\n");
    }
    return 0;
}