#include <stdio.h>
#include <stdbool.h>
bool is_oneful_pair(int first_number, int second_number) {
    return (first_number + second_number + (first_number * second_number) == 111);
}

int main() {
    int first_number, second_number;
  
    scanf("%d %d", &first_number, &second_number);
    if (is_oneful_pair(first_number, second_number)) {
        printf("YES\n");  
    } else {
        printf("NO\n");   
    }

    return 0;
}
