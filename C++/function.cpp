#include<iostream>
using namespace std;

int addition (int a, int b )
{
	int hasil;
	hasil = a + b;
	return hasil ;
}

int main()
{
	int a,b,result;
	cin >> a >> b;
	result = addition(a,b);
	cout << result;
	return 0;
}
/*
#include <iostream>
using namespace std;

int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}

int main ()
{
  int z;
  z = addition (5,3);
  cout << "The result is " << z;
}*/
