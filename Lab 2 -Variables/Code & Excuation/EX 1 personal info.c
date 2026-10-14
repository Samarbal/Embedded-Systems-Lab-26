// lab 2 excreise 

#include <stdio.h>

main(void) {
    // define variables
    char name[] = "Samar Balousha ";
    int age = 22;
    char date_of_birth[] = "10/12/2004";
    char student_id[] = "2320222601";
    float GPA = 93.02301f;
    char university_name[] = "Al-Aqsa University";
    char college[] = "Faculty of Engineering";
    char marital_status[] = "Single - Not Married";

    // print in one print statement
    printf(
        "Hello Ms Shahed, My name is %s\n"
        "Age: %d\n"
        "Date of Birth: %s\n"
        "University Number: %s\n"
        "Cumulative GPA: %.2f\n"
        "University Name: %s\n"
        "College Name: %s\n"
        "Marital Status: %s\n",
        name, age, date_of_birth, student_id,
        GPA, university_name, college, marital_status
    );
}
