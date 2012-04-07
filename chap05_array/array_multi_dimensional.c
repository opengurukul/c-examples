#include <stdio.h>
 
enum { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
 
#define MAX_MONTHS 12		/* number of months */
#define MAX_DAYS   31		/* days in month */
 
char *month_name[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
 
int main ()
{
  int holiday[MAX_MONTHS][MAX_DAYS];
  int month;
  int day;
 
  /* initialize every day as not a holiday */
  for (month = 0; month < MAX_MONTHS; month++)
    for (day = 0; day < MAX_DAYS; day++)
      holiday[month][day] = 0;
 
  /* set OpenGurukul / Matsya Technologies holiday list */
  holiday[MAY][0] = 1;		/* 1st May is a labour day */
  holiday[DEC][24] = 1;		/* 25th Dec is Christmas */
 
  /* display holiday list */
  for (month = 0; month < MAX_MONTHS; month++)
    {
      for (day = 0; day < MAX_DAYS; day++)
	{
	  if (holiday[month][day])
	    {
	      printf ("%d %s is a holiday\n", day + 1, month_name[month]);
	    }
	}
    }
}
 
