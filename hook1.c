#include <stdio.h>

int puts(const char *str){
    fprintf(stdout, "Hooked!\n");
}
