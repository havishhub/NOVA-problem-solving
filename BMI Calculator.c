
#include <stdio.h>
int calculate_course_count(int language_count) {
    return 2 * language_count;
}

int main() {
    int language_count;
    //printf("Enter the number of languages: ");
    scanf("%d", &language_count);
    if (language_count > 0 && language_count < 101) {  
        printf("%d", calculate_course_count(language_count));
    } else {
        printf("INVALID INPUT");
    }

    return 0;
}
