/* C Program to sort an array in ascending order using Insertion Sort */
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    int a[100];
 
    printf("Enter number of elements:");
    scanf("%d", &n);
 
    printf("Enter %d integers:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
	    j = i;
            while (a[j-1] > a[j])
            {	        
                temp     = a[j];
                a[j]   = a[j-1];
                a[j-1] = temp;
                j--;
            }
    }
    printf("Sorted list in ascending order:");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

