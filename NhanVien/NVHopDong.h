#ifndef NVHOPDONG_H
#define NVHOPDONG_H
#include "NhanVien.h"
class NVHopDong: public NhanVien
{
private:
  double ThoiGian;
  double Luong_ThoiGian;
public:
  NVHopDong();
  NVHopDong(string,string,string,double t,double);
  //setters
  void setThoiGian();
  void setLuongThoiGian();
  //getters
  double getThoiGian()const;
  double getLuongThoiGian()const;
  //methods
  double getLuong()const;
};
#endif
