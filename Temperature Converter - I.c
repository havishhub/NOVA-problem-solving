#include <stdio.h>

float convertor(float celsius_Degree) {
    return (celsius_Degree * 9.0/ 5) + 32;
}

int main() {
    float celsius_Degree=20.5;
    //scanf("%f",&celsius_Degree);
    printf("%f", convertor(celsius_Degree));
    return 0;
}