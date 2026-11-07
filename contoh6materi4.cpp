#include<iostream>
using namespace std;
int main()
{
float a, b, c, d, e, f, g, h;
cout<<"Masukan Nilai a = "; cin>>a;
cout<<"Masukan Nilai b = "; cin>>b;
cout<<"Masukan Nilai c = "; cin>>c;
// Proses
d = a + 4 < 10;
e = b > a + 5;
f = c - 3 >= 4;
g = d && e && f;
cout<<endl<<endl;
cout<<"Program Ekspresi AND"<<endl<<endl;
cout<<"Hasil dari d = a + 4 < 10 adalah "
<<d<<endl;
cout<<"Hasil dari e = b > a + 5 adalah "
<<e<<endl;
cout<<"Hasil dari f = c - 3 >= 4 adalah " <<f;
cout<<endl<<endl;
cout<<"Hasil dari g = d && e && f adalah " <<g;
cout<<endl;
return 0;
}