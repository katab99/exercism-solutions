// @ts-check

export function canExecuteFastAttack(knightIsAwake) {
  return !knightIsAwake;
}

export function canSpy(knightIsAwake, archerIsAwake, prisonerIsAwake) {
 return knightIsAwake || archerIsAwake || prisonerIsAwake;
}

export function canSignalPrisoner(archerIsAwake, prisonerIsAwake) {
  return (!archerIsAwake && prisonerIsAwake);
}

export function canFreePrisoner(
  knightIsAwake,
  archerIsAwake,
  prisonerIsAwake,
  petDogIsPresent
) {
  if(petDogIsPresent && !archerIsAwake){
    return true;
  } else if(!petDogIsPresent && !archerIsAwake && !knightIsAwake && prisonerIsAwake){
    return true;
  } else{
    return false;
  }

}
