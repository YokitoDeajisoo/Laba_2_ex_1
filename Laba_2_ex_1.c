#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
    // Налаштування локалі для підтримки української мови
    setlocale(LC_ALL, "Ukrainian");
    double num1, num2;

    // Введення даних
    printf("Enter the first real number: ");
    scanf("%lf", &num1); // Виправлено: додано &

    printf("Enter the second real number: ");
    scanf("%lf", &num2); // Виправлено: додано &

    // Обчислення
    double difference = num2 - num1;
    double sum = num1 + num2;
    double average = sum / 2.0;

    // Виведення результатів
    printf("\nThe results:\n");
    printf("Difference (the second is the first): %.2lf\n", difference);
    printf("Arithmetic mean: %.2lf\n", average);
    printf("Sum: %.2lf\n", sum);

    return 0;
}
