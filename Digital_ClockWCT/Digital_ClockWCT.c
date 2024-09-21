#include<stdio.h>
#include<time.h>

int main ()
{
  time_t s,val =1; //time_t: used to store and manipulate calender time(system time) as single value
  struct tm* current_time; //struct tm: A structure that holds date abd time broken down into components(year, month, day, hour, minute, second etc.)
  s = time(NULL); //time in seconds
  current_time = localtime(&s); //to get current time
  printf("%02d : %02d : %02d", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
  return 0;
}