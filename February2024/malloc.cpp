#include "stdio.h"
#include <cstdlib>
#include <ctime>
#include <unistd.h>

int main(){
    int length = 1000024;  //allocating  1024 bytes
    void* pointer_to_raw_memory = malloc(length);
    printf("allocated %u bytes", length);

    time_t time_now = time(NULL);
    usleep(3123300);

    free(pointer_to_raw_memory);


    return 0;
}
