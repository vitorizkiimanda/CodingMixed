#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n1,n2,n3,n4;
	
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d %d %d %d", &n1,&n2,&n3,&n4);
		if     ((n1==n2)&&(n2==n3)&&(n3==n4))printf("Case #%d: %d = %d = %d = %d\n",i,n1,n2,n3,n4);
		else if(n1==n2==n3-n4) printf("Case #%d: %d = %d = %d - %d\n",i,n1,n2,n3,n4);
		else if(n1==n2==n3+n4) printf("Case #%d: %d = %d = %d + %d\n",i,n1,n2,n3,n4);
		else if(n1==n2-n3==n4) printf("Case #%d: %d = %d - %d = %d\n",i,n1,n2,n3,n4);
		else if(n1==n2-n3-n4) printf("Case #%d: %d = %d - %d - %d\n",i,n1,n2,n3,n4);
		else if(n1==n2-n3+n4) printf("Case #%d: %d = %d - %d + %d\n",i,n1,n2,n3,n4);
		else if(n1==n2+n3==n4) printf("Case #%d: %d = %d + %d = %d\n",i,n1,n2,n3,n4);
		else if(n1==n2+n3-n4) printf("Case #%d: %d = %d + %d - %d\n",i,n1,n2,n3,n4);
		else if(n1==n2+n3+n4) printf("Case #%d: %d = %d + %d + %d\n",i,n1,n2,n3,n4);
		else if(n1-n2==n3==n4) printf("Case #%d: %d - %d = %d = %d\n",i,n1,n2,n3,n4);
		else if(n1-n2==n3-n4) printf("Case #%d: %d - %d = %d - %d\n",i,n1,n2,n3,n4);
		else if(n1-n2==n3+n4) printf("Case #%d: %d - %d = %d + %d\n",i,n1,n2,n3,n4);
		else if(n1-n2-n3==n4) printf("Case #%d: %d - %d - %d = %d\n",i,n1,n2,n3,n4);
	//	else if(n1-n2-n3-n4) printf("Case #%d: %d - %d - %d - %d\n",i,n1,n2,n3,n4);
	//	else if(n1-n2-n3+n4) printf("Case #%d: %d - %d - %d + %d\n",i,n1,n2,n3,n4);
		else if(n1-n2+n3==n4) printf("Case #%d: %d - %d + %d = %d\n",i,n1,n2,n3,n4);
	//	else if(n1-n2+n3-n4) printf("Case #%d: %d - %d + %d - %d\n",i,n1,n2,n3,n4);
	//	else if(n1-n2+n3+n4) printf("Case #%d: %d - %d + %d + %d\n",i,n1,n2,n3,n4);
		else if(n1+n2==n3==n4) printf("Case #%d: %d + %d = %d = %d\n",i,n1,n2,n3,n4);
		else if(n1+n2==n3-n4) printf("Case #%d: %d + %d = %d - %d\n",i,n1,n2,n3,n4);
		else if(n1+n2==n3+n4) printf("Case #%d: %d + %d = %d + %d\n",i,n1,n2,n3,n4);
		else if(n1+n2-n3==n4) printf("Case #%d: %d + %d - %d = %d\n",i,n1,n2,n3,n4);
	//	else if(n1+n2-n3-n4) printf("Case #%d: %d + %d - %d - %d\n",i,n1,n2,n3,n4);
	//	else if(n1+n2-n3+n4) printf("Case #%d: %d + %d - %d + %d\n",i,n1,n2,n3,n4);
		else if(n1+n2+n3==n4) printf("Case #%d: %d + %d + %d = %d\n",i,n1,n2,n3,n4);
	//	else if(n1+n2+n3-n4) printf("Case #%d: %d + %d + %d - %d\n",i,n1,n2,n3,n4);
	//	else if(n1+n2+n3+n4) printf("Case #%d: %d + %d + %d + %d\n",i,n1,n2,n3,n4);
		
	}
	return 0;
	
}
