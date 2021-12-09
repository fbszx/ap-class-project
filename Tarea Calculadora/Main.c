#include <stdio.h>

int main()

{
    
    int firstNumber;
    int secondNumber;

   printf("Calculo entre dos numeros enteros (SUMA, RESTA, MULTIPLICACION Y DIVISION) \n");
   printf("Digite el primer valor: ");
   scanf("%d", &firstNumber);
   printf("Digite el segundo valor: ");
   scanf("%d", &secondNumber);

   int resultadoSum =firstNumber + secondNumber;
   int resultadoRes = firstNumber - secondNumber;
   int resultadoMul = firstNumber * secondNumber;
   float resultadoDiv = firstNumber / secondNumber;

   printf(" Suma :  %d \n", resultadoSum);
   printf(" Resta :  %d \n", resultadoRes);
   printf(" Multiplicacion :  %d \n", resultadoMul);
   printf(" Division :  %f \n", resultadoDiv);

    return 0;
}
