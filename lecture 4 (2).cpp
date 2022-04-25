#include <iostream>
using namespace std;

int main ()
{
char f[26];
char *k;
cin>>f;
k=f;
for (*k=0; *k<=26; *k++);
std::cout << f << std::endl;

return 0;

}
