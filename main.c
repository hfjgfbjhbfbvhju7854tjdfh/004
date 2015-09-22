#include <stdio.h>
#include <strung.h>


int main (int i, char **v ) {

int pid = 0;

if (i>=2) {
printf ("not correct argument\n"); 
return -1;
}

pid = atoi (v[1]); 



return 0;
}
