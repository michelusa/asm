#include <stdio.h>
#include <stdint.h>

int main()
{

	int32_t x = 11;
	int32_t y = 12;
	int32_t result;
/*
   find more at
    https://gcc.gnu.org/onlinedocs/gcc-10.1.0/gcc/Extended-Asm.html#Extended-Asm
    */
	asm volatile (
			"imull %%ecx,%%eax;"
			: "=a" (result)        //output from eax
			: "a" (x), "c" (y)     //input to eax and ecx
			);
	printf("hello asm %d\n", result);
}
