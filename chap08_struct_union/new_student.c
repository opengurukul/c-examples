#include< stdio.h >

void main() {

    struct {
        int id_no;
        char name[20];
        char address[20];
        int age;
    } newstudent;

    printf("Enter the student information");

    printf("Now Enter the student id_no");
    scanf(“ % d”, &newstudent.id_no);

    printf(“Enter the name of the student”);
    scanf(“ % s”, &new student.name);

    printf(“Enter the address of the student”);
    scanf(“ % s”, &new student.address);

    printf(Enter the age of the student”);
    scanf(“ % d”, &new student.age);

    printf(“Student information\n”);

    printf(“student id_number = % d\n”, newstudent.id_no);
    printf(“student name = % s\n”, newstudent.name);
    printf(“student Address = % s\n”, newstudent.address);
    printf(“Age of student = % d\n”, newstudent.age);
}

