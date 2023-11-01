#include<iostream>
using namespace std;
//abc 
void subsequence(string str,string output,int index,int length){
    //abc
    //base case
    if(index>=length){
         cout<<output<<endl; //" " c 
         return ;
    }
    
    char ch=str[index]; //a //b //c 3
    //exclude
   
     output.push_back(ch);  //c 
     //include
     subsequence(str,output,index+1,length); //c
     output.pop_back();
      subsequence(str,output,index+1,length); 

}
int main()
{


subsequence("abc","",0,3);
}