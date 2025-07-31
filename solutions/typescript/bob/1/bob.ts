const isQuestion = (text: string): boolean => {
  return text[text.length - 1] === '?'
}

const isYelling = (text: string): boolean =>{
  return text === text.toUpperCase() && text !== text.toLowerCase();
}

const isOnlyWhitespace = (text: string) => {
    return text.trim() === '';
}


export function hey(message: string): string {

  if(isYelling(message)) return isQuestion(message) ? "Calm down, I know what I'm doing!" :  "Whoa, chill out!"

  if(isQuestion(message.trim())) return 'Sure.'
  
  if(isOnlyWhitespace(message)) return "Fine. Be that way!"

  return "Whatever."
  
}