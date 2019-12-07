#include <stdio.h>
#include <stdlib.h>
#include "timer.h"

int alarms = 0;
void add_alarm(){
  alarms += 1;
}

void sigint_handler(int signum){
  printf("\nTotal alarms occured: %d\n", alarms);
  printf("Hence, the program was executed for %d seconds.\n", alarms);
  exit(0);
}