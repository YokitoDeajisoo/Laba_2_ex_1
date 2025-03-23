#include <stdio.h>

int main() {
    double num1, num2;

    // Введення даних
    printf("Enter the first real number: ");
    scanf_s("%lf", &num1); // Виправлено: додано &

    printf("Enter the second real number: ");
    scanf_s("%lf", &num2); // Виправлено: додано &

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