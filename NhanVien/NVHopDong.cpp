#include "NVHopDong.h"
NVHopDong::NVHopDong(){}
NVHopDong::NVHopDong(string mnv,string name,string tax,double t,double)
{
  this->Mnv=mnv;
  this->Fullname=name;
  this->TaxID=tax;
  this->ThoiGian=t;
  this->Luong_ThoiGian=Luong_ThoiGian;
}
//setters
void NVHopDong::setThoiGian()
{
  this->ThoiGian=ThoiGian;
}
void NVHopDong::setLuongThoiGian()
{
  this->Luong_ThoiGian=Luong_ThoiGian;
}
//getters
double NVHopDong::getThoiGian()const
{
  return this->ThoiGian;
}
double NVHopDong::getLuongThoiGian()const
{
  return this->Luong_ThoiGian;
}
//methods
double NVHopDong::getLuong()const
{
  return this-> Luong_ThoiGian * this->ThoiGian;
}
