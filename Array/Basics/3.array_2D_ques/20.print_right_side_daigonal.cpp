//non diagonal sum

#include<iostream>
using namespace std;
int main()
{
int n=3;
int arr[3][3]={{1,1,10},{1,20,1},{40,2,4}};

int sum=0;
for(int i=0;i<3;i++){
    cout<<arr[i][(n-1)-i];
sum+=arr[i][(n-1)-i];

}
}