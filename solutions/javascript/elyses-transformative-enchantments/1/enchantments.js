// @ts-check

/**
 * Double every card in the deck.
 *
 * @param {number[]} deck
 *
 * @returns {number[]} deck with every card doubled
 */
export function seeingDouble(deck) {
  return deck.map((number) => 2 * number);
}

/**
 *  Creates triplicates of every 3 found in the deck.
 *
 * @param {number[]} deck
 *
 * @returns {number[]} deck with triplicate 3s
 */
export function threeOfEachThree(deck) {
  for(let i = 0; i < deck.length; i++) {
    if(deck[i] === 3) {
      deck.splice(i, 0, 3, 3);
      i += 2;
    }
  }

  return deck;
}

/**
 * Extracts the middle two cards from a deck.
 * Assumes a deck is always 10 cards.
 *
 * @param {number[]} deck of 10 cards
 *
 * @returns {number[]} deck with only two middle cards
 */
export function middleTwo(deck) {
  const middle = Math.floor(deck.length / 2);
  return deck.slice(middle - 1, middle + 1);
}

/**
 * Moves the outside two cards to the middle.
 *
 * @param {number[]} deck with even number of cards
 *
 * @returns {number[]} transformed deck
 */

export function sandwichTrick(deck) {
  // delete first and last elem
  const firstElem = deck[0];
  const lastElem = deck[deck.length - 1];
  deck = deck.slice(1, -1);

  // insert first and last to the middle
  const middle = Math.floor(deck.length / 2);
  deck.splice(middle, 0, lastElem, firstElem);

  return deck;
}

/**
 * Removes every card from the deck except 2s.
 *
 * @param {number[]} deck
 *
 * @returns {number[]} deck with only 2s
 */
export function twoIsSpecial(deck) {
  return deck.filter((number) => number === 2);
}

/**
 * Returns a perfectly order deck from lowest to highest.
 *
 * @param {number[]} deck shuffled deck
 *
 * @returns {number[]} ordered deck
 */
export function perfectlyOrdered(deck) {
  deck.sort((num1, num2) =>{
    if(num1 < num2){
      return -1;
    }
    if(num1 > num2){
      return 1;
    }
    return 0;
  });
  return deck;
}

/**
 * Reorders the deck so that the top card ends up at the bottom.
 *
 * @param {number[]} deck
 *
 * @returns {number[]} reordered deck
 */
export function reorder(deck) {
  return deck.reverse();
}
