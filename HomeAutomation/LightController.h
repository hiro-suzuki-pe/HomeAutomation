void    LightScheduler_Create(void);
void    LightScheduler_Destroy(void);

void    LightScheduler_ScheduleTurnOn(int , int, int );
void    LighScheduler_Wakeup();
void    LightController_On(int id);

int LightControllerSpy_GetLastId(void);
int LightControllerSpy_GetLastState(void);
