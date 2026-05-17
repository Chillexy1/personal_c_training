#include <math.h>
#include <stdio.h>

int main(void) {
  double principle = 0.00;
  double rate = 0.00;
  int years = 0;
  int timescompounded = 0;
  double total = 0.00;

  printf("COMPOUND INTEREST CALCULATOR\n");

  printf("enter principle(p): ");
  scanf("%lf", &principle);

  printf("enter rate %%(r): ");
  scanf("%lf", &rate);
  rate = rate / 100; // formula to get the rate of an amount

  printf("enter year(t):");
  scanf("%d", &years);

  printf("how often does interest occur(n): ");
  scanf("%d", &timescompounded);

  total = principle * pow(1 + rate / timescompounded, years * timescompounded);
  printf("for %d years, your compunded interest is $%.2lf\n", years, total);

  return 0;
}
