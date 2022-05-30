#include <iostream>
using namespace std;

int main ()
{
char f[7] = "abc123";
char *k;
k=f;
for (int t=0; t<=6; t++){
(*k)++;
k++;
}
cout << f;

return 0;

}
