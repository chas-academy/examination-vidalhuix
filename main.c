// Write your code in this file
#include <stdio.h>
#include <string.h>

// #define acts like a global "find replace"
#define STUDENT_NUM 5
#define EXAMS_NUM 13
#define MAX_NAME_LEN 11

struct Student
{
    char name[MAX_NAME_LEN];
    int exam[EXAMS_NUM];
    float average;
};

int main()
{
    struct Student students[STUDENT_NUM];
    char input[100];

    printf("Add student data, (name followed bt 13 examscores): \n");
    for (int i = 0; i < STUDENT_NUM; i++)
    {
        printf("Student %d: ", i + 1);

        // Reads the entire line include spaces
        fgets(input, sizeof(input), stdin);

        // Parse the input using sscanf
        int parsed = sscanf(input, "%10s, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d",
                            students[i].name,
                            students[i].exam[0],
                            students[i].exam[1],
                            students[i].exam[2],
                            students[i].exam[3],
                            students[i].exam[4],
                            students[i].exam[5],
                            students[i].exam[6],
                            students[i].exam[7],
                            students[i].exam[8],
                            students[i].exam[9],
                            students[i].exam[10],
                            students[i].exam[11],
                            students[i].exam[12]

        );
    }

    for (int i = 0; i < STUDENT_NUM; i++)
    {
        printf("%s, ", students[i].name);
    }
    printf("\n");

    return 0;
}
