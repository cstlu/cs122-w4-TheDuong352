
#include <bits/stdc++.h>
#include "NhanVien.cpp"
#include "NVBienChe.cpp"
#include "NVHoaHong.cpp"
#include "NVHoaHongDacBiet.cpp"
#include "NVHopDong.cpp"
using namespace std;
int main()
{
    NhanVien A("A32755","Do The Duong","35");
    NVBienChe B("B32755","Do The Duong","35",2000);
    NVHopDong C("C32755","Do The Duong","35",1500,2);
    NVHoaHong D("D32755","Do The Duong","35",2000,2);
    NVHoaHongDacBiet E("E32755","Do The Duong","35",15,2000,20);
    cout<<"Lương B của nhân viên Biên Chế : "<<B.getLuong()<<endl;
    cout<<"Lương C của nhân viên Hợp Đồng : "<<C.getLuong()<<endl;
    cout<<"Lương D của nhân viên Hoa Hồng : "<<D.getLuong()<<endl;
    cout<<"Lương E của nhân viên Hợp Đồng Đặc Biệt: "<<E.getLuong()<<endl;
    return 0;
}
