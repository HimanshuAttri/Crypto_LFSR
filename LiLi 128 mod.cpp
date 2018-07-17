#include <iostream>
#include<math.h> 
using namespace std;


    int Lc[13],Ld[51];

int clockLc()
{
   int out= (Lc[12]+Lc[10]+Lc[9]+Lc[0])%2;
    for(int i=11;i>=0;i--)
    {
        Lc[i+1]=Lc[i];
    }
    Lc[0]=out;
    return 0;

}

int clockLd(int clocks){
        for(int i=0;i<51;i++)
        cout<<Ld[i];
    cout<<"\n\n";

    while(clocks--){


    int out=(Ld[0]+Ld[34]+Ld[35]+Ld[50])%2;
    for(int i=49;i>=0;i--)
    {
        Ld[i+1]=Ld[i];
    }
    Ld[0]=out;

     for(int i=0;i<51;i++)
        cout<<Lc[i];
    cout<<"\n";
    }
}




int main() {
       
       

    for(int i=0;i<13;i++){

        cin>>Lc[i];

    }
        for(int i=0;i<51;i++){
        
        cin>>Ld[i];
        
    }


     for(int i=0;i<13;i++)
        cout<<Lc[i];

    int x=100000;

    while (x--){
        cout<<"Loop No "<<100000-x<<"\n--------------------------------------------------------\n";

 
    cout<<"\n";

    for(int i=0;i<13;i++)
        cout<<Lc[i];

        cout<<"\n";

    int clk=2*Lc[7]+Lc[12];
        cout<<clk<<"\n----------------\n\n";
        clockLd(clk);

           clockLc();


}


}