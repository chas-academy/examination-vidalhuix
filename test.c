#include <stdio.h>

int main()
{
    int input_length = 0;
    int num_students = 5;
    char students [num_students];

    printf("Provide one student information at a time(name followed by 13 marks): ");
    for (int i = 0; i<num_students; i++){
        printf("Student %d", i+1);
        scanf("%s", &students[i]);
        input_length= stdlen(students[i]);
        printf(" %d", input_length);
        for (int j = 0; j<input_length; j++){
            
        }
    }

    return 0;
}