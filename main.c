////////////////////////////////////////
// main.c

#include <stdio.h>
#include <stdlib.h> // Добавлен заголовочный файл для использования функции exit
#include "calculate.h"

int main(void)
{
float Numeral;
char Operation[10]; // Увеличен размер массива для операции
float Result;

printf("Число: ");
if (scanf("%f", &Numeral) != 1)
{
fprintf(stderr, "Ошибка ввода числа.\n");
exit(EXIT_FAILURE);
}

printf("Операция (+, -, *, /, pow, sqrt, sin, cos, tan): ");
if (scanf("%9s", Operation) != 1)
{
fprintf(stderr, "Ошибка ввода операции.\n");
exit(EXIT_FAILURE);
}

Result = Calculate(Numeral, Operation);
printf("%6.2f\n", Result);

return 0;
}

