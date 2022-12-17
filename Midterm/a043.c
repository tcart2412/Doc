#include <stdio.h>

int main (void) {
    long int a, b, c;
    while (scanf("%ld %ld %ld", &a, &b, &c) != EOF){
        if(a > b + c || c > a && a > b && a + b > c || b > a && a > c && a + c > b)
            printf("%c", 'A');           
        else if (b > a + c || c > b && b > a && b + a > c || a > b && b > c && b + c > a)
            printf("%c", 'B');    
        else
            printf("%c", 'C');
        printf("%c",'\n');
    }
}	
