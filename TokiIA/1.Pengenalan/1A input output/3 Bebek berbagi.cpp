#include<bits/stdc++.h>
using namespace std;
int main()
{
	int bebek, teman, dapat;
	scanf("%d %d", &bebek,&teman);
	

	dapat = bebek/teman;
	bebek=bebek%teman;
	
	printf("masing-masing %d\n", dapat);
	printf("bersisa %d\n", bebek);
	return 0;
}
