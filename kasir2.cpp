#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int jumbar2[7];
int harbars[7];
string nambel[7];
int jumbar,harbar,tobar,hartol,bayar,kembalian;
    string nambar, bonus;
int altol;
int aljum;
int minim = 10;
bool bonuss = false;
string loop;
int a = 0;

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

        cout <<"Struk Di Print Dalam 5 detik";
        Sleep(5000);
        system("cls");
        cout<<"======================================\n";
        cout<<"\t Topat Mart\n";
        cout<<"======================================\n";
        cout<<"Daftar Belanjaan Anda :\n";
        for (int i = 1; i < a; ++i)
        {
            cout << i << ". " << "Nama : "<< nambel[i] << endl;
            cout << " Harga : " << harbars[i] << endl;
            cout << " Jumlah : " << jumbar2[i] << endl;
        }
        cout << "===========================================" << endl;
        cout<<"Total : "<<altol<<endl;
        cout<<"Uang : "<<bayar<<endl;
        cout<<"kembalian : "<<kembalian<<endl;
        cout << "===========================================" << endl;
        if(bonuss == true)
        {
            cout<<"Bonus : Dapat Bonus"<<endl;
            system("pause");
            cout << "===========================================" << endl;
        }else{
            cout<<"Bonus : Tidak Dapat Bonus"<< endl;
            cout<<"Nambah Barang Lagi? [y/n] : " << endl;
            cout << "===========================================" << endl;
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
    	case 1:
        cout<<"Nama Barang : Terong"<<endl;
        cout<<"Harga : Rp. 10.000"<<endl;
        cout<<"Masukkan Jumlah Barang :";
        cin >> jumbar;
        harbar = 10000;
        count(jumbar,harbar);
        nambel[1] = "Terong";
        harbars[1] = harbar;
        jumbar2[1] = jumbar;
        a += 1;
    	break;

    	case 2:
        cout<<"Nama Barang : Toge"<<endl;
        cout<<"Harga : Rp. 1.000"<<endl;
        cout<<"Masukkan Jumlah Barang :";
    cin >> jumbar;
        harbar = 1000;
        count(jumbar,harbar);
        nambel[2] = "Toge";
        harbars[2] = harbar;
        jumbar2[2] = jumbar;
        a += 1;
    	break;

    	case 3:
        cout<<"Nama Barang : Tomat"<<endl;
        cout<<"Harga : Rp. 11.000"<<endl;
        cout<<"Masukkan Jumlah Barang :";
    cin >> jumbar;
        harbar = 11000;
        count(jumbar,harbar);
        nambel[3] = "Tomat";
        harbars[3] = harbar;
        jumbar2[3] = jumbar;
        a += 1;
    	break;

    	case 4:
        cout<<"Nama Barang : Tuyul"<<endl;
        cout<<"Harga : Rp. 19.000"<<endl;
        cout<<"Masukkan Jumlah Barang :";
    cin >> jumbar;
        harbar = 19000;
        count(jumbar,harbar);
        nambel[4] = "Tuyul";
        harbars[4] = harbar;
        jumbar2[4] = jumbar;
        a += 1;
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

