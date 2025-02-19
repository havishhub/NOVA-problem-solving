#include <stdio.h>
int isPrime(int n) {
    if (n < 2) 
        return 0;  
    
    int i = 2;
    while (i * i <= n) {  
        if (n % i == 0) 
            return 0;  
        i++;
    }
    return 1;  
}

int main() {
    int N;
    scanf("%d", &N);
    if (isPrime(N))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
