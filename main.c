#include <stdio.h>
int main() {
   int limit = 10;
   int total = 0;
  for (int i = 1; i <= limit; i++)
  {
   total  += i;
   printf("%i\n", i);
  }
  printf("the total of this algorithm is : %i\n", total);
  return 0;
}