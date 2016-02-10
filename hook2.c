#include <stdio.h>
#include <dlfcn.h>

int puts(const char *str){
  fprintf(stdout, "Hooked!\n");
  typedef int (*real_puts_ptr) (const char*);
  real_puts_ptr real_puts = dlsym(RTLD_NEXT,"puts");
  real_puts(str);
}
