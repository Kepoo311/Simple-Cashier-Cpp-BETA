#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int jumbar2[50];
int hars[50];
string nambel[4] = {"Terong","Toge","Tomat","Tuyul"};
int jumbar,harbar,tobar,hartol,bayar,kembalian;
    string nambar, bonus;
int altol;
int aljum;
int minim = 10;
bool bonuss = false;
string loop;

void allcount(){
       do{
        cout <<"Harga Semua barang Mu : " << altol << endl;
        DOOO:
        cout<<"Uang Nya Berapa? ";
        cin >> bayar;
        kembalian = bayar - altol;
        if (bayar <= altol){
            cout<<"Uang MU Kurang !!!"<<endl;
            goto DOOO;
        }
        cout<<"Uang Mu : "<< bayar <<"\nkembalian : "<<kembalian<<endl;
        if (aljum >= 10)
        {
            cout<<"Kamu Dapat Motor Karna Beli 10 Barang"<<endl;
            bonuss = true;
        } else if (aljum <= 10)
        {
            cout<<"Kamu Harus Beli "<< aljum - minim << " Lagi Untuk Dapat Bonus Motor"<<endl;
            bonuss = false;
        }

        cout <<"Struk Di Print Dalam 10 detik";
        Sleep(10000);
        system("cls");
        cout<<"======================================\n";
        cout<<"\t Topat Mart --#KepoDes\n";
        cout<<"======================================\n";
        cout<<"Barang Dan Harga :\n";
        cout<<"Nama Terong, Harga : "<< harbar<<endl;
        cout<<"Total : "<<altol<<endl;
        cout<<"Uang : "<<bayar<<endl;
        cout<<"kembalian : "<<kembalian<<endl;
        if(bonuss == true)
        {
            cout<<"Bonus : Dapat Bonus"<<endl;
            system("pause");
        }else{
            cout<<"Bonus : Tidak Dapat Bonus"<< endl;
            cout<<"Nambah Barang Lagi? [y/n] : ";
            cin >> loop;
        }
    }while(loop == "n" | loop == "N");
}

void count(int jums, int harbars){
    do{
        hartol = harbar * jumbar;
        cout<<"Total Harga : "<< hartol<<endl;
        altol = altol + hartol;
        aljum = aljum + jumbar;
        cout<<"Nambah Barang Lagi? [y/n] : ";
        cin >> loop;
    }while(loop == "n" | loop == "N");
}




int main()
{
	int kodebar;

    do{
    cout<<"==========================================\n";
    cout<<"\tTopat Mart\n";
    cout<<"==========================================\n";
    cout<<"Masukkan Kode Barang : ";
    cin >> kodebar;


    switch(kodebar)
    {
    	case 2:
        cout<<"Nama Barang : Terong"<<endl;
        cout<<"Harga : Rp. 10.000"<<endl;
        cout<<"Masukkan Jumlah Barang :";
        cin >> jumbar;
        harbar = 10000;
        count(jumbar,harbar);
    	break;

    	case 3:
        cout<<"Nama Barang : Toge"<<endl;
        cout<<"Harga : Rp. 1.000"<<endl;
        cout<<"Masukkan Jumlah Barang :";
    cin >> jumbar;
        harbar = 1000;
        count(jumbar,harbar);
    	break;

    	case 4:
        cout<<"Nama Barang : Tomat"<<endl;
        cout<<"Harga : Rp. 11.000"<<endl;
        cout<<"Masukkan Jumlah Barang :";
    cin >> jumbar;
        harbar = 11000;
        count(jumbar,harbar);
    	break;

    	case 7:
        cout<<"Nama Barang : Tuyul"<<endl;
        cout<<"Harga : Rp. 19.000"<<endl;
        cout<<"Masukkan Jumlah Barang :";
    cin >> jumbar;
        harbar = 19000;
        count(jumbar,harbar);
    	break;

        case 0:
        allcount();
        break;

    	default:
    	cout<<"error Bro";

    }

}while(kodebar != 10);

allcount();

    getch();
	return 0;
}
