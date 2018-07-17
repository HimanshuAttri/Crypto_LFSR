#include <iostream>
#include <fstream>
#include<math.h> 
using namespace std;


    int Lc[39],Ld[89],key,count=0,pre=-1,len=0;
    long long int zs=0,os=0;
    long long int rep[100]={0};
     ofstream file;

int clockLc()
{
   int out= Lc[0]^Lc[38-34]^Lc[38-16]^Lc[38-14]^Lc[38-13]^Lc[38-1];
    for(int i=37;i>=0;i--)
    {
        Lc[i+1]=Lc[i];
    }
    Lc[0]=out;
    return 0;

}

int clockLd(int clocks){
        //for(int i=0;i<89;i++)
        //cout<<Ld[i];
    //cout<<"\n\n";

    while(clocks--){


    int out=Ld[0]^Ld[88-82]^Ld[88-79]^Ld[88-54]^Ld[88-52]^Ld[88-41]^Ld[88-38]^Ld[88];
    for(int i=87;i>=0;i--)
    {
        Ld[i+1]=Ld[i];
    }
    Ld[0]=out;

     //for(int i=0;i<89;i++)
        //cout<<Ld[i];
    //cout<<"\n";
    }
    key = Ld[12]^Ld[7]^Ld[3]^Ld[1]^Ld[80]*Ld[20]^Ld[80]*Ld[7]^Ld[65]*Ld[3]^Ld[65]*Ld[0]^Ld[44]*Ld[1]^Ld[44]*Ld[0]^Ld[30]*Ld[20]^Ld[80]*Ld[65]*Ld[12]^Ld[80]*Ld[65]*Ld[7]^Ld[80]*Ld[65]*Ld[3]^Ld[80]*Ld[65]*Ld[1]^Ld[80]*Ld[44]*Ld[7]^Ld[80]*Ld[44]*Ld[3]^Ld[80]*Ld[30]*Ld[20]^Ld[80]*Ld[30]*Ld[12]^Ld[80]*Ld[30]*Ld[7]^Ld[65]*Ld[44]*Ld[20]^Ld[65]*Ld[44]*Ld[3]^Ld[65]*Ld[30]*Ld[20]^Ld[65]*Ld[30]*Ld[7]^Ld[65]*Ld[30]*Ld[3]^Ld[80]*Ld[65]*Ld[44]*Ld[20]^Ld[80]*Ld[65]*Ld[44]*Ld[7]^Ld[80]*Ld[65]*Ld[44]*Ld[3]^Ld[80]*Ld[65]*Ld[44]*Ld[0]^Ld[80]*Ld[65]*Ld[30]*Ld[20]^Ld[80]*Ld[65]*Ld[30]*Ld[7]^Ld[80]*Ld[65]*Ld[30]*Ld[1]^Ld[80]*Ld[44]*Ld[30]*Ld[12]^Ld[80]*Ld[44]*Ld[30]*Ld[3]^Ld[65]*Ld[44]*Ld[30]*Ld[7]^Ld[65]*Ld[44]*Ld[30]*Ld[1]^Ld[65]*Ld[30]*Ld[20]*Ld[12]^Ld[65]*Ld[30]*Ld[20]*Ld[7]^Ld[80]*Ld[65]*Ld[44]*Ld[30]*Ld[7]^Ld[80]*Ld[65]*Ld[44]*Ld[30]*Ld[3]^Ld[80]*Ld[65]*Ld[30]*Ld[20]*Ld[12]^Ld[80]*Ld[65]*Ld[30]*Ld[20]*Ld[7]^Ld[65]*Ld[44]*Ld[30]*Ld[20]*Ld[12]^Ld[65]*Ld[44]*Ld[30]*Ld[20]*Ld[7]^Ld[80]*Ld[65]*Ld[44]*Ld[30]*Ld[20]*Ld[12]^Ld[80]*Ld[65]*Ld[44]*Ld[30]*Ld[20]*Ld[7];
    //cout<<"------bit-----\n"<<key<<"\n------bit------\n";
    file <<key;
    if(pre==key)
      len++;
    if(pre!=key)
    {
      if(len>1)
      rep[len]++;
    len=1;
    }
    pre=key;
}




int main() {
  std::fstream myfile("128input", std::ios_base::in);

  
    for(int i =0;i<39;i++)
        myfile>>Lc[i];

    for(int i=0;i<89;i++)
        myfile>>Ld[i];

      myfile.close();
    int test=10000000;
   
  file.open ("LILIOUT_123.txt");


    while (test--)

       
    {
     // for(int i=0;i<39;i++)
        //cout<<Lc[i];

      //cout<<"\n\n";
        int Cx=2*Lc[11]+Lc[19]+1;
        //cout<<"Loop"<<10000000-test<<"\n"<<"Cx: "<<Cx<<"\n";


          count++;

       
        //if((count)%100000==0)
          ////cout<<count/10000000<<"\n";


        
        
         clockLd(Cx);
           
         clockLc();




    }
    //cout<<"\n";
       for(int i=2;i<100;i++)
{
  //cout<<i<<": "<<rep[i]<<", ";
}
       




}