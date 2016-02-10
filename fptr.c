
typedef void (*fonction_ptr) (int arg1, ...);

void *handle = dlopen("/path/to/.so", RTLD_LAZY);

char *error = dlerror();

if(error){ printf(error); return; }

fonction_ptr fptr = 
(fonction_ptr)dlsym(handle, "fonction");

if (fptr) { fptr(13); }

dlcose(handle);
