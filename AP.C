#include <stdio.h>

#define MAX_WIDTH 100
int main()
{
    int arr[MAX_WIDTH];
    int WIDTH;
    int i, j, k;
    printf("Enter WIDTH of the array : ");
    scanf("%d", &WIDTH);

    printf("Enter elements in array : ");
    for(i=0; i<WIDTH; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<WIDTH; i++)
    {
        for(j=i+1; j<WIDTH; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k=j; k<WIDTH; k++)
                {
                    arr[k] = arr[k + 1];
                }
                WIDTH--;

                j--;
            }
        }
    }

    printf("\nArray elements after deleting duplicates : ");
    for(i=0; i<WIDTH; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
