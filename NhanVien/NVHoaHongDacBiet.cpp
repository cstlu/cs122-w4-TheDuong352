#include "NVHoaHongDacBiet.h"
NVHoaHongDacBiet::NVHoaHongDacBiet(){}
NVHoaHongDacBiet::NVHoaHongDacBiet(string mnv,string name,string tax,double,double,double)
{
  this->Mnv=mnv;
  this->Fullname=name;
  this->TaxID=tax;
  this->TongDoanhThu=TongDoanhThu;
  this->MucThuong=MucThuong;
}
//setters
void NVHoaHongDacBiet::setBaseSalary()
{
  this->base_salary;
}
//getters
double NVHoaHongDacBiet::getBaseSalary()const
{
  return this->base_salary;
}
//methods
double NVHoaHongDacBiet::getLuong()const
{
  return this->TongDoanhThu * this->MucThuong / 100 + this -> base_salary *0.1;
}
