#include <stdio.h>


int main()
{
int a,b;
int x=0;
printf("Введите значение a: ");
scanf ("%d", &a);
printf("Введите значение b: ");
scanf ("%d", &b);

if (a>=b)
{
printf("Условие не выпоняется.");
}
x=0;
for(int i=a;i<=b;i++){
x=i*3;
FILE *output;
output=fopen ("output","x");
fprintf (output,"%d\n",x);
fclose (output);

}
return 0;
}
