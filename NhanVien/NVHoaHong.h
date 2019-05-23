#ifndef NVHOAHONG_H
#define NVHOAHONG_H
#include "NhanVien.h"
using namespace std;
class NVHoaHong: public NhanVien
{
protected:
  double TongDoanhThu;
  double MucThuong;//10%
public:
  NVHoaHong();
  NVHoaHong(string,string,string,double,double);
  //setters
  void setTongDoanhThu(double);
  void setMucThuong(double);
  //getters
  double getTongDoanhThu()const;
  double getMucThuong()const;
  //methods
  double getLuong()const;
};
#endif
