let minFix = 50;
let eat = document.getElementById('eat');
let snakeHead = document.getElementById('head');
let container = document.getElementById('gameField');
let scoreContain = document.getElementById("score");
let way = 1;
let step = 20;
let speed = 300;
let snakeNodes = [];
let fieldWidth = 800;
let fieldHeight = 500;
let snakeEatSize = 20;
let elNowX = 0;
let elNowY = 0;
let deltaspeed = 5;
let score = 0;

InitialGame();
RandomEat();
let interval = setInterval(Move,speed);

window.onkeydown = function(e){
    switch(e.keyCode){   //37 - влево  38 - вверх  39 - вправо  40 - вниз
        case 37:  way!=2 ? way = 3: way; break;
        case 38:  way!=0 ? way = 1: way; break;
        case 39:  way!=3 ? way = 2: way; break;
        case 40:  way!=1 ? way = 0: way; break;
    }
}

function InitialGame(){

  AddScore();

  container.style.width = ConvertPx(fieldWidth);
  container.style.height = ConvertPx(fieldHeight);

  snakeHead.style.height = ConvertPx(snakeEatSize);
  snakeHead.style.width = ConvertPx(snakeEatSize);

  eat.style.height = ConvertPx(snakeEatSize);
  eat.style.width = ConvertPx(snakeEatSize);

  let bufStep = step;
  if(step < 10){
    bufStep = step*10;
  }
  width = (parseInt(fieldWidth/100)-1)+bufStep.toString();
  height = (parseInt(fieldHeight/100)-1)+bufStep.toString();

}

function AddScore(){
  scoreContain.innerText = score;
}

function RandomEat(){
    let xStep = parseInt(width/step);
    let yStep = parseInt(height/step);

    let posX = container.offsetLeft + step * parseInt(Math.random()*(xStep - 1))+step;
    let posY = container.offsetTop + step * parseInt(Math.random()*(yStep - 1))+step;

    eat.style.left = ConvertPx(posX);
    eat.style.top = ConvertPx(posY);

}

function ConvertPx(val){
    return val+"px";
}

function Move(){

    let eatX = eat.offsetLeft;
    let eatY = eat.offsetTop;

    let headX = snakeHead.offsetLeft;
    let headY = snakeHead.offsetTop;

    let coordX = snakeHead.offsetLeft;
    let coordY = snakeHead.offsetTop;

    let oldCoordX = coordX;
    let oldCoordY = coordY;

    switch(way){
        case 0: coordY += step; break;
        case 1: coordY -= step; break;
        case 2: coordX += step; break;
        case 3: coordX -= step; break;
    }

    console.log("X:"+coordX+";Y:"+coordY);

    snakeHead.style.left = ConvertPx(coordX);
    snakeHead.style.top = ConvertPx(coordY);

    if(eatX == coordX && eatY == coordY){
        AddBlock(oldCoordX,oldCoordY);
        RandomEat();
    }

    snakeNodes.forEach(function(item){
      elNowX = item.offsetLeft;
      elNowY = item.offsetTop;

      if(elNowX == coordX && elNowY == coordY){
        clearInterval(interval);
        return;
      }

      item.style.left = ConvertPx(oldCoordX);
      item.style.top = ConvertPx(oldCoordY);

      oldCoordX = elNowX;
      oldCoordY = elNowY;

    });
}

function AddBlock(x,y){
    var div = document.createElement('div');
        div.className = "snake";
        div.style.left = ConvertPx(x);
        div.style.top = ConvertPx(y);
        div.style.width = ConvertPx(snakeEatSize);
        div.style.height = ConvertPx(snakeEatSize);
        speed-=deltaspeed;
        score++;
        AddScore();
        snakeNodes.push(div);
    document.body.appendChild(div);
}
