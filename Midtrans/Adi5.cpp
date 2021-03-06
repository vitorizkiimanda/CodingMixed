#include <bits/stdc++.h>
using namespace std;

int main()
{

    //goal : jumlah bus yang ngetem bareng : inputnya ada 5 bus

	int atas = 0, bawah = 24*60;
	vector<pair<int, int> > v;
	for(int i=0; i<5; i++) {
		string s; string ar, de;
		cin >> s >> s >> s >> ar >> s >> de;
		string jar = ar; jar.erase(2, 3);
		string mar = ar; mar.erase(0, 3);
		int arrival = stoi(mar) + stoi(jar)*60;

		//jam departure
		string jde = de; jde.erase(2, 3);

		//menit departure -> bus saipa ngetem di menit berapa aja
		string mde = de; mde.erase(0, 3);
		int departure = stoi(mde) + stoi(jde)*60;
		v.push_back({arrival, departure});
	}

	int now = 0, vis[1000] = {0}, ans = INT_MIN;

	//loop buat cek permenit yang ngetem siapa aja
	for(int i=0; i<bawah; i++) {
		now = 0;
		for(int it=0; it<v.size(); it++) {
			if (v[it].first <= i && v[it].second >= i) {
				vis[it] = 1;
				now++;
			}
			ans = max(ans, now);
		}
	}
	cout << ans << "\n";
}

/*
big O = O(n * 1440) = O(n);
*/
