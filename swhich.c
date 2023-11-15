#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <unistd.h>
#include <inttypes.h>
typedef u_int32_t u32;
typedef u_int64_t u64;
const u32 N = 26;
const u32 T = 26;
const u32 B = N;
//char alph[] = "O|23456789";
//char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_";
char alph[] = "abcdefghijklmnopqrstuvwxyz_";
#include"shuffle.c"
#include"randomize.c"
#include"func.c"
#include"key.c"
#include"print.c"
#include"encode.c"
#include"encryption_demo.c"
#include"demo.c"
	
int main() {
	encoding_demo();
	//demo();

}
