#include <stdio.h>
#include <stdlib.h>

struct studentinfo {
        
        char lastname[50];
        char firstname[50];
        char middlename[50];
        int age;
        char bday[10];
        float height;
    };

void inputstudents( struct studentinfo *studentsptr, int studentscount ) {

    for( int i = 0; i < studentscount; i++ ){

        printf("Enter your Last Name: ");
        scanf(" %s", studentsptr -> lastname);
        fflush(stdin);

        printf("Enter your First Name: ");
        scanf(" %s", studentsptr -> firstname);
        fflush(stdin);

        printf("Enter your Middle Name: ");
        scanf(" %s", studentsptr -> middlename);
        fflush(stdin);

        printf("Enter your Age: ");
        scanf(" %d", &studentsptr -> age);


        printf("Enter your Birthdate (mm/dd/yyyy): ");
        scanf(" %s", studentsptr -> bday);
        fflush(stdin);

        printf("Enter your Height: ");
        scanf(" %f", &studentsptr -> height);

        studentsptr = studentsptr + 1;
    }
}

void displaystudents( struct studentinfo *studentsptr, int studentscount ) {
    
    for( int i=0; i<3; i++ ){

        printf("\nLast Name: %s",studentsptr -> lastname);
        printf("\nFirst Name: %s",studentsptr -> firstname);
        printf("\nMiddle Name: %s",studentsptr -> middlename);

        printf("\nAge: %d",studentsptr -> age);
        printf("\nBirth Date: %s",studentsptr -> bday);
        printf("\nHeight: %.2f",studentsptr -> height);
        printf("\n");

        studentsptr = studentsptr + 1;
    }
}


int main()
{
    
    struct studentinfo students[3];

    inputstudents(students, 3) ;

    printf("\nStudents Information:");

    displaystudents(students, 3);

    return 0;
}