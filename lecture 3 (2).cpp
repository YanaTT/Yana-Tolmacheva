#include <stdio.h>

int main ()
{
int f;
FILE * output;
output = fopen ("output", "r");
for (int i = 1; i <= 8; i++){
fscanf (output, "%d\n", &f);
printf ("%d.%d\n", i, f);

}
fclose (output);
return 0;

}
