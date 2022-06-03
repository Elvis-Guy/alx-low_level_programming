#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d the number is positive\n", n);
}
if (n < 0)
{
printf("%d the number  is negative\n", n);
}
if (n == 0)
{
printf("%d the number is zero\n", n);
}
return (0);
}
