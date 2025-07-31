/// <reference path="./global.d.ts" />
// @ts-check

/**
 * Implement the functions needed to solve the exercise here.
 * Do not forget to export them so they are available for the
 * tests. Here an example of the syntax as reminder:
 *
 * export function yourFunction(...) {
 *   ...
 * }
 */

export function cookingStatus(remainingTime){
  switch(remainingTime){
    case 0:
      return 'Lasagna is done.';
    case undefined:
      return 'You forgot to set the timer.';
    default:
      return 'Not done, please wait.'
  }
}

export function preparationTime(layers, prepTime=2){
  return layers.length * prepTime;
}

const noodle = 50;
var sauce = 0.2;

export function quantities(layers){
  var nQ = 0;
  var sQ = 0;
  
  for(var i = 0; i < layers.length; i++){

    if(layers[i] == 'noodles'){
      nQ++;
    } else if(layers[i] == 'sauce'){
      sQ++;
    }
  } 

  return{
    noodles: nQ * noodle,
    sauce: sQ * sauce,
  };
}

export function addSecretIngredient(friendList, myList){
  myList.push(friendList[friendList.length - 1])
}

export function scaleRecipe(recipe, portion=2){
  const scale = portion / 2;
  var newRecipe = {};
  
  for(var key in recipe){
    newRecipe[key] = recipe[key] * scale;
  }
  
  return newRecipe;
}