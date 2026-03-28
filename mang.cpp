#include "mang.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void MangMotChieu::TaoNgauNhien(){
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    srand(time(0));
    for (int i = 0; i < n; i++){
        a[i] = rand() % 1000; 
    }
}

void MangMotChieu::Xuat(){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int MangMotChieu::DemX(int x){
    int dem = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == x) dem++;
    }
    return dem;
}

bool MangMotChieu::TangDan(){
    for (int i = 0; i < n - 1; i++){
        if (a[i] > a[i+1]) return false;
    }
    return true;
}

int MangMotChieu::LeNhoNhat(){
    int min = -1;

    for (int i = 0; i < n; i++){
        if (a[i] % 2 != 0){
            if (min == -1 || a[i] < min){
                min = a[i];
            }
        }
    }

    return min; 
}

bool laNguyenTo(int x){
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++){
        if (x % i == 0) return false;
    }
    return true;
}

int MangMotChieu::SoNguyenToLonNhat(){
    int max = -1;

    for (int i = 0; i < n; i++){
        if (laNguyenTo(a[i])){
            if (a[i] > max){
                max = a[i];
            }
        }
    }

    return max; 
}