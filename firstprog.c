//firstprog
#include <stdio.h>
#include <stdlib.h>

#define W 1
#define b 0

int AND(int p, int q);
int OR(int p, int q);
int NAND(int p, int q);
int NOR(int p, int q);
int XOR(int p, int q);

int main(int argc, char *argv[]){
  int in1,in2;
  if(argc!=3){
    puts("PROGRAM_FAILURE");
    exit(-1);
  }
  in1 = atoi(argv[1]);
  in2 = atoi(argv[2]);

  //printf("\nin1 : %d \t in2 : %d\n",in1,in2);

  printf("\nIN \t ");
  printf("AND \t OR \t NAND \t NOR\n");
  printf("%d %d \t ",in1, in2);
  printf("%d \t %d \t %d \t %d\n\n",AND(in1,in2), OR(in1,in2), NAND(in1,in2), NOR(in1,in2), XOR(in1,in2));

  return 0;
}

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
  return AND(OR(p,q)*W,NAND(p,q)*W);
}
