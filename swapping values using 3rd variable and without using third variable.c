//swapping value without using third variable
#include<stdio.h>
int main(){
    
    int a,b;
    a=34;
    b=45;
    printf("Given value of a is %d\n",a);
    printf("Given value of b is %d\n",b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("Swapped value of a is %d\n",a);
    printf("Swapped value of b is %d\n",b);
    return 0;
}

//swapping value using third variable
#include<stdio.h>

int main(){
    
    int a,b,c;
    a=34;
    b=45;
    printf("Given value of a is %d\n",a);
    printf("Given value of b is %d\n",b);
    
    c=a;
    a=b;
    b=c;
    
    printf("Swapped value of a is %d\n",a);
    printf("Swapped value of b is %d\n",b);
    printf("Swapped value of c is %d\n",c);
    return 0;
}