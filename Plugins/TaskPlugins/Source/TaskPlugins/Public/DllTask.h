#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DllTask.generated.h"


UCLASS(Blueprintable,BlueprintType)
class TASKPLUGINS_API ADllTask : public APawn
{
    GENERATED_BODY()
	public:

	UFUNCTION(BlueprintCallable,Category="Dll")
	void HelloDll();
};
