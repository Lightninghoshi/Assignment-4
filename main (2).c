/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float x1, x2;
    
    printf("Enter your coefficients:");
    scanf("%d %d %d",&a,&b,&c);
    puts("Roots of the equation");
    
    //1. term a x^x
    switch(a){
        case 1: printf("x^2"); break;
        case 0: break;
        case -1: printf("-x^2"); break;
        default: printf("%dx^2",a);
    }
    //2. + sign between a and between
    if(a!=0 && b>0) printf("+");
    switch(b){
        case 1: printf("x");
        case 0:break;
        case -1: printf("-x"); break;
        default: printf("%dx",b);
    }
    
    if((b!=0 || b!=0)&&c>0) printf("+");
    if(c!=0) printf("%d=0\n",c);
    puts("=0");
    
    //calculate roots of the equation
    float sq=b*b-4*a*c;
    if (a==0){
        if(b!=0)
            printf("The answer is %.2f\n",-(float)c/b);
        else printf("No solutions\n");
    }
    else {
        if(sq==0){
            //not done
            printf("The answer is %.2f\n",-(float)b/(2*a));
        }
        else if(sq<0) printf("No solutions\n");
        else {
            //not done
            printf("The answer are %.2f",(-b+sqrt(sq))/(2*a));
            printf("and %.2f\n",(-b-sqrt(sq))/(2*a));
        }
        
    }

    return 0;
}

