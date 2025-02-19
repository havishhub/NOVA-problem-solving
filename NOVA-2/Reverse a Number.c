#include <stdio.h>
int reverseNumber(int n) {
    int reversed = 0;
    
    while (n > 0) {
        int digit = n % 10;     
        reversed = reversed * 10 + digit;  
        n /= 10;                
    }
    
    return reversed;
}

int main() {
    int num;
    scanf("%d", &num);
    if (num < 0) 
        printf("-%d\n", reverseNumber(-num));  
    else 
        printf("%d\n", reverseNumber(num));  

    return 0;
}
