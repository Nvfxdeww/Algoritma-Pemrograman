#include <iostream>
using namespace std;
int main()
{
int a, b, c;
cout<<"Masukan Nila A = ";
cin>>a;
/* Proses */
b = (a + 4 < 10);
c = !(b);
cout<<endl<<"Program Ekspresi NOT"<<endl;
cout<<"Nilai A = "<<a<<endl;
cout<<"Nilai b = (a + 4 < 10) = "<<b<<endl;
cout<<"Nilai c = !(b) = \n"<<c<<endl;
system("pause");
return 0;
}