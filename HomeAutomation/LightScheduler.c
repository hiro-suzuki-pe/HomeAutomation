#include <time.h>
#include "LightController.h"
#include "LightScheduler.h"

enum { TURN_ON, TURN_OFF};
enum {USED, UNUSED};

typedef struct LightScheduler
{
    int id;
    int event;
    int minuteOfDay;
}   ScheduledLightEvent;

static ScheduledLightEvent scheduledEvent;

void LightScheduler_ScheduleTurnOn(int id, Day day, int minutesOfDay)
{
    scheduledEvent.minuteOfDay = minutesOfDay;
    scheduledEvent.event = TURN_ON;
    scheduledEvent.id = id;
}

void LightScheduler_ScheduleTurnOff(int id, Day day, int minutesOfDay)
{
    scheduledEvent.minuteOfDay = minutesOfDay;
    scheduledEvent.event = TURN_OFF;
    scheduledEvent.id = id;
}

void LightScheduler_Wakeup(void)
{
    Time time;
    TimeService_GetTime(&time);

    if (scheduledEvent.id == UNUSED)
        return;
    if (time.minuteOfDay != scheduledEvent.minuteOfDay)
        return;
    
    if (scheduledEvent.event == TURN_ON)
        LightController_On(scheduledEvent.id);
    else
        LightController_Off(scheduledEvent.id);
}


void LightScheduler_Create(void)
{
    scheduledEvent.id = UNUSED;
}

