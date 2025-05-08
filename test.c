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

    printf("Provide the information of %d students.(name followed by 13 grades): \n", NUM_STUDENTS);

    for (int s = 0; s < NUM_STUDENTS; s++)
    {
        // Store the names
        printf("Student %d: ", s + 1);
        scanf("%s", names[s]);
        // Capitalize names
        if (names[s][0] >= 'a' && names[s][0] <= 'z')
        {
            names[s][0] = names[s][0] - 32; //-32 to capitalize it
        }

        // Store the grades
        sum_grades = 0; // reset it
        for (int g = 0; g < NUM_GRADES; g++)
        {
            scanf("%d", &grades[s][g]);
            sum_grades += grades[s][g];
        }

        // Calculates average
        averages[s] = (float)sum_grades / NUM_GRADES;
    }

    printf("\n");
    // Print results
    for (int s = 0; s < NUM_STUDENTS; s++)
    {
        printf("%s Grades: ", names[s]);
        for (int i = 0; i < NUM_GRADES; i++)
        {
            printf("%d, ", grades[s][i]);
        }
        printf("Average: %.001f \n", averages[s]);
    }

    // Find the student with the highest average
    float highest_average = averages[0];
    int top_student_index = 0;

    for (int s = 1; s < NUM_STUDENTS; s++) // start at 1 since we assume 0 is highest so far
    {
        if (averages[s] > highest_average)
        {
            highest_average = averages[s];
            top_student_index = s;
        }
    }

    // Print top student
    printf("\n");
    printf("%s\n", names[top_student_index]);

    // Find students with average under 5
    float average_under_media = averages[0];
    int students_under_media = 0;

    printf("\n");
    for (int s = 0; s < NUM_STUDENTS; s++)
    {
        if (averages[s] <= 5)
        {
            average_under_media = averages[s];
            students_under_media = s;
            printf("%s \n", names[students_under_media]);
        }
    }

    return 0;
}