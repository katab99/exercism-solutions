/// <reference path="./global.d.ts" />
// @ts-check

export function getFirstCard(deck) {
  const [first, ...rest] = deck; 
  return first;
}

export function getSecondCard(deck) {
  const [first, second, ...rest] = deck;
  return second;
}

export function swapTopTwoCards(deck) {
  [deck[0], deck[1]] = [deck[1], deck[0]];
  return deck;
  
}

/**
 * Put the top card of the given deck into a separate discard pile
 *
 * @param {Card[]} deck
 *
 * @returns {[Card, Card[]]} the top card of the given
 * deck and a new deck containing all the other cards
 */
export function discardTopCard(deck) {
  const [first, ...rest] = deck;
  return [first, rest];
}

/** @type Card[] **/
const FACE_CARDS = ['jack', 'queen', 'king'];

/**
 * Insert face cards into the given deck
 *
 * @param {Card[]} deck
 *
 * @returns {Card[]} new deck where the second,
 * third, and fourth cards are the face cards
 */
export function insertFaceCards(deck) {
  const[first, ...rest] = deck;
  const insertedDeck = [first, ...FACE_CARDS, ...rest];
  return insertedDeck;
}
