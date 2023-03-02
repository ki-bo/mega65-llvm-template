#include <memory.h>
#include <stdio.h>

int main() {
  printf("hello world\n");
  POKE(0xD020, 0);
  lpoke(0x40000, 5);
  unsigned char d = lpeek(0x40000);
  POKE(0xD021, d);
  return 0;
}
