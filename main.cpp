#include <iostream>
#include <algorithm>
#include "mean.h"

using namespace std;

int main(){
    char inputStart;
    
    do
    {
    printf("Mulai? [Y/n] : ");
    cin >> inputStart;

        int jumlahData;
        printf("Masukkan Jumlah Data : ");
        cin >> jumlahData;

        double long* data = new double long [jumlahData];
        for(int i = 0; i < jumlahData; i++){
            cout << "Masukkan Data Ke-" << i+1 << " : ";
            cin >> data[i];
        }

        double long mean = Mean(data, jumlahData);
        
    } while (inputStart != 'y' || inputStart != 'Y');
}
