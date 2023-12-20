#include <iostream>

using namespace std;

int main()
{
	/*
	Kullanıcıdan bir sayı alarak, bu sayı boyutu
	kadar ters dik üçgen ekrana bastırınız. 
	*/
	cout << "Boyutu Giriniz: " << endl;
	int boyut;
	cin >> boyut;
	for(int a=1; a<=boyut; a++)//bu for döngüsü iki tane for'u kapsamaktadır.
	{
		for(int b=1; b<a; b++)//ilk for döngüsü boşluk sayısını belirleyecek.
		{
			cout << " ";
		}
		for(int c=1; c<=boyut-a+1; c++)//ikinci for döngüsü yıldız sayısını verecektir.
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}