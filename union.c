#include <string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};
 
int main( ) {

    union Data data;        

    printf( "Memory size occupied by data : %lu\n", sizeof(data));

    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "C Programming");

    printf( "data.f : %f\n", data.f);


    return 0;
}

