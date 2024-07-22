UAbilityTask_MoveCharacterToLocation* NewTask = NewObject<UAbilityTask_MoveCharacterToLocation>(Ability, UAbilityTask_MoveCharacterToLocation::StaticClass());
NewTask->InitTask(Ability, YourCharacter, TargetLocation);
