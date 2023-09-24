//divide a no without add,multiplication,sub and divison
//https://leetcode.com/problems/divide-two-integers/


#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int divide(int dividend, int divisor) {
        long long int  start=0;
        long long int  end= abs(dividend);
        
        long long int ans;   //for storing 
        while(start<=end){  //specific case  //  min/-1  == always max becuse prevent from overflow range
            if(dividend==INT_MIN && divisor ==-1){
                return INT_MAX;
            }
            long long int mid=start+(end-start)/2;
            
            if(abs(dividend) == abs(divisor*mid)){

                //negative 
                 
        if(dividend < 0 && divisor >0 || dividend >0 && divisor <0){
                     return 0-mid;
                 }
                     
                return mid;
            }
            else if(abs(dividend) > abs(divisor*mid)){
                 ans=mid;
                
                 start=mid+1;
            }else{     //greater
               
                  end=mid-1;
            }
        }


//for negative values
         if(dividend < 0 && divisor >0 || dividend >0 && divisor <0){
                     return 0-ans;
                 }
        return ans;
    }

int main()
{

}