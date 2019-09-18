/*************************************************
    Fullname:   ADEYEMI ADEDOYIN SIMEON
    Course:     Algorithm

    Question:   2 x 2 Matrix Transpose in C
**************************************************/
#include<stdio.h>
//Transpose of a 2 x 2 matrix
void main()
{
    int a[2][2], temp, row,col;
    printf("Enter values for a 2 x 2 matrix A\n");
    for(row=0; row<2; row++)
    {
        for(col=0; col<2; col++)
        {
            printf("a[%d][%d] = ",row,col);
            scanf("%d", &a[row][col]);
        }
    }

    //Print the input values in matrix form
    printf("\nInput Matrix A  = \n");
    for(row=0; row<2; row++)
    {
        for(col=0; col<2; col++)
        {
            printf("%d\t", a[row][col]);
        }
        printf("\n");
    }

    temp = a[0][1];
    a[0][1] = a[1][0];
    a[1][0] = temp;

    //Print the A^T (A Transpose) values in matrix form
    printf("\nMatrix A Transpose = \n");
    for(row=0; row<2; row++)
    {
        for(col=0; col<2; col++)
        {
            printf("%d\t", a[row][col]);
        }
        printf("\n");
    }

}
