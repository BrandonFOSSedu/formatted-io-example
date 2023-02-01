#include <stdio.h>

int main() {
    int a;
    char str[20];

    printf("Enter your age followed by your name: ");
    scanf("%i,%s", &a, str);
    printf("The age is: %i\n", a);
    printf("The name is: %s\n", str);
    scanf("%i,%s", &a, str);
    printf("The age is: %i\n", a);
    printf("The name is: %s\n", str);
    scanf("%i,%s", &a, str);
    printf("The age is: %i\n", a);
    printf("The name is: %s\n", str);
    return 0;
}
