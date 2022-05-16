#include <stdio.h>

int main()

{
int a,b;
int x=0;
printf("Введите значение a: ");
scanf ("%d", &a);
printf("Введите значение b: ");
scanf ("%d", &b);

FILE *output;
output=fopen ("output","w");
for(int i=a;i<=b;i++){
x=i*3;
fprintf (output,"%d\n",x);
}
fclose (output);
return 0;
}
