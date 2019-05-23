#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <bits/stdc++.h>
using namespace std;
class NhanVien
{
protected:
  string Mnv;
  string Fullname;
  string TaxID;
public:
  NhanVien();
  NhanVien(string,string,string);
  //setters
  void setMnv(string);
  void setFullname(string);
  void setTaxID(string);
  //getters
  string getMnv()const;
  string getFullname()const;
  string getTaxID()const;
  //method
  double getLuong()const;
};
#endif
