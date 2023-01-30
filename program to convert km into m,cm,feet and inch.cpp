/*program to convert km into m,cm,feet and inch*/
#include<stdio.h>
int main( )
{
            float km,meter,feet,inch,cm; /*km=kilometer cm=centimeter*/
            printf("enter the distance between the two cities in kilometeres: ");
            scanf("%f",&km);
            meter=1000*km;
            inch=39.3700787*meter;
            feet=3.2808399*meter;
            cm=100*meter;
            printf("\ndistance between the two cities in meter is:%f",meter);
            printf("\ndistance between the two cities in inch is:%f",inch);
            printf("\ndistance between the two cities in feet is:%f",feet);
            printf("\ndistance between the two cities in centi meter is:%f",cm);                  
}
