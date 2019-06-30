/* bitcount cuenta los bits encendidos en x */
#include <stdio.h>

void print2bin( unsigned int x ){
  int i;
  unsigned int mask = ~(~0U >> 1);
  for( i = 32; i > 0; i--, mask >>= 1 ){
    if( x & mask ) putchar( '1' );
    else           putchar( '0' );
  }
}

/* bitcount: cuenta bits 1 en x */
int bitcount( unsigned x ){
  int i = 0;

  while( x ){
    x &= x - 1;
    i++;
  }

  return i;
}

int main(void) {
  unsigned x = ~0U;

  while( x ){
    print2bin( x );
    printf(" = %2d\n", bitcount( x ) );
    x >>= 1;
  }

  return 0;
}


/* output
11111111111111111111111111111111 = 32
01111111111111111111111111111111 = 31
00111111111111111111111111111111 = 30
00011111111111111111111111111111 = 29
00001111111111111111111111111111 = 28
00000111111111111111111111111111 = 27
00000011111111111111111111111111 = 26
00000001111111111111111111111111 = 25
00000000111111111111111111111111 = 24
00000000011111111111111111111111 = 23
00000000001111111111111111111111 = 22
00000000000111111111111111111111 = 21
00000000000011111111111111111111 = 20
00000000000001111111111111111111 = 19
00000000000000111111111111111111 = 18
00000000000000011111111111111111 = 17
00000000000000001111111111111111 = 16
00000000000000000111111111111111 = 15
00000000000000000011111111111111 = 14
00000000000000000001111111111111 = 13
00000000000000000000111111111111 = 12
00000000000000000000011111111111 = 11
00000000000000000000001111111111 = 10
00000000000000000000000111111111 =  9
00000000000000000000000011111111 =  8
00000000000000000000000001111111 =  7
00000000000000000000000000111111 =  6
00000000000000000000000000011111 =  5
00000000000000000000000000001111 =  4
00000000000000000000000000000111 =  3
00000000000000000000000000000011 =  2
00000000000000000000000000000001 =  1
*/