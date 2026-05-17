#include <math.h>
#include <stdio.h>

int main(void) {
  double radius = 0.00;
  double area = 0.00;
  double surfacearea = 0.00;
  double volume = 0.00;
  const double PI = 3.14159;

  printf("enter radius: ");
  scanf("%lf", &radius);

  area = PI * (radius * radius);
  surfacearea = 4 * PI * pow(radius, 2);
  volume = (4.0 / 3.0) * PI * pow(radius, 2);

  printf("AREA:%.2lf\n", area);
  printf("Surfacearea:%.2lf\n", surfacearea);
  printf("VOLUME:%.2lf\n", volume);

  return 0;
}
