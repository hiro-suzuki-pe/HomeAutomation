#include "HomeAutomation.h"

#define TIME_UNKNOWN    9999

void    FakeTimeService_SetDay(int);
void    FakeTimeService_SetMinute(int);

void TimeService_GetTime(Time *time);
