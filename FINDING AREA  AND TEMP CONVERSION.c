// finding the  area of triangle 
#include<stdio.h>
int main(){
    float Area,Base,Height;
    printf("Enter the base of the triangle:");
    scanf("%f",&Base);
    printf("Enter the height of the triangle:");
    scanf("%f",&Height);

    Area=0.5*Base*Height;
    printf("Area  of triangle is :%f",Area);
    return 0;
}

//finding the area  of circle
#include<stdio.h>
#define Pi 3.14
int main(){
    float Radius,Area;
    printf("Enter the radius of the cicrcle:");
    scanf("%f",&Radius);
    
    Area=Pi*Radius*Radius;
    printf("Area of circle is: %f",Area);
    return 0;
    
}

// Calculating  SI
#include <stdio.h>

int main() {
    float P,R,T,SI;
    printf("Enter the value of P:");
    scanf("%f",&P);
     printf("Enter the value of R:");
    scanf("%f",&R);
     printf("Enter the value of T:");
    scanf("%f",&T);
    
    SI=P*R*T/100;
    printf("The Simple Intrest of the given values is%f",SI);
    return 0;
}

// Converting C into F
#include <stdio.h>

int main() {
float C,F;
printf("enter the temp in C");
scanf("%fC",&C);
 
 F = (C * 1.8) + 32;
 printf("Temperature in F is %fF",F);

    return 0;
}