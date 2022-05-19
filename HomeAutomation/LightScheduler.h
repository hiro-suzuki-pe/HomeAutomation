#ifndef D_LightScheduler_H
#define D_LightScheduler_H
#include "HomeAutomation.h"

enum Day{
    NONE=-1, EVERYDAY=10, WEEKDAY, WEEKEND,
    SUNDAY=1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};

typedef enum Day Day;

void LightScheduler_Create(void);
void LightScheduler_Destroy(void);
void LightScheduler_ScheduleTurnOn(int id, Day day, int minutesOfDay);
void LightScheduler_ScheduleTurnOff(int id, Day day, int minutesOfDay);
void LightScheduler_Wakeup(void);

#endif