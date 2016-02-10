#include <stdio.h>

__attribute__((constructor))
void on_init(){
    printf("Started!\n");
}
