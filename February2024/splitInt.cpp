#include <cstdio>
#include <cstdlib>

int main(){

    short a = 3244;
    short b = a/10;  //devides without the remander
    printf("%u \n", b);
    short c = a % 10;
    printf("%u\n", c);

    void* raw_mem = malloc(sizeof(int));
    int i = 0;
    while(i<sizeof(int)){
        *raw_mem+1 = 234;
        i++;
    }


    return 0;
}