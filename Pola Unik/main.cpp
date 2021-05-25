#include <iostream>
#include <conio.h>

using namespace std;

void Pola_khusus1(int n)
{
    //pola khusus 1 diambil dari 3
    cout<<" ===== Pola Khusus 1 ====="<<endl;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<" #";
        }
        cout<<endl;
    }
}

void Pola_khusus2(int n)
{
    //pola khusus 2 diambil dari 4
    cout<<" ===== Pola Khusus 2 ====="<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=n;k>=i;k--){
            cout<<" #";
        }
        cout<<endl;
    }
}

void Pola_khusus3(int n)
{
    //pola khusus 3 = pola khusus 1 + pola khusus 2
    cout<<" ===== Pola Khusus 3 ====="<<endl;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<" #";
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=n;k>=i;k--){
            cout<<" #";
        }
        cout<<endl;
    }

}

void Pola_1(int n)
{
    cout<<" ===== Pola 1 ====="<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
}

void Pola_2(int n)
{
    cout<<" ===== Pola 2 ====="<<endl;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<" #";
        }
        cout<<endl;
    }
}

void Pola_3(int n)
{
    cout<<" ===== Pola 3 ====="<<endl;
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<" *";
        }
        cout<<endl;
    }
}

void Pola_4(int n)
{
    cout<<" ===== Pola 4 ====="<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int k=n;k>=i;k--){
            cout<<" #";
        }
        cout<<endl;
    }
}

void Pola_5(int n)
{
    //pola 5 diambil dari pola 3
    cout<<" ===== Pola 5 ====="<<endl;
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
        for(int k=1;k<=(2*i-1);k++){
            cout<<" *";
        }
        cout<<endl;
    }
}

void Pola_6(int n)
{
    //pola 6 diambil dari pola 4
    cout<<" ===== Pola 6 ====="<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int k=n;k>=(2*i-n);k--){
            cout<<" #";
        }
        cout<<endl;
    }
}

void Pola_7(int n)
{
    //pola 7 = pola 5 + pola 6
    cout<<" ===== Pola 7 ====="<<endl;
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
        for(int k=1;k<=(2*i-1);k++){
            cout<<" *";
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int k=n;k>=(2*i-n);k--){
            cout<<" *";
        }
        cout<<endl;
    }
}

void Pola_8(int n)
{
    //pola 8 = modifikasi pola 7
    cout<<" ===== Pola 8 ====="<<endl;
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
        for(int k=1;k<=(2*n-1);k++){
            cout<<" *";
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int k=n;k>=(2*n-1);k--){
            cout<<" *";
        }
        cout<<endl;
    }
}

void Pola_9(int n)
{
    //pola 9 = modifikasi pola 7
    cout<<" ===== Pola 9 ====="<<endl;
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
        for(int k=1;k<=(n-2);k++){
            cout<<" *";
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int k=n;k>=(n-2);k--){
            cout<<" *";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<" Masukan Nilai n : ";cin>>n;
    cout<<endl;
    Pola_1(n);
    cout<<endl;
    Pola_2(n);
    cout<<endl;
    Pola_3(n);
    cout<<endl;
    Pola_4(n);
    cout<<endl;
    Pola_5(n);
    cout<<endl;
    Pola_6(n);
    cout<<endl;
    Pola_7(n);
    cout<<endl;
    Pola_8(n);
    cout<<endl;
    Pola_9(n);
    /*cout<<endl;
    Pola_khusus1(n);
    cout<<endl;
    Pola_khusus2(n);
    cout<<endl;
    Pola_khusus3(n);*/


    getch();
    return 0;
}
