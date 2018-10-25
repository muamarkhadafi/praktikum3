#include<iostream>

using namespace std;

int main ()
{
    int A,B,C;
    cout<<"MASUKAN BILANGAN 1: ";
    cin>> A;
    cout<<"MASUKAN BILANGAN 2: ";
    cin>> B;
    cout<<"MASUKAN BILANGAN 3: ";
    cin>> C;

    if (A<B){
        if (B<C)
            cout<< "BILANGAN TERBESAR ADALAH:" << A << ","<< B <<","<< C << endl;
    else
        if (A<C)
            cout << "BILANGAN TERBESAR ADALAH " << A << ","<< C <<","<< B << endl;
        else cout << "BILANGAN TERBESAR ADALAH " << C << ","<< A <<","<< B << endl;
   }else {
    if (A<C)
        cout << "BILANGAN TERBESAR ADALAH " << B <<","<< A << ","<< C << endl;
    else
        if (B<C)

        cout << "BILANGAN TERBESAR ADALAH " << B << ","<< C << ","<< A << endl;
    else
        cout << "BILANGAN TERBESAR ADALAH " << C << ","<< B << ","<< A << endl;
    }
    }

