#include <iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class Zaman
{
public:
	Zaman();//Constructor
	Zaman(int a) { sa = a; }//constructor
	void zamanAyarla(int, int, int);
	void zamanYazdir();
private:
	int sa, dk, sn;

};
void Zaman::zamanAyarla(int h, int m, int s) {
	sa = ((h>=0 && h<24) ? h:0);
	dk = ((m>=0 && m<60) ? m:0);
	sn = ((s>=0 && s<60) ? s:0);
}
Zaman::Zaman() {
	sa = 0;
	dk = 0;
	sn = 0;
}
void Zaman::zamanYazdir()
{
	cout<<(sa<10 ? "0" :"")
		<<((sa== 0 || sa== 12) ? 12 : sa % 12)<<" : "//mesela saati 13 ise 1 gösterecek 
		<<(dk<10 ? "0" : "")<<dk<<" : "
	    <<(sn<10 ? "0" : "")<<sn<<" : "
	    <<(sa < 12 ? "AM" : "PM") 
		<< endl;
}

int main()
{
	Zaman z;//varsayılan constructor çağrıldı.
	Zaman z2;//varsayilan costructor çağrıldı.constru
	Zaman z3(5);//2.constructor çağrıldı.
	//Zaman *z4://constructor çağrılmıyor.
	//z4 = new Zaman();//varsayılan constuctor çağrıldı.
	Zaman* z4 = new Zaman(6);//c onstructorçağrıldı.
	z.zamanAyarla(5,6,9);
	z.zamanYazdir();
	system("pause");
	return 0;
}

