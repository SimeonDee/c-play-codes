/*************************************************
    Fullname:   ADEYEMI ADEDOYIN SIMEON
    Course:     Algorithm

    Question:   Palindrome checker in C
***********************************************/
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100], b[100];
    printf("Enter a string to check for palindrome: ");
    scanf("%s",&a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b) == 0)
        printf("\nOUTPUT:\t \'%s\' is a Palindrome\n\n",a);
    else
        printf("\nOUTPUT:\t \'%s\' is not a Palindrome\n\n",a);
}
