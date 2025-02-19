#include <stdio.h>
int is_good_turn(int chef_roll, int chefina_roll) {
    return (chef_roll + chefina_roll) > 6;
}
void process_test_cases(int test_cases) {
    int chef_roll, chefina_roll;
    for (int i = 0; i < test_cases; i++) {
        scanf("%d %d", &chef_roll, &chefina_roll);
        printf("%s\n", is_good_turn(chef_roll, chefina_roll) ? "YES" : "NO");
    }
}

int main() {
    int test_count;
    scanf("%d", &test_count);
    process_test_cases(test_count);
    return 0;
}