#include <stdio.h>
#include <string.h>




char name[1000][1000];
char grade[1000];
int i;
int kids;
int OCA;
int A;
int B;
int C;
int D;
int F;
int tots[1000];
int sub1[1000];
int sub2[1000];
int sub3[1000];
int sub4[1000];
int sub5[1000];
int sum[1000];


int main () {

printf("How many students grade do you want to enter? >> ");
scanf("%d",&kids);
for ( i = 0; i < kids; i++ ) {
    printf("Enter Student #%d Name >> ",i + 1);
    scanf("%s", &name[i]);
    printf("Enter 1st Subject Mark >> ");
    scanf("%d",&sub1[i]);
    printf("Enter 2nd Subject Mark >> ");
    scanf("%d",&sub2[i]);
    printf("Enter 3rd Subject Mark >> ");
    scanf("%d",&sub3[i]);
    printf("Enter 4th Subject Mark >> ");
    scanf("%d",&sub4[i]);
    printf("Enter 5th Subject Mark >> ");
    scanf("%d",&sub5[i]);
    printf("**********************************\n");
}
for ( i = 0; i < kids; i++) {
    tots[i] = sub1[i] + sub2[i] + sub3[i] + sub4[i] + sub5[i];
    sum[i] = tots[i] / 5;
    if ( sum[i] > 90 ) {
        grade[i] = 'A';
    } else if ( sum[i] > 80 ) {
        grade[i] = 'B';
    } else if ( sum[i] > 70 ) {
        grade[i] = 'C';
    } else if ( sum[i] > 60 ) {
        grade[i] = 'D';
    } else {
        grade[i] = 'F';
    }
}
printf("**********************************\n");
for ( i = 0; i < kids; i++ ) {
    printf("%d.%s \t",i + 1,name[i]);
    printf("%d \t",sum[i]);
    printf("%c\n",grade[i]);
    printf("**********************************\n");
}
for ( i = 0; i < kids; i++ ) {
    OCA = OCA + sum[i];
}
OCA = OCA / kids;
printf("**********************************\n");
printf("Overall Class Average>> %d\n",OCA);
printf("**********************************\n");

for ( i = 0; i < kids; i++ ) {
    if ( grade[i] ==  'A') {
        A = A + 1;
    } else if ( grade[i] == 'B' ) {
        B = B + 1;
    } else if ( grade[i] == 'C' ) {
        C = C + 1;
    } else if ( grade[i] == 'D' ) {
        D = D + 1;
    } else {
        F = F + 1;
    }
}
printf("**********************************\n");
printf("A = %d\n",A);
printf("B = %d\n",B);
printf("C = %d\n",C);
printf("D = %d\n",D);
printf("F = %d\n",F);
printf("**********************************\n");

    return 0;

}
