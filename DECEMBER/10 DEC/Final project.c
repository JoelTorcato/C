#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

void writeTravelNumber (char *weekDays[], int travelDay[]) 
{
  for (int i = 0; i < 7; i++) 
  {
    printf("%s: ", weekDays[i]);
    scanf("%d", &travelDay[i]);
  }
}

int main () {
  setlocale(LC_ALL, "Portuguese_Portugal.1252"); // Portuguese language

  // Pre-defined the days of the week 
  char *weekDays[] = {
    "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
  };

  int travelDay[6] = {0}; 

  writeTravelNumber(weekDays, travelDay); // I initialized void 'writeTravelNumber'

  int opcao;
  do {
        printf("\n 1 - Show the days of the week and their respective trips");
        printf("\n 2 - Show the day(s) with the most trips");
        printf("\n 3 - Show the day(s) with the fewest trips");
        printf("\n 4 - Show average trips per week");
        printf("\n 5 - Show average trips per weekend");
        printf("\n 6 - Show the day(s) of the week that there were 0 trips"); // See better

  return 0;
  }
}