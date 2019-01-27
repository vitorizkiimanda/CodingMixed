//stack & queue , size dynamic
/* stack tumpukan,,, mengambil yang terakhir dimasukkin

LIFO , last In First Out
*/

/* queue , masuk pertama keluar pertama,, kayak orang ngantri

FIFO , First In First Out

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> v;
	int x;
	for(int i=0;i<10;i++)
	{
		cin >> x;
		v.push(x);
	}
	while(!v.empty()) // saat belum kosong akan terus looping
	{
		x=v.top(); //cuma ngambil doang ,gak ngapus
		cout << x <<endl; // printf x
		v.pop(); // yang menghapus yang paling atas(paling akhir)
	}
	return 0;
}
