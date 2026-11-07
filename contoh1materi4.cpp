#include <iostream>
using namespace std;
int main()
{
int x,y, a, b, c, d;
cout<<"Masukan Nilai x : "; cin>>x;
cout<<"Masukan Nilai y : "; cin>>y;
a=x+y; c = x% y;
b=x-y; d = x * y;
printf("Hasil Dari A = X + Y = %i \n" , a);
printf("Hasil Dari B = X - Y = %i \n",b);
cout<<" Hasil dari C = X % Y = "<<c<<endl;
cout<<" Hasil dari D = X * Y = "<<d<<endl;
system("pause");
return 0;
}