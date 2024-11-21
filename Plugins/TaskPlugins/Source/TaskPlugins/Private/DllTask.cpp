#include "DllTask.h"

void ADllTask::HelloDll()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1,200.0f,FColor::Red,"Hello World!");
    }
}
