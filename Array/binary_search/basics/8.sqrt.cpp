//find square root of no without multiplication ,add ,sub etc
//o(log n)
//approach ==search space 

#include<iostream>
using namespace std;
int mySqrt(int x) {
    //using binary search (search space )

    int start=1;
    int end=x;
    int store_int;
      while(start<=end){
        long long mid=start+(end-start)/2;
          if(mid*mid==x){
              return mid;
          }else if(mid*mid>x){  
              end=mid-1;
              //left
          }
          else{
            //right and store in store int 
              start=mid+1;
               store_int=mid;
          }
      }
      return store_int;
    
    
    }
int main()
{


cout<<mySqrt(30);


//hw find square root in decimals 


}