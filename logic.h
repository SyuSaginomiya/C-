#ifndef LOGIC_H   //二重インクルード防止
#define LOGIC_H

#define W 1
#define b 0

int AND(int p, int q){
  int r;
  //全加算の役割
  r = p*W + q*W + b;

  //活性化関数の役割
  if(r>1) {
    return 1;
  }
  else {
    return 0;
  }
}

int OR(int p, int q){
  int r;
  r = p*W + q*W + b;
  if(r>0) {
    return 1;
  }
  else {
    return 0;
  }
}

int NAND(int p, int q){
  int r;
  r = p*W + q*W + b;
  if(r<2) {
    return 1;
  }
  else {
    return 0;
  }
}

int NOR(int p, int q){
  int r;
  r = p*W + q*W + b;
  if(r<1) {
    return 1;
  }
  else {
    return 0;
  }
}

int XOR(int p, int q){
  return AND(OR(p,q)*W+b,NAND(p,q)*W+b);
}

#endif