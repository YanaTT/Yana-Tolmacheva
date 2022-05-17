#include <iostream>
using namespace std;

void Sort(int massive[]){
for (int c=0; c < 10-1; c++) {
for (int b=c+1; b < 10; b++) {
if (massive[c]<massive[b]) {
int a=massive[b];
massive[b]=massive[c];
massive[c]=a;
}
}
}
}

int main(){
int massive[10];
cout << "Введите массив из 10 чисел" << '\n';

for (int i=0; i<10; i++){
cout << " ";
cin >> massive[i];
}

Sort(massive);
for (int b=0; b<10; b++){
cout << massive[b]<<' ';
}

cout << '\n';
return 0;
}
