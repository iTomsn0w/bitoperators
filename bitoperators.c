#include <stdio.h>
#include <unistd.h>
#include <stdint.h>



int main(){


int a = 14, b = 10;  

printf("a is = %d and b is = %d\n\n",a,b);



printf("bit operators is coming…\n\n");

sleep(2);

printf("\x1b[32mnow with AND %d\n\x1b[0min binary: \033[1m\033[30m00001010\n\x1b[0m", a & b);
printf("\x1b[32mnow a with shift right >> 2 %d\n\x1b[0m", a >> 2);
printf("\x1b[32mnow a with shift left << 2 %d\n\x1b[0m", a << 2);
printf("\x1b[32mnow with OR %d\n\x1b[0m", a | b);
printf("in binary: \033[1m\033[30m00001110\n\x1b[0m");
printf("\x1b[32mnow with XOR (exclusive OR) %d\n\x1b[0m", a ^ b); //00000100
printf("in binary: \033[1m\033[30m00000100\n\x1b[0m");
printf("\x1b[32mnow with bitwise %d\n\x1b[0m",~a); //11110001 -> 00001110
printf("in binary (to understand better) \033[1m\033[30m00001110 -> 11110001 -> -(00001110+1)\n\n\n\x1b[0m");


uint32_t test = 34;

printf("\x1b[32mbefore shifting / masking 'test' is:\x1b[0m \033[1m\033[30m%d\n\x1b[0m",test);

printf("\x1b[32mbefore masking (shift right one):\x1b[0m \033[1m\033[30m%x\n\x1b[0m",test);

uint32_t am = (test >> 1) & 0xff;

printf("\x1b[32mafter masking (and shifting):\x1b[0m \033[1m\033[30m%x\n\x1b[0m",am);


 return 0;
}





