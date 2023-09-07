// For n=4

// 10
// 4  9
// 3  5  8
// 1  2  6  7

// For n=5

// 15
// 7 14
// 6 8 13
// 2 5 9 12
// 1 3 4 10 11

// For n=3

// 6
// 2 5
// 1 3 4

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    float n;
    cin>>n;

    vector<vector<int>> arr(n, vector<int>(n, 0));
int x=0;
int y=0;


    int no=n*(n+1)/2;
   
for(int i=0;i<ceil(float(n/2));i++){

for(int j=0;j<n-i*2;j++){
arr[x][y]=no;


// cout<<x<<y<<no<<endl;
if(x==n-1){
    
    y--;
}else{
x++;
y++;}

no--;


}



for(int j=0;j<(n-i*2)-1;j++){
    if(no==1){
       break;
    }
    arr[x][y]=no;
    if(y==0){
        x++;
    }else{
        x--;
        y--;
    
    }
    no--;                       
}


}

for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}