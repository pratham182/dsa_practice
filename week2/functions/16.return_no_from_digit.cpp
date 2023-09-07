//return number from digits
#include<iostream>
#include<math.h>

using namespace std;


int no_from_digit_from_begin(int total_digits){
    int num;
    int whole_no=0;
    int x=total_digits-1;
    for(int i=0;i<total_digits;i++){
        //logic 
        cin>>num;
        whole_no=whole_no+(num*pow(10,x--));
        
    }
    return whole_no;
}

int no_from_digit_from_last(int total_digits){
    int num;
    int whole_no=0;
    for(int i=0;i<total_digits;i++){
        //logic 
        cin>>num;
        whole_no=whole_no+(num*pow(10,i));
    }
    return whole_no;
}
int main(){
    int n;
    cin>>n;   //total digits

   cout<<no_from_digit_from_last(n);

   cout<<no_from_digit_from_begin(n);

}