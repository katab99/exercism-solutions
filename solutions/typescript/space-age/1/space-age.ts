function round2Dec(num: number): number{
  return parseFloat(num.toFixed(2))
}

export function age(planet: string, seconds: number): number {
  const earthYears = seconds / 31557600

  switch(planet){
    case 'mercury':
      return round2Dec(earthYears / 0.2408467 )
    case 'venus':
      return round2Dec(earthYears / 0.61519726)
    case 'earth':
      return round2Dec(earthYears)
    case 'mars':
      return round2Dec(earthYears / 1.8808158)
    case 'jupiter':
      return round2Dec(earthYears / 11.862615)
    case 'saturn':
      return round2Dec(earthYears / 29.447498)
    case 'uranus':
      return round2Dec(earthYears / 84.016846)
    case 'neptune':
      return round2Dec(earthYears / 164.79132) 
    default:
      return round2Dec(earthYears)
  }
  
}
