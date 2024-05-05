//1. int main () // float nJejari, nLuas; // string name;
//2. int penjumlahan(int a, int b)
     // {
     //   return (a + b)
     // }
//3. int main() {
      //int bilangan;

        //srand(time(0));

        //bilangan = rand() % 10;

        //while (bilangan > 4)
        //{
           //cout << "Bilangan lebih dari 4" << endl;
           // bilangan = rand() % 10;
           //cout << "Bilangannya = " << bilangan << endl;
        //}

           //cout << "Bilangan terakhir = " << bilangan << endl;
      //}

//4. if (bilangan1 == bilangan2)
   //{
	  //status = "Bilangan satu samadengan bilangan dua";
   //}
	  //else if (bilangan1 > bilangan2)
	  //{
		 //status = "Bilangan satu lebih besar dari bilangan dua";
	  //}
	  //else
	   //{
		//status = "Bilangan satu lebih kecil dari bilangan dua";
	   //}
	    //cout << "Bilangan pertama : " << bilangan1 << endl;
	   //cout << "Bilangan kedua : " << bilangan2 << endl;
	   //cout << "Status bilangan : " << status;
   //}
// 5. // int main () {
            //Mahasiswa mhs;
              //cout << "Nomor Mahasiswa : ";
			  //cin >> mhs. nim;
              //cout << "Nama Mahasiswa : ";
              //cin >> mhs. nama;
              //cin >> mhs. nama;
//6. 
#include <iostream>
using namespace std;

int sensorA, sensorB, sensorC;
string nama;

void input()
{
    cout << "Masukkan Nama Kota : ";
    cin >> nama;
    cout << "Masukkan hasil sensor 1 = ";
    cin >> sensorA;
    cout << "Masukkan hasil sensor 2 = ";
    cin >> sensorB;
    cout << "Masukkan hasil sensor 3 = ";
    cin >> sensorC;
}

void display()
{
    int penjumlahan = sensorA + sensorB + sensorC;
    float pembagian = penjumlahan / 3.0;
    cout << "Nama Kota = " << nama << endl;
    cout << "Hasil kualitas udara berdasarkan sensor = " << pembagian << endl;

    if (pembagian >= 75)
    {
        cout << "Kualitas udara : Sehat" << endl;
    }
    else if (pembagian < 75 || sensorA == 45 || sensorB == 45 || sensorC == 45)
    {
        cout << "Kualitas udara : Tidak Sehat" << endl;
    }
}

int main()
{
    char pilihan;
    do
    {
        input();
        display();

        cout << "Apakah anda ingin mengulangi (y/n) ?";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');

    return 0;
}