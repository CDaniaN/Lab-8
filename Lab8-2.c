#include <stdio.h>

int check(int num)
{
   if (num % 2 == 0) //if mod num (the remainder) is equal to 0
   {
     num += 2; //num = num + 2
   }
   else
   {
     num -= 1; //num = num - 1
   }
   return num;
}
int main()
{
 int num = 0;
 scanf("%d", &num); // scans num
 printf("%d\n", check(num)); // calls check and gets num
 return 0;
}
