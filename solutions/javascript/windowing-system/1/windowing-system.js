// @ts-check

/**
 * Implement the classes etc. that are needed to solve the
 * exercise in this file. Do not forget to export the entities
 * you defined so they are available for the tests.
 */

export class Size{
  constructor(width=80, height=60){
    this.width  = width;
    this.height = height;
  }
  
  resize(newWidth, newHeight){
    this.width = newWidth;
    this.height = newHeight;
  }
    
}

export class Position{
  constructor(x=0, y=0){
    this.x = x;
    this.y = y;
  }

  move(newX, newY){
    this.x = newX;
    this.y = newY;
  }
}

export class ProgramWindow{
  constructor(){
    this.screenSize = new Size(800, 600);
    this.size = new Size();
    this.position = new Position();
  }

  resize(Size){
    if(Size.width < 1){
      this.size.width = 1;
    } else if(Size.width > this.screenSize.width - this.position.x){
      this.size.width = this.screenSize.width - this.position.x;
    } else{
      this.size.width = Size.width;
    }

    if(Size.height < 1){
      this.size.height = 1;
    } else if(Size.height > this.screenSize.height - this.position.y){
      this.size.height = this.screenSize.height - this.position.y;
    } else{
      this.size.height = Size.height;
    }

  }

  move(Position){
    const maxX = this.screenSize.width - this.size.width;
    const maxY = this.screenSize.height - this.size.height;
    
    const newX = Math.max(0, Math.min(Position.x, maxX))
    const newY = Math.max(0, Math.min(Position.y, maxY))
    this.position.move(newX, newY);
  }
}

export function changeWindow(ProgramWindow) {
  const newSize = new Size(400, 300)
  ProgramWindow.resize(newSize)

  const newPosition = new Position(100, 150)
  ProgramWindow.move(newPosition)

  return ProgramWindow
}