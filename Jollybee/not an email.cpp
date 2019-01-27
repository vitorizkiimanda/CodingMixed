//not an email
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,N,found,max,v;
	map <string,int> m;
	string cek[101];
	char domain[31];//nyimpen setelah @
	string email,string_max;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> N;
		v=0;
		m.clear();
		for(int j=0;j<N;j++)
		{
			cin >> email;
			found=email.find('@'); //found sebgai variabel keluaran = indeks si yang dicari
			size_t length = email.copy(domain,email.length()-found,found+1);
			if (m[domain]==0) //domain:nyimpen hasil copy declare sebagai char, email.length()-found: panjang string yang mau dicopy,found+1 : hingga berapa char
			{
				cek[v]=domain; //simpen nama domain yang baru
				++v; // agar indeks domain baru gak nabrak dengan yang lama
			}
			++m[domain]; // menambah poin nama domain terkait setiap loop
		}
		max=0;
		for(int j=0;j<v;j++)
		{
			if(m[cek[j]]>max)
			{
				max= m[cek[j]];//max diganti sama poin terbesar
				string_max=cek[j];//nyimpen string dengan poin terbesar
			}
			else if(m[cek[j]]==max and cek[j] < string_max) string_max=cek[j]; //jika max nya sama , ambil yang abjadnya lebih awal(kayak kamus), lexycographic
		}                              //yang baru lebih kecil Lexycographic-nya dari yang lama
		
		cout<<"Kasus #"<<i+1<<": "<<string_max<<endl;
		//printf("Kasus #%d: %s\n", i,string_max);// error di string_max, 
	}
	return 0;
}
