#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        //input
        {
        int x,y,N,M,K,distance=0;
        cin>>x>>y;
        cin>>N>>M>>K;
        int A[N][2],C[M][2],E[K][2];
        for(int i=0;i<N;i++)
        {
            cin>>A[i][0]>>A[i][1];
            A[i][0]-=x;
            A[i][1]-=y;
        }
        for(int i=0;i<M;i++)
        {
            cin>>C[i][0]>>C[i][1];
            C[i][0]-=x;
            C[i][1]-=y;
        }
        for(int i=0;i<K;i++)
        {
            cin>>E[i][0]>>E[i][1];
            E[i][0]-=x;
            E[i][1]-=y;
        }
        }
        
        
    }
    return 0;
}
