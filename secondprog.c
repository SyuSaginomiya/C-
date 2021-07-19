//secondprog.c
#include <stdio.h>
#include <stdlib.h>
#include "logic.h"




int main(int argc, char *argv[]){
  int in1,in2;
  if(argc!=3){
    puts("PROGRAM_FAILURE");
    exit(-1);
  }
  in1 = atoi(argv[1]);
  in2 = atoi(argv[2]);

  printf("\nIN \t ");
  printf("AND \t OR \t NAND \t NOR \t XOR\n");
  printf("%d %d \t ",in1, in2);
  printf("%d \t %d \t %d \t %d \t %d\n\n",AND(in1,in2), OR(in1,in2), NAND(in1,in2), NOR(in1,in2), XOR(in1,in2));

  return 0;
}

