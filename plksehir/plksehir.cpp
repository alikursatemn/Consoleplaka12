#include<iostream>
#include<stdio.h>
#include<locale.h>
using namespace std;
class şehir {
private:
	string plaka;
public:
	string a[81] = { "adana","adiyaman","afyonkarahisar","agri","amasya","ankara","antalya"
,"artvin","aydin","balikesir","bilecik","bingol","bitlis","bolu","burdur","bursa","canakkale"
,"cankiri","corum","denizli","diyarbakir","edirne","elazıg","erzincan","erzurum","eskisehir"
,"gaziantep","giresun","gumusshane","hakkari","hatay","isparta","mersin","istanbul","izmir"
,"kars","kastamanu","kayseri","kırklareli","kirsehir","kocaeli","konya","kutahya","mayatya"
,"manisa","kahramanmaras","mardin","mugla","mus","nevsehir","nigde","ordu","rize","sakarya"
,"samsun","siirt","sinop","sivas","tekirdag","tokat","trabzon","tunceli","sanlıurfa","usak"
,"van","yozgat","zonguldak","aksaray","bayburt","karaman","kırıkkale","batman","sırnak","bartın"
,"ardahan","ıgdır","yalova","karabük","kilis","osmaniye","duzce" };
	şehir(string  plaka)//constractor(private üyeye ulaşmak için)
	{
		this->plaka = plaka;//this kullandık çünkü privateyle aynı ismi taşıyo
	}


	void sorgula(string)
	{
			for (int i = 0; i < 81; i++)
			{
				if (a[i] == this->plaka)
				{
				cout << i + 1;
				}
			}
			
		
	}
};
int main() {
	int* a;
	int size = 81;
	a = new int[size];
	string p;//plakanın p si
	while (true)
	{
		cout << "\nLutfen kucuk harf kullaniniz" << endl;
		cout << "sehri giriniz" << endl;
		cin >> p;
		şehir şehir(p);
		şehir.sorgula(p);
		
	}
	
	delete[]a;
	
	return 0;
}