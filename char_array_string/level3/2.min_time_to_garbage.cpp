//minimum amount of time to collect garbage 
//https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/description/

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;


//simple bruteforce method 


//pickup of all + garbage time of all 


//o(n sq)
int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int picktime_p=0;
        int picktime_m=0;
        int picktime_g=0;

        int travel_g=0;
        int travel_p=0;
        int travel_m=0;

         //last of g,p and m 
        int last_g=0;   
        int last_p=0;
        int last_m=0;

     for(int i=0;i<garbage.size();i++){

         for(int j=0;j<garbage[i].length();j++){
             string gar=garbage[i];
         if(gar[j]=='G'){
             picktime_g++;
             last_g=i;
         }
         else if(gar[j]=='M'){
             picktime_m++;
             last_m=i;
         }
         else if(gar[j]=='P'){
             picktime_p++;
             last_p=i;
         }
     }

     }
     for(int i=0;i<last_m;i++){
         travel_m+=travel[i];


     }


     for(int i=0;i<last_g;i++){
         travel_g+=travel[i];
     }


     for(int i=0;i<last_p;i++){
         travel_p+=travel[i];
     }



     int total_pickTime=picktime_p+picktime_g+picktime_m;
     int total_travel_time=travel_p+travel_g+travel_m;

     return total_pickTime+total_travel_time;

    }
int main()
{

vector<string>garbage={"G","P","GP","GG"};
vector<int>travel={2,4,3};

garbageCollection(garbage,travel);


}