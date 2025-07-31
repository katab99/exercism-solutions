// @ts-check

/**
 * Calculates the sum of the two input arrays.
 *
 * @param {number[]} array1
 * @param {number[]} array2
 * @returns {number} sum of the two arrays
 */
export function twoSum(array1, array2) {
  var num1 = array1.join('');
  var num2 = array2.join('');
  
  return Number(num1) + Number(num2);
}

/**
 * Checks whether a number is a palindrome.
 *
 * @param {number} value
 * @returns {boolean} whether the number is a palindrome or not
 */
export function luckyNumber(value) {
  var arr1 = String(value);
  var arr2 = arr1.split('');
  arr2 = arr2.reverse();
  arr2 = arr2.join('');
  
  if(arr1 == arr2){
    return true;
  } else {
    return false;
  }
  
}

/**
 * Determines the error message that should be shown to the user
 * for the given input value.
 *
 * @param {string|null|undefined} input
 * @returns {string} error message
 */
export function errorMessage(input) {
  if (!input){
    return 'Required field';
  } else if(!Number(input)){
    return 'Must be a number besides 0';
  } else {
    return '';
  } 
}
