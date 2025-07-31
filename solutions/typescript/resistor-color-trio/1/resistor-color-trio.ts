const colourCodes = {
    black: 0,
  brown: 1,
  red: 2,
  orange: 3,
  yellow: 4,
  green: 5,
  blue: 6,
  violet: 7,
  grey: 8,
  white: 9
  } 

type ColourKeys = keyof typeof colourCodes

export function decodedResistorValue([first, second, third]: string[]): string {
  const value = colourCodes[second as ColourKeys] === 0 ? 
    colourCodes[first as ColourKeys] :
    colourCodes[first as ColourKeys] * 10 + colourCodes[second as ColourKeys]
  
  const exp = colourCodes[second as ColourKeys] === 0 ? 
    colourCodes[third as ColourKeys] + 1 :
    colourCodes[third as ColourKeys]
  
  if(exp < 3){
    return `${value * 10 ** exp} ohms`
  }else if(exp < 6){
    return `${value * 10 ** (exp - 3)} kiloohms`
  }else if(exp < 9){
    return `${value * 10 ** (exp - 6)} megaohms`
  }else{
    return `${value} gigaohms`
  }
    
}
