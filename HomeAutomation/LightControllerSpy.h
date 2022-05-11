#include "LightController.h"

enum{
    LIGHT_ID_UNKNOWN = -1,
    LIGHT_STATE_UNKNOWN = -1,
    LIGHT_OFF = 0, 
    LIGHT_ON = 1
};

int LighControllerSpy_GetLastId(void);
int LighControllerSpy_GetLastState(void);
