#include <iostream>
#include<math.h> 
using namespace std;

    

int main() {

int stream[100]={0},l=-1,c[101]={0},i,k,j,ci=0,period=0,a[100000],ai=0,f=0,seq[100]={0},seqi=0;

cout<<"Enter Stream Length: ";;
cin>>l;
int dec=0;
for(i=0;i<l;i++)
{	
    cout<<"Enter s"<<l<<"of zero sequence: ";
    cin>>stream[i];
    dec+=pow(2,stream[i]);


}
a[ai]=dec;
period++;
ai++;
 j=0;
for(i=1;i<=l;i++)
{
	int x;
    cout<<"Enter value of c"<<i<<": ";
    cin>>x;
    if(x==1)
    {
    	c[j]=i-1;
    	j++;
    }

  

}

while(1){
	ci=0;

for( i=0;i<j;i++)
{
	ci+=stream[c[i]];
}


ci=ci%2;
cout<<ci<<"\n";


seq[seqi]=stream[l-1];
seqi++;
for(i=l-1;i>=1;i--){
    
    stream[i]=stream[i-1];

}


stream[0]=ci;
for(i=0;i<l;i++){
cout<<stream[i];
}
cout<<"\n";


int dec=0;
for(i=0;i<l;i++){
	dec+=stream[i]*pow(2,i);

}

for(i=0;i<ai;i++)
{
	if(a[i]==dec){
	f=1;
	break;
}

}
if(f==1)
break;
a[ai+1]=dec;
ai++;
period++;
}
cout<<"Period of LFSR sequence is "<<period<<"\n";
cout<<"LFSR sequence: ";
for(i=0;i<seqi;i++)
cout<<seq[i]<<" ";

cout<<"\n";
}
