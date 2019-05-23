#include "NVHoaHong.h"
NVHoaHong::NVHoaHong(){}
NVHoaHong::NVHoaHong(string mnv,string name,string tax,double,double)
{
  this->Mnv=mnv;
  this->Fullname=name;
  this->TaxID=tax;
  this->TongDoanhThu=TongDoanhThu;
  this->MucThuong=MucThuong;
}
//setters
void NVHoaHong::setTongDoanhThu(double)
{
  this->TongDoanhThu=TongDoanhThu;
}
void NVHoaHong::setMucThuong(double)
{
  this->MucThuong=MucThuong;
}
//getters
double NVHoaHong::getTongDoanhThu()const
{
  return this->TongDoanhThu;
}
double NVHoaHong::getMucThuong()const
{
  return this->MucThuong;
}
//methods
double NVHoaHong::getLuong()const
{
  return this-> TongDoanhThu + this-> MucThuong / 100;
}
