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
  // find min, max temperature
  for (i = 0; i < MONTHS; i++) {
    total_rain += data[i].total_rain;
    if (max_temp < data[i].high_temp) {
      max_temp = data[i].high_temp;
      max_month = i;
    }
    if (min_temp > data[i].low_temp) {
      min_temp = data[i].low_temp;
      min_month = i;
    }
  }
  printf("\n%-10s%-12s%-10s%-10s\n","Month","Total Rain","High Temp","Low Temp");
  for(i=0;i<MONTHS;i++){
    printf("%-10s%-12d%-10d%-10d\n",months[i],data[i].total_rain,data[i].high_temp,data[i].low_temp);
  }
  printf ("\nWeather Statistic for the Year:\n");
  printf (" Total Rainfall: %d mm\n", total_rain);
  printf (" Monthly Rainfall: %2.3f mm\n", (double) (total_rain)/MONTHS );
  printf (" Highest Temperature: %d °C in %s \n",max_temp, months[max_month]);
  printf (" Lowest Temperature: %d °C in %s \n",min_temp, months[min_month]); 
  return 0;
}
