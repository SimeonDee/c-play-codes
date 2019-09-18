/****************************************************************
    Fullname:   ADEYEMI ADEDOYIN SIMEON
    Course:     Algorithm

    Question:   Find Largest of 3 values using switch stmt in C
*****************************************************************/
#include<stdio.h>
//Finding the largest of three values using switch statement
main()
{
    int a, b, c, largest;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    switch(a > b)
    {
        case 1:
            largest = a;
            break;
        case 0:
             largest = b;
    }

    switch(largest > c)
    {
        case 1:
            break;
        case 0:
            largest = c;
    }
    printf("\nThe largest value between %i,%i and %i is %i \n", a,b,c,largest);
}
