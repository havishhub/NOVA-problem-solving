#include <stdio.h>
#include <stdbool.h>
bool is_sufficiently_hydrated(int daily_water_intake_ml) {
    return (daily_water_intake_ml >= 2000);
}

int main(void) {
    int test_cases, daily_water_intake_ml;
   // printf("Enter number of test cases: ");
    scanf("%d", &test_cases);

    while (test_cases > 0) {
        //printf("Enter daily water intake (in ml): ");
        scanf("%d", &daily_water_intake_ml);
        if (is_sufficiently_hydrated(daily_water_intake_ml)) {
            printf("YES\n");  // Sufficiently hydrated
        } else {
            printf("NO\n");   // Not hydrated enough
        }

        test_cases--;
    }

    return 0;
}
