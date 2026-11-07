#include<iostream>
using namespace std;
int main()
{
float a, b, c, d, e, f, g, h;
cout<<"Masukan Nilai A = "; cin>>a;
cout<<"Masukan Nilai B = "; cin>>b;
cout<<"Masukan Nilai C = "; cin>>c;
d = a + 5 > 10;
e = b > 5 + a ;
f = c - 4 <= 7;
g = d || e || f;
cout<<endl<<endl;
cout<<"Program Ekspresi OR"<<endl<<endl;
cout<<"Hasil dari d = a + 5 > 10 adalah "
<<d<<endl;
cout<<"Hasil dari e = b > 5 + a adalah "
<<e<<endl;
cout<<"Hasil dari f = c - 4 <= 7 adalah " <<f;
cout<<endl<<endl;
cout<<"Hasil dari g = d || e || f adalah " <<g;
cout<<endl;
system("pause");
return 0;
}