//given an array you have to traverse it and add only even no to a vector that is given

#include<iostream>
#include<vector>
using namespace std;

void even_no(int arr[],int size,int index,vector<int>&vect){
//base case 
if(size<=index){
    return ;
}

if(arr[index]%2==0){
    vect.push_back(arr[index]);
}

even_no(arr,size,index+1,vect);




}
int main()
{


int arr[5]={1,2,3,4,5};
int size=5;
int index=0;
vector<int>vect;
even_no(arr,size,index,vect);

for(int i=0;i<vect.size();i++){
    cout<<vect[i]<<endl;
}

}