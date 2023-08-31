
#include<stdio.h>

#define MAX_SIZE 10
#define SWAP(a,b)({a ^= b; b ^= a; a ^= b;})

int main(void)
{
   int size = 0;
   size = size + MAX_SIZE;

   printf("\n The value of size is [%d]\n",size);

   int x = 10;
   int y = 20;
   SWAP(x, y);
   printf("After swap, x is %d and y is %d\n", x, y);

   #define TEST3 1

   // Code snippets are guarded with a condition checking if a certain macro is defined or not
   #ifdef TEST3
   printf("MACRO TEST3 is defined\n");
   #else
   printf("MACRO TEST3 is NOT defined\n");
   #endif

   // A simple trick to commet multiple lines
   #if 0
   printf("Test\n");
   #endif
   return 0;
}

/*
The above code will be replaced by the compiler(on my mac) as
int main(void)
int main(void)
{
   int size = 0;
   size = size + 10;

   printf("\n The value of size is [%d]\n",size);

   int x = 10;
   int y = 20;
   ({x ^= y; y ^= x; x ^= y;});
   printf("After swap, x is %d and y is %d\n", x, y);





   printf("MACRO TEST3 is defined\n");
# 35 "macro.c"
   return 0;
}
}
*/
