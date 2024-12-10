/*Temperature Converter
Description: Write a program to convert temperatures between Fahrenheit, Celsius, and Kelvin.
Features:
Take user input for temperature value and its unit.
Convert it to other units (Celsius ↔ Fahrenheit ↔ Kelvin).
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

double temp;
int unit;
double Celsius;
double Kelvin;
double Fahrenheit;

printf("Choose your temperature unit\n1.Fahrenheit\n2.Celsius\n3.Kelvin\n> ");
scanf("%d",&unit);
if (unit == 1) {
printf("Input temperature value in Fahrenheit\n> ");
scanf("%lf",&temp);
printf("Choose the unit to convert Fahrenheit to\n1.Convert To Celsius\n2.Convert to Kelvin\n> ");
scanf("%d",&unit);
if (unit == 1) {
    Celsius = (temp - 32) * 5/9;
    printf("%.3lfF in Celsius is %.3lf",temp,Celsius);
    
} else if ( unit == 2 ) {
    Kelvin = ( temp - 32 ) * 5/9 + 273.15;
    printf("%.3lfF in Kelvin is %.3lf",temp,Kelvin);
    
}
} else if ( unit == 2 ) {
printf("Input temperature value in Celsius\n> ");
scanf("%lf",&temp);
printf("Choose the unit to convert Celsius to\n1.Convert To Fahrenheit\n2.Convert to Kelvin\n> ");
scanf("%d",&unit);
if (unit == 1) {
    Fahrenheit = temp * (9/5) + 32;
    printf("%.3lfC in Fahrenheit is %.3lf",temp,Fahrenheit);
} else if ( unit == 2 ) {
    Kelvin = temp + 273.15;
    printf("%.3lfC in Kelvin is %.3lf",temp,Kelvin);    
} 
} else if ( unit == 3 ) {
printf("Input temperature value in Kelvin\n> ");
scanf("%lf",&temp);
printf("Choose the unit to convert Kelvin to\n1.Convert To Fahrenheit\n2.Convert to Celsius\n> ");
scanf("%d",&unit);
if (unit == 1) {
    Fahrenheit = (temp - 273.15) * 1.8 + 32;
    printf("%.3lfK in Fahrenheit is %.3lf",temp,Fahrenheit);
   
} else if ( unit == 2 ) {
    Celsius = temp - 273.15;
    printf("%.3lfK in Celsius is %.3lf",temp,Celsius);   
}

} else {
    printf("Please choose a valid unit!!!");
}



    return 0;
}