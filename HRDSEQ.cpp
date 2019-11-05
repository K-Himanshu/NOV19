#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,count=0;
        cin>>N;
        int A[N],S[N];
        for(int i=0;i<N;i++)
            S[i]=0;
        A[0]=0;
        S[0]++;
        for(int i=1;i<N;i++)
        {
            int l=i-1;
            int k=l;
            for(int j=(l-1);j>=0;j--)
            {
                if(A[j]==A[l])
                {
                    k=j;
                    break;
                }
            }
            A[i]=l-k;
            S[A[i]]++;
        }
        for(int i=(N-1);i>=0;i--)
            if(A[i]==A[N-1])
                count++;
        cout<<count<<"\n";
    }
    return 0;
}
