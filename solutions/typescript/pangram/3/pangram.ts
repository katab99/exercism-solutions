export function isPangram(sentence: string): boolean {
  const alphabet = 'abcdefghijklmnopqrstuvwxyz'
  const distinctLetters: string[] = []

  for(const letter of sentence){
    const lowerLetter = letter.toLowerCase()
    if (alphabet.includes(lowerLetter) && !distinctLetters.includes(lowerLetter)){
      distinctLetters.push(lowerLetter)
    } 
  }
  
  return distinctLetters.length === 26
}
