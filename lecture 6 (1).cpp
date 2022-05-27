#include <iostream>
using namespace std;

void reverse(char *c) {
if (c[0]=='\0')
return;
else {
reverse(&c[1]);
cout<<c[0];
}
}
int main() {
char s[12];
cout<<"Введите текст:";
cin>>s;
cout<<"reverse:";
reverse(s);
return 0;
}
