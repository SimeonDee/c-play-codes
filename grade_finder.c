/*************************************************
    Fullname:   ADEYEMI ADEDOYIN SIMEON
    Course:     Algorithm

    Question:   Grade Calculator in C
**************************************************/
#include<stdio.h>
//Using function to get Grade of Student
char* getGrade(int score)
{
    if(score >= 70 && score <= 100) return "A";
    else if(score >= 60 && score <= 69) return "B";
    else if(score >= 50 && score <= 59) return "C";
    else if(score >= 45 && score <= 49) return "D";
    else if(score >= 40 && score <= 44) return "E";
    else if(score >= 0 && score <= 39) return "F";
    else return "Invalid Score";
}
main()
{
    int score;
    printf("Supply your score: ");
    scanf("%i", &score);
    printf("\nYour Grade is %s \n", getGrade(score));
}
