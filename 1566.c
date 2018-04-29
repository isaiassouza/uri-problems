#include<stdio.h>
int main()
{
    long long int y,j,i,nc,n;
    scanf("%lld",&nc);
    for(i=0; i<nc; i++)
    {
        scanf("%lld",&n);
        long long int v[n];
        for(j=0; j<n; j++)
            scanf("%lld",&v[j]);

        for(y=1; y<n; y++)
            for(j=0; j<n-1; i++)
                if(v[j]>v[j+1])
                {
                    long long int x =v[j];
                    v[j]=v[j+1];
                    v[j+1]=x;
                }

        for(j=0; j<n; j++)
            printf("%lld ",v[i]);
        printf("%lld\n",v[i]);
    }
    return 0;
}
