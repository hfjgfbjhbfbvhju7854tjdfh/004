#include <stdio.h>
#include <string.h>


int main (int i, char **v ) {

int pid = 0;
FILE *fl;
char str [10];
char name[BUFSIZ];


if (i>=3) {
printf ("not correct argument \n"); 
return -1;
}

pid = atoi (v[1]); 
sprintf (name, "/proc/%d/status", pid );
fl = fopen ( name );
if (fl == NULL) {printf ("file not open\n"); return -1;}

//fread ( str, sizof(char), 5, name );

printf ("%s\n", str);

fclose (fl);
return 0;
}
