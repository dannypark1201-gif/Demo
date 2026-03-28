#include <iostream>
#include "mang.h"
using namespace std;

int main(){
    MangMotChieu m;

    m.TaoNgauNhien();

    cout << "\nMang vua tao:\n";
    m.Xuat();

    int x;
    cout << "\nNhap x: ";
    cin >> x;
    cout << "So lan xuat hien cua " << x << ": " << m.DemX(x) << endl;

    if (m.TangDan())
        cout << "Mang tang dan\n";
    else
        cout << "Mang khong tang dan\n";

    int le = m.LeNhoNhat();
    if (le == -1)
        cout << "Khong co so le\n";
    else
        cout << "So le nho nhat: " << le << endl;

    int nt = m.SoNguyenToLonNhat();
    if (nt == -1)
        cout << "Khong co so nguyen to\n";
    else
        cout << "So nguyen to lon nhat: " << nt << endl;

    return 0;
}