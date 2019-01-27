#include<stdio.h>
#include<math.h>
int main()
{
    long long int t, jumlah=0;
    int i, sementara=0,x;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%d", &x);
    	for(i=1; i<=sqrt(x);i++)
        {
            if(x%i==0)
            {
			    sementara = x/i;
                if(sementara==i)
                {
                    jumlah = jumlah + 1;
                }
                else
                {
           	        jumlah = jumlah + 2;
                }
    	    }
        }
            printf("%d\n", jumlah);
        sementara=0;
        jumlah =0;

    }
    return 0;
}
