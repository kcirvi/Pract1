#include <stdio.h>

int main() {
    int num;
    printf("Введите целое число: ");
    scanf("%d", &num);
    char *result[] = {"Четное", "Нечетное"};
    printf("%s\n", result[num % 2]);
    return 0;
}
