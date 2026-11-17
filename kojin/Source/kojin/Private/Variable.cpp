// Fill out your copyright notice in the Description page of Project Settings.


#include "Variable.h"
#include "Kismet/KismetSystemLibrary.h"


// Called when the game starts or when spawned
void AVariable::BeginPlay()
{
	Super::BeginPlay();

	FString Message = "C++ Hello World!";
	
	UKismetSystemLibrary::PrintString(this, Message, true, true, FColor::Cyan, 2.0f, TEXT("None"));
}
