// @ts-check
//
// The line above enables type checking for this file. Various IDEs interpret
// the @ts-check directive. It will give you helpful autocompletion when
// implementing this exercise.

export const getCardPosition = (stack, card) => stack.findIndex((c) => c === card);

export const doesStackIncludeCard = (stack, card) => stack.includes(card);

export const isEachCardEven = (stack) => stack.every((c) => c % 2 === 0);

export const doesStackIncludeOddCard = (stack) => stack.some((c) => c % 2 !== 0);

export const getFirstOddCard = (stack) => stack.find((c) => c % 2 !== 0);

export const getFirstEvenCardPosition = (stack) => stack.findIndex((c) => c%2 === 0);

