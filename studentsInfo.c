#include <stdio.h>
#include <stdlib.h>

struct studentinfo {

    char name[50];
    int ID;
    float Subject[3];
    };

void inputStudents (struct studentinfo *studentsptr, int num ) {
    for ( int i = 0; i < num; i++ ) {
        printf("Student %d info:\n",i + 1); 
        printf("Enter Name >> ");
        scanf(" %s",studentsptr -> name);
        fflush(stdin);
        printf("Enter Student ID >> ");
        scanf(" %d",&studentsptr -> ID);
        
        printf("Enter Subject Mark\n");
        
        for ( int j = 0; j < 3; j++ ) {
        scanf ("%f",&studentsptr -> Subject[j]);
        }
        studentsptr = studentsptr + 1;
        }
}

void displayStudents (struct studentinfo *studentsptr, int num) {
    printf("Student Records\n");
    printf("********************************\n");
    for ( int i = 0; i < num; i++ ) {


    printf("Student %d Info\n",i+1);
    printf("Name: %s\n",studentsptr -> name);
    printf("Student ID: %d\n",studentsptr -> ID);
    printf("Subject  Marks: ");
        float sum = 0;
        float average = 0;
        for ( int j = 0; j < 3; j++ ) {
        sum = sum + studentsptr -> Subject[j];
        }
    
        average = sum / 3;

        printf("%.2f\t",average);

        printf("\n");
        studentsptr = studentsptr + 1;
}
}

int main () {



int num;

printf("Number of Students to input\n>> ");
scanf(" %d",&num);

struct studentinfo students[num];

inputStudents(students,num);

displayStudents(students,num);




/*printf("Student Records\n");
printf("********************************\n");
for ( int i = 0; i < num; i++ ) {


printf("Student %d Info\n",i+1);
printf("Name: %s\n",students[i].name);
printf("Student ID: %d\n",students[i].ID);
printf("Subject  Marks: ");
    float sum = 0;
    float average = 0;
    for ( int j = 0; j < 3; j++ ) {
    sum = sum + students[i].Subject[j];
    }
    
    average = sum / 3;

    printf("%.2f\t",average);

    printf("\n");
}*/


return 0;
}