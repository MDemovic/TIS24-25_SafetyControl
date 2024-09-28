#include <stdio.h>

void hanoi(int n, int a, int b)
{
  if (n == 1) 
    printf("presun kamen 1 z %d na %d\n", a, b); // Correct Order
  else
  {
    hanoi(n - 1, a, 6 - a - b); // Added -b
    printf("presun kamen %d na %d z %d\n", n, a, b); // Wrong Order
    hanoi(n - 1, 6 - a - b, b); // Added -1
  }
}

int main()
{
  int n = 4;

  hanoi(n, 1, 2);
  return 0;
}
