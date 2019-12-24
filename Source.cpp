#include <iostream>
#include <conio.h>

using namespace std;

class Persegi
{
public:
	int Sisi;

	//Constructor
	Persegi()
	{
		Sisi = 4;
		cout << "Ini adalah constructor persegi" << endl;
	}
	
	//Copy Constructor
	Persegi(const Persegi& obj)
	{
		Sisi = obj.Sisi;
		cout << "Ini adalah copy constructor Persegi" << endl;
	}

	int HitungLuas()
	{
		return Sisi * Sisi;
	}

	//Desctructor
	~Persegi()
	{
		cout << "Persegi Dimusnahkan Dari Memori" << endl;
	}
};


int main() 
{
	{
		Persegi P;
		cout << "Sisi : " << P.Sisi << endl << endl; //Dijalankan Dan Dengan Manambahkan Perintah Dari Contructor

		Persegi Q = P; //Menjalankan Copy Constructor
		cout << "Sisi yang terdapat dalam objek Q = " << Q.Sisi << endl;

		_getch();
	}
	return 0;
}
