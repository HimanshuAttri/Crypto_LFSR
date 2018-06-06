#include <iostream>
using namespace std;

    

int main() {

int n,N=0,m=-1, CD[100]={0},L=0,BD[100]={0},sn[100],TD[100]={0},cl=1,d=0,tl=0,i;


cin>>n;
CD[0]=1;
BD[0]=1;


for( i=0;i<n;i++)
{
   
    cin>>sn[i];
}

for(;N<n;)
{
    
    for(int k=1;k<L;k++)
    {
        if(L>=k)
        d=d+sn[N]+CD[k]*sn[n-i];
        
        else
        d=sn[N];
    }
    d=d%2;

    if (d==1){
            for(int j=0;j<cl;j++)
            TD[j]=CD[j];
            tl=cl;

        CD[N-m]=1;
        cl=N-m+1;
        if(L<=N/2){
             L=N+1-L;
             m=N;
        }
        N++;
           


    }



}
for(i=0;i<cl;i++){

    if(CD[i]==1)
    cout<<"D"<<i<<" + ";
}
}
