/*************************************************
    Fullname:   ADEYEMI ADEDOYIN SIMEON
    Course:     Algorithm

    Question:   Binary Search Implementation in C
**************************************************/
#include<stdio.h>
void main()
{
    int a[100], mid = 0, pos, low = 0, high, i, counter = 0, numb;
    printf("Enter the size of the array: ");
    scanf("%d", &high);

    printf("Supply the %d integer array elements in ascending order\n", high);
    for(i=0; i<high; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the a number to search for in the array: ");
    scanf("%d", &numb);

    high--;

    printf("\n\tOUTPUT \n");
    printf("\t********\n");
    printf("\nInitial Comparison \n");

    do{
        if(high < low)
        {
            printf("%d does not exist\n", numb);
        }

        mid = low + (high - low) / 2;
        printf("low : %d, array[%d] = %d\n", low, low, a[low]);
        printf("high : %d, array[%d] = %d\n", high, high, a[high]);
        printf("mid : %d, array[%d] = %d\n\n", mid, mid, a[mid]);
        if(numb == a[mid])
        {
            printf("%d is found at position %d\n", numb, mid);
            goto out;
        }
        else if(numb > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

        counter++;
        printf("Comparison %d\n", counter);

    } while(counter <= high);

    printf("%d cannot be found in the array\n", numb);
    out:
        printf("\n\n");

}
