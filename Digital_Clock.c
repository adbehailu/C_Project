/*C program to design a digital clock*/
#include <stdio.h> //provides functions for input and output operations
#include <time.h> // provides function for handling and manipulating time and date
#include <unistd.h> //provides access to the POSIX oprating sysytem API
#include <stdlib.h> //provides a varitey of functions for performing standard utility tasks such as memory allocation, process control, conversions and searching/sorting

int main () 
{
int hour, minute, second;
hour=minute=second=0;
while(1)
{
  system("clear"); //clear output screen
  printf("%02d : %02d : %02d", hour, minute, second); //print time in HH : MM : SS format
  fflush(stdout);  //clear output buffer in gcc
  second ++; // increase second
  if (second == 60)  //update hour, minute and second
  {
    minute+=1;
    second =0;
  }
  if(minute == 60)
  {
    hour +=1;
    minute=0;
  }
  if(hour==24)
  {
    hour =0;
    minute =0;
    second =0;
  }
  sleep(1); // wait till 1 second
}
  return 0;
}

