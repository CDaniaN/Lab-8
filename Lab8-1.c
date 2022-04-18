#include <stdio.h>

int main()
{
   const int maxInput = 100;
   int i;
   double number, average, sum = 0.0;
   for (i = 1; i <= maxInput; ++i)
   {
     printf("%d. Enter a number: ", i);
     scanf("%lf", &number);

     if (number < 0.0) // if number is negative calculate average and print sum and average
     {
       average = sum / (i - 1);
       printf("Sum = %.2f\n", sum);
       printf("Average = %.2f\n", average);
       return 0;
     }
     else // sum = sum + number
     {
       sum += number;
     }
   }
}
