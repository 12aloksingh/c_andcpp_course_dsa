#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,total_marks,percentage;
    printf("Enter marks of 5 subjects");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    total_marks=s1+s2+s3+s4+s5;
    percentage=(total_marks/500)*100;
    if(percentage>33)
        printf("passed");
    else
        printf("Failed");

    return 0;
}

