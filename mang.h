#ifndef MANGMOTCHIEU_H
#define MANGMOTCHIEU_H

class MangMotChieu {
private:
    int a[100];
    int n;

public:
    void TaoNgauNhien();
    void Xuat();
    int DemX(int x);
    bool TangDan();
    int LeNhoNhat();
    int SoNguyenToLonNhat();
};

#endif