#include <string.h>
#include <stdio.h>
#include <random.h>
#include <unistd.h>
#define INTERVAL 1

int getTemperature(void) {
  int upper = 100;
  int lower = -100;
  int random_number = (int) random_uint32();
  int temperature = (random_number % (upper - lower + 1)) + lower;
  return temperature;
}
int main(void) {
  int temperature;
  while (1) {
    temperature = getTemperature();
    printf("%d\n", temperature);
    sleep(INTERVAL);
  }

  return 0;
}