#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 5
#define GRADES 13

int main()
{
    char name[50];
    int grades[GRADES];
    int sum_grades = 0;
    float average;

    printf("Provide one student information at a time(name followed by 13 grades): \n");
    scanf("%s", name);
    for (int i = 0; i < GRADES; i++)
    {
        scanf("%d", &grades[i]);
        sum_grades += grades[i];
    }

    average = (float)sum_grades / GRADES; // Calculates average

    printf("\nName: %s\nGrades: ", name);
    for (int i = 0; i < GRADES; i++)
    {
        printf("%d ", grades[i]);
    }
    printf("%.001f ", average);

    return 0;
}