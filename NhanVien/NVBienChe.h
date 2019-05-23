#ifndef NVBIENCHE_H
#define NVBIENCHE_H
#include "NhanVien.h"
class NVBienChe: public NhanVien
{
private:
  double Luong_CoDinh;
public:
  NVBienChe();
  NVBienChe(string,string,string,double);
  //setters
  void setLuongCoDinh(double luong);
  //getters
  double getLuongCoDinh()const;
  //methods
  double getLuong()const;
};
#endif
