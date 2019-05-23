#include "NhanVien.h"
NhanVien::NhanVien(){}
NhanVien::NhanVien(string mnv,string name,string tax)
{
  this->Mnv=mnv;
  this->Fullname=name;
  this->TaxID=tax;
}
//setters
void NhanVien::setMnv(string mnv)
{
  this->Mnv=mnv;

}
void NhanVien::setFullname(string name)
{
  this->Fullname=name;
}
void NhanVien::setTaxID(string tax)
{
  this->TaxID=tax;
}
//getters
string NhanVien::getMnv()const
{
  return this->Mnv;
}
string NhanVien::getFullname()const
{
  return this->Fullname;
}
string NhanVien::getTaxID()const
{
  return this->TaxID;
}
//methods
double NhanVien::getLuong()const
{
  return 0;
}
