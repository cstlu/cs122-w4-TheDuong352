#include "NVBienChe.h"
#include "NhanVien.h"
NVBienChe::NVBienChe()
{}
NVBienChe::NVBienChe(string mnv, string name,string tax,double Luong_CoDinh)
{
  this->Mnv=mnv;
  this->Fullname=name;
  this->TaxID=tax;
  this->Luong_CoDinh=Luong_CoDinh;
}
//setters
void NVBienChe::setLuongCoDinh(double luong)
{
  this->Luong_CoDinh=Luong_CoDinh;
}
//getters
double NVBienChe::getLuongCoDinh()const
{
  return this->Luong_CoDinh;
}
double NVBienChe::getLuong()const
{
  return this->Luong_CoDinh;
}
