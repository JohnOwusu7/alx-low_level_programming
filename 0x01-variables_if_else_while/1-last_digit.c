#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
0-positive_or_negative.c int n;

0-positive_or_negative.c srand(time(0));
0-positive_or_negative.c n = rand() - RAND_MAX / 2;

0-positive_or_negative.c if ((n % 10) > 5)
0-positive_or_negative.c {
0-positive_or_negative.c printf(Last digit of %d is %d and is greater than 5n, n, (n % 10));
0-positive_or_negative.c }
0-positive_or_negative.c else if ((n % 10) == 0)
0-positive_or_negative.c {
0-positive_or_negative.c printf(Last digit of %d is %d and is 0n, n, (n % 10));
0-positive_or_negative.c }
0-positive_or_negative.c else
0-positive_or_negative.c {
0-positive_or_negative.c printf(Last digit of %d is %d and is less than 6 and not 0n, n, (n % 10));
0-positive_or_negative.c }
0-positive_or_negative.c return (0);
}
