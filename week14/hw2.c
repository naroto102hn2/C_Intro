#include <stdio.h>
#define MONTHS 12

typedef struct wt{
  int total_rain;
  int high_temp;
  int low_temp;
}weather;


int main()
{
  weather data[MONTHS];
  int i;
  char months[MONTHS][10]={"January", "February","March", "April","May","June","July","August","September","October","November","December"};
  int total_rain = 0;
  int max_temp = -100;
  int max_month = 0;
  int min_temp = 100;
  int min_month = 0;
  // read input data for each month
  for (i = 0; i < MONTHS; i++) {
    printf("Weather Data for %s: \n", months[i]);
    printf(" Total Rainfall (mm): ");
    scanf("%d",&data[i].total_rain);
    printf(" High Temperature (C): ");
    scanf("%d",&data[i].high_temp);
    printf(" Low Temperature (C): ");
    scanf("%d",&data[i].low_temp);
  }
  return 0;
}
