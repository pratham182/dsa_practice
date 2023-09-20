//vector == dynamic array provide flexibilty of changing its size after intialization 
//problem -> if have create 54 element in an array suddenly requirements are vget change and want to add more elements then it will create problem (static array in which we can't change its size)
//don't tell size of vector 
//keep inserting it will manege all allocation

#include<iostream>
#include<vector>   //using vector by adding this vector header file 
using namespace std;
int main(){
//dynamic memory allocation

int n;
cin>>n;
int *a =new int[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

vector <int> arr;

//pushing element in an array
arr.push_back(10);
arr.push_back(199);

//actual working 
//when vector size  get full then it's capacity gets double 

//for eg 
vector <int >arr2;  //size 0
arr2.push_back(10);  //size 1 capacity 1
arr.push_back(11);   //size 2 capacity 2
arr.push_back(100);  //size 3 capacity 4
arr.push_back(100);   //size 4 capavity 4




//at == used to access an element of an array
arr.at(1);

//clear == used to clear a vector but not capacity 
arr.clear();

//intailization with default values
vector <int> arr3(5,-1);

vector <int > arr5={1,2,13,1};
vector <int> arr01(arr5);



//2d in vector 

vector <vector <int>> arr10;
vector <vector <int>> arr11(3,vector <int >(10,0));   //intilixa all with 10

//print
cout<<arr11.size(); //10
for(int i=0;i<arr11.size();i++){
for(int j=0;j<arr11[0].size();j++){
    
    cout<<arr11[i][j];
}

//important jeeked array == whose row is same but column no different 

vector <vector <int >> jeeked_arr;

vector <int> vect (10,0);
vector <int> vect01 (10,0);
vector <int> vect02 (10,0);

jeeked_arr.push_back(vect);
jeeked_arr.push_back(vect01);
jeeked_arr.push_back(vect02);


for(int i=0;i<jeeked_arr.size();i++){
    for(int j=0;j<jeeked_arr[i].size();j++){
        cout<<jeeked_arr[i][j]<<endl;
    }
}






}







}
