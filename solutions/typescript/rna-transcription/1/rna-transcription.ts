const rnaCoding = {
    G : 'C',
    C : 'G',
    T : 'A',
    A : 'U'
  }

type RnaKey = keyof typeof rnaCoding

const isRna = (x: any): x is RnaKey => {
  return typeof x === 'string' && x in rnaCoding
} 

export function toRna(dna: string): string {
  let rna = ""
 
  for(let i = 0; i < dna.length; i++){
    if(!isRna(dna[i])){
      throw new Error('Invalid input DNA.')
    }
    rna += rnaCoding[dna[i] as RnaKey]
  }

  
  return rna
}
