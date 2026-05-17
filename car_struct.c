#include "function.h"
#include <stdio.h>

int main(void) {
  int size, i;

  Cars car[] = {{"Mustang", 2025, 32000},
                {"Corvete", 2026, 68000},
                {"Challenger", 2024, 29000}

  };

  size = sizeof(car) / sizeof(car[0]);

  for (i = 0; i < size; i++) {
    printf("the car %s model is of year %d  and it's worth $%.2f in the "
           "current market.\n\n",
           car[i].car_model, car[i].year, car[i].car_prize);
  }

  return 0;
}
