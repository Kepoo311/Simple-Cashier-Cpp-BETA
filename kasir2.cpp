#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>
using namespace std;
int jumbar,harbar,tobar,hartol,bayar,kembalian;
    string nambar, bonus;
int altol;
int aljum;
int minim = 10;
bool bonuss = false;
string loop;

struct Item {
    string name;
    int price;
    int quantity;
};

class MiniMarket {
private:
    vector<Item> cart;

public:
    void addItem(const string& name, int price, int quantity) {
        cart.push_back({name, price, quantity});
    }

    const vector<Item>& getCart() const {
        return cart;
    }
};
    MiniMarket market;

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
        const vector<Item>& cart = market.getCart();
            if (cart.empty()) {
                cout << "Cart is empty." << endl;
            } else {
                cout << "Daftar Belanjaan Anda:\n";
                for (const auto& item : cart) {
                    cout << "Nama: " << item.name << endl;
                    cout << "Harga: " << item.price << endl;
                    cout << "Jumlah: " << item.quantity << endl;
                    cout << "----------------------\n";
                }
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
        if(loop == "n" | loop == "N"){
            allcount();
        }
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
        market.addItem("Terong", harbar, jumbar);
        count(jumbar,harbar);
    	break;

    	case 2:
        cout<<"Nama Barang : Toge"<<endl;
        cout<<"Harga : Rp. 1.000"<<endl;
        cout<<"Masukkan Jumlah Barang :";
        cin >> jumbar;
        harbar = 1000;
        market.addItem("Toge", harbar, jumbar);
        count(jumbar,harbar);
    	break;

    	case 3:
        cout<<"Nama Barang : Tomat"<<endl;
        cout<<"Harga : Rp. 11.000"<<endl;
        cout<<"Masukkan Jumlah Barang :";
        cin >> jumbar;
        harbar = 11000;
        market.addItem("Tomat", harbar, jumbar);
        count(jumbar,harbar);
    	break;

    	case 4:
        cout<<"Nama Barang : Tuyul"<<endl;
        cout<<"Harga : Rp. 19.000"<<endl;
        cout<<"Masukkan Jumlah Barang :";
        cin >> jumbar;
        harbar = 19000;
        market.addItem("Tuyul", harbar, jumbar);
        count(jumbar,harbar);
    	break;

        case 0:
        allcount();
        break;

    	default:
    	cout<<"error Bro";
        exit(EXIT_FAILURE);


    }
}while(kodebar != 10);


allcount();


    getch();
	return 0;
}

