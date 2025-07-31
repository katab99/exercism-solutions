// @ts-check

/**
 * Calculates the total bird count.
 *
 * @param {number[]} birdsPerDay
 * @returns {number} total bird count
 */
export function totalBirdCount(birdsPerDay) {
  var sum = 0;
  for(var i = 0; i < birdsPerDay.length; i++){
    sum += birdsPerDay[i];
  }

  return sum;
}

/**
 * Calculates the total number of birds seen in a specific week.
 *
 * @param {number[]} birdsPerDay
 * @param {number} week
 * @returns {number} birds counted in the given week
 */
export function birdsInWeek(birdsPerDay, week) {
  var startOfWeek = week * 7 - 7;
  var endOfWeek = startOfWeek + 7;
  var sum = 0;
  for(var i = startOfWeek; i < endOfWeek; i++){
    sum += birdsPerDay[i];
  }

  return sum;
}

/**
 * Fixes the counting mistake by increasing the bird count
 * by one for every second day.
 *
 * @param {number[]} birdsPerDay
 * @returns {number[]} corrected bird count data
 */
export function fixBirdCountLog(birdsPerDay) {
  for(var i = 0; i < birdsPerDay.length; i++){
    if(i % 2 == 0){
      birdsPerDay[i]++;
    }
  }  

  return birdsPerDay;
}
