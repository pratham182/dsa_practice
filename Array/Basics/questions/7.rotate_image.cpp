//https://leetcode.com/problems/rotate-image/



#include<iostream>
#include<vector>
using namespace std;

void place(vector<vector<int>>vect){   //extra space 
  vector<vector <int>> new_arr;
int n=vect.size();
for(int i=n-1;i>=0;i--){
    for(int j=0;j<vect[0].size();j++){
      new_arr[j][i]=vect[(n-1)-i][j];

    }



    //print 
    for(int i=0;i<new_arr.size();i++){
      for(int j=0;j<new_arr[0].size();j++){
        cout<<new_arr[i][j]<<" ";
      }
      cout<<endl;
    }

    
}
}




//2nd approach 
void rotate(vector<vector<int>>& matrix) {
        //bhaiya walii 
int n=matrix.size();
        //transpose 

        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix[i].size();j++){
               swap(matrix[i][j],matrix[j][i]);

            }
        }
 
        //reverse row 
        for(int i=0;i<matrix.size();i++){
          
  int y=matrix.size()-1;
            for(int j=0;j<n/2;j++){
            swap(matrix[i][j],matrix[i][(n-1)-j]);
          

        }
        
        }
      
    }


int main()

{
vector<vector<int>> vect={{1,2,3},{4,5,6},{7,8,9}};
place(vect);    //inplace through extra space (array)


//transpose+ reverse it 
rotate(vect);      



//roate an array  in place

// for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<new_arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
 
}