#ifndef TIMER_H_
#define TIMER_H_

extern int alarms;

void add_alarm();
void sigint_handler(int signum);

#endif
