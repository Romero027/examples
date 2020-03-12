#include <stdio.h>
#include <string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};
 
int main( ) {

    union Data data;        

    // The size of the union will be large the largest element
    printf( "Memory size occupied by data : %lu\n", sizeof(data));

    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "C Programming");

    // i and f members of union will be corrupted because only one member can contain a value at any given time
    printf( "data.i : %d\n", data.i);
    printf( "data.f : %f\n", data.f);
    printf( "data.str : %s\n", data.str);


    return 0;
}

