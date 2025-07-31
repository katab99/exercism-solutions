export class DnDCharacter {
  strength: number
  dexterity: number
  constitution: number
  intelligence: number
  wisdom: number
  charisma: number
  hitpoints: number


  constructor(){
    this.strength = DnDCharacter.generateAbilityScore()
    this.dexterity = DnDCharacter.generateAbilityScore()
    this.constitution = DnDCharacter.generateAbilityScore()
    this.intelligence = DnDCharacter.generateAbilityScore()
    this.wisdom = DnDCharacter.generateAbilityScore()
    this.charisma = DnDCharacter.generateAbilityScore()
    this.hitpoints = 10 + DnDCharacter.getModifierFor(this.constitution)
  }

  public static generateAbilityScore(): number {
    const diceNums: number[] = []
    let minDice = 6

    for(let i = 0; i < 4; i++){
      const diceValue = Math.random() * 5 + 1 
      diceNums.push(diceValue)

      if(diceValue < minDice) minDice = diceValue
    }

    const minIndex = diceNums.indexOf(minDice)
    if(minIndex !== -1) diceNums.splice(minIndex, 1)
    
    return diceNums.reduce((acc, curr) => acc + curr, 0)
  }

  public static getModifierFor(abilityValue: number): number {
    return Math.floor((abilityValue - 10) / 2)
  }
}
