#include <stdio.h>
float calculate_body_mass_index(float height_meters, float weight_kg) {
    return weight_kg / (height_meters * height_meters);
}

int main() {
    float body_height_meters = 1.82;
    float body_weight_kg = 72;
    printf("%f", calculate_body_mass_index(body_height_meters, body_weight_kg));
    return 0;
}
