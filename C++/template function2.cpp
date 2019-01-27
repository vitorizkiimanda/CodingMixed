// function templates
#include <iostream>
using namespace std;

template <class T, class U> // memakai template class agar fleksible data type nya
bool are_equal (T a, U b)  //bool = boolean(benar/salah)
{
  return (a==b);  //cek kesamaan 2 nilai
}

int main ()
{
  if (are_equal(10,10.0))	//nilai yang ingin dicek kesamaannya
    cout << "x and y are equal\n";
  else
    cout << "x and y are not equal\n";
  return 0;
}
