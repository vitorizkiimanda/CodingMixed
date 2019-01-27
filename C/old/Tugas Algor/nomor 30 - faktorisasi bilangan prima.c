#include<stdio.h>
#include<math.h>
int main()
{
    long long int input,bagi,pangkat,mod,i;
    scanf("%lld", &input);
    bagi=2;
    i=sqrt(input);
    while(bagi<=i)
    {
        pangkat=0;
        mod=0;
        while(mod==0)
        {
            mod=input%bagi;
            if(mod==0)
            {
                input=input/bagi;
                ++pangkat;
            }
        }
        if(pangkat>0)
        {
            i=sqrt(input);
            printf("%lld^%lld\n",bagi,pangkat);
        }
        ++bagi;
    }
    if(input>1) printf("%lld^1\n",input);

    return 0;
}
