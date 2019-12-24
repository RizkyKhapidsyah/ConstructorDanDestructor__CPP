#include <iostream>
#include <conio.h>

using namespace std;

/*
	CATATAN :
	
	Constructor merupakan fungsi yang pertama kali dijalankan ketika suatu objek dari class tersebut dibuat. 
	Sebuah constructor memiliki nama yang sama degan nama Class dan tidak memiliki return type apapun.
	Constructor biasanya juga digunakan untuk menganti fungsi Inisialisasi pada atribut (variabel).
	Ketika atribut (variabel) sudah diinisialisasi pada Contructor, maka tidak perlu lagi atribut tersebut diinisialisikan
	di fungsi utama (fungsi main).

	Copy Constructor adalah sebuah constructor yang ditujukan untuk membuat objek yang berasal dari objek pada class 
	yang telah dibuat sebelumnya. Copy Constructor akan didefinisikan secara otomatis oleh Compiler.
	Nama sebuah copy contructor sama dengan contructor (sama dengan nama Class). Yang membedakan Copy Constructor dan 
	Constructor saja adalah Parameternya.

	Jika constructor adalah fungsi yang dijalankan ketika sebua object dibuat, maka lain halnya dengan Destructor. 
	Destructor  adalah fungsi yang dijalankan otomatis ketika object tersebut musnah.
	Penamaan Destructor sama dengan nama Class namun awali dengan karakter dildu (~).
*/


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