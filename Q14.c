// Write a program in C to implement Simple Calculator.
#include <stdio.h>

int main() {
    char x;
    int a,b,c;
    printf("Enter the algebraic expression: ");
    scanf("%c", &x);
    printf("Enter the value of a: ") ;
    scanf("%d",&a) ;
    printf("Enter the value of b: ") ;
    scanf("%d",&b) ;
    switch (x){
        case ('+'):
            c = a + b ;
            printf("The value of c is: %d\n", c) ;
            break;
        case ('-'):
            c = a - b ;
            printf("The value of c is: %d\n", c) ;
        
        case ('*'):
            c = a*b;
            printf("The value of c is: %d\n", c) ;
            break;
        case ('/'):
            c= a/b;
            printf("The value of c is: %d\n", c) ;
            
        default :
            printf("Please try again :)\n ") ;
            break ;
    }
    
    return 0;
}

