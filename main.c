#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, a;

   int t1 = 1, t2 = 2;

   int nextTerm = t1 + t2;

   printf("Enter the number that you want");

   scanf("%d", &a);

   printf("Fibonacci Series: %d, %d,", t1, t2);

   for (i = 3 ; i <= a ; i++){
        printf("%d,", nextTerm);
        t1=t2;
        t2= nextTerm;
        nextTerm = t1 + t2;

   }
    return 0;
}
