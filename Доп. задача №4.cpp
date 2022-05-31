// Класс Table. Свойства Columns и Rows - число колонок и строк в таблице; 
//Values[C][R] - массив значений в таблице, создается в конструкторе.
// Метод Value (A, B) возвращает значение элемента в колонке А и строке В

#include <iostream>
using namespace std;

class Table 
{
 
public:
 int Rows;
 int Columns;
 int Values[10][10];
 Table(int R, int C){
 Columns = C;
 Rows = R;
 for(int i=0; i<R; i++)
 for(int j=0; j<C; j++)
 cin»Values[i][j];
 }
 void Value(int R, int C)
 {
 cout«Values[R-1][C-1]«endl;
 
 }
};

int main()
{
 Table myTable(4, 4);
 myTable.Value(2,3);
 return 0;
}
