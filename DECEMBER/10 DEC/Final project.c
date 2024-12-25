#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

void writeTravelNumber(char *weekDays[], int travelDay[])
{
  for (int i = 0; i < 7; i++)
  {
    printf("%s: ", weekDays[i]);
    scanf("%d", &travelDay[i]);
  }
}

int i;

int main()
{
  setlocale(LC_ALL, "Portuguese_Portugal.1252"); // Portuguese language

  // Pre-defined the days of the week
  char *weekDays[] = {
      "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

  int travelDay[7] = {0};

  writeTravelNumber(weekDays, travelDay); // I initialized void 'writeTravelNumber'

  int option;
  char resp;

  do
  {
    printf("\n 1 - Show the days of the week and their respective trips");
    printf("\n 2 - Show the day(s) with the most trips");
    printf("\n 3 - Show the day(s) with the fewest trips");
    printf("\n 4 - Show average trips per week");
    printf("\n 5 - Show average trips per weekend");
    // printf("\n 6 - Show the day(s) of the week that there were 0 trips\n");

    printf("\n Option: ");
    scanf("%d", &option);

    if (option == 1)
    {
      for (i = 0; i < 7; i++)
      {
        printf("%s: %d trips\n", weekDays[i], travelDay[i]);
      }
    }
    else if (option == 2)
    {
      int maxTrips = 0;

      for (i = 0; i < 7; i++)
      {
        if (travelDay[i] > maxTrips)
          maxTrips = travelDay[i];
      }
      printf("The day(s) with the most trips was: ");

      for (i = 0; i < 7; i++)
      {
        if (travelDay[i] >= maxTrips)
          printf("%s", weekDays[i]);
      }
    } else if (option == 3) {
      int minTrips = 0;

      for (i = 0; i < 7; i++)
      {
        if (travelDay[i] < minTrips)
        minTrips = travelDay[i];
      }
      printf("The day(s) with the fewest trips was: ");

      for (i = 0; i < 7; i++) 
      {
        if (travelDay[i] <= minTrips)
        printf("%s", weekDays[i]);
      }
    } else if (option == 4) {
      float addAll = 0;

      for (i = 0; i < 7; i++)
      {
        addAll += travelDay[i];
      }
      printf("Average travel per week was: %2.f\n", addAll / 7);
    } else if (option == 5) {
      float addWeekend = 0;

      for (i = 5; i < 7; i++) {
        addWeekend += travelDay[i];
      }
      printf("Average travel per week was: %.2f\n", addWeekend / 2);
    }

    printf("\n Want to see another option? (S/N): ");

    while ((getchar()) != '\n')
    {
    }
    scanf("%c", &resp);
  } while (toupper(resp) == 'S');
  system("cls"); // Clears the exit screen of a program.

  return 0;
}