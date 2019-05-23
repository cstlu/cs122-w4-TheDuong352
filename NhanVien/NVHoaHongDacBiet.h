#ifndef NVHOAHONGDACBIET_H
#define NVHOAHONGDACBIET_H
#include "NhanVien.h"
#include "NVHoaHong.h"
class NVHoaHongDacBiet: public NVHoaHong
{
private:
  double base_salary;
public:
  NVHoaHongDacBiet();
  NVHoaHongDacBiet(string,string,string,double,double,double);
  //setters:
    void setBaseSalary();
    //getters:
  double getBaseSalary()const;
  //methods:
  double getLuong()const;
};
#endif
