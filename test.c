#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 5
#define NUM_GRADES 13

int main()
{
    char names[NUM_STUDENTS][50];
    int grades[NUM_STUDENTS][NUM_GRADES];
    float averages[NUM_STUDENTS];
    int sum_grades;

    printf("Provide the information of %d students. One student a time (name followed by 13 grades): \n", NUM_STUDENTS);

    for (int s = 0; s < NUM_STUDENTS; s++)
    {
        // Store the names
        printf("Student %d: ", s + 1);
        scanf("%s", names[s]);
        sum_grades = 0;

        // Store the grades
        for (int g = 0; g < NUM_GRADES; g++)
        {
            scanf("%d", &grades[s][g]);
            sum_grades += grades[s][g]; // Why do we need to spacify how many students? haven't we already done this att line 10?
        }

        averages[s] = (float)sum_grades / NUM_GRADES; // Calculates average
    }

    for (int s = 0; s < NUM_STUDENTS; s++)
    {
        printf("\nName: %s\nGrades: ", names[s]);
        for (int i = 0; i < NUM_GRADES; i++)
        {
            printf("%d, ", grades[s][i]); // Why don't I get the grade number here? I get numbers like "-998246864, -998246812, -998246760, -998246708..."
        }
        printf("\n");
        printf("%.001f ", averages[s]);
    }

    return 0;
}