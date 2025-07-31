export function decodedValue(colours: string[]): number{
  const colourCodes = {
    black : 0,
    brown : 1,
    red : 2,
    orange : 3,
    yellow : 4,
    green : 5,
    blue : 6,
    violet : 7,
    grey : 8,
    white : 9
  }
 
  type ColourKey = keyof typeof colourCodes
  
  return colourCodes[colours[0] as ColourKey] * 10 + colourCodes[colours[1] as ColourKey]
}
