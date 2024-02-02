#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string>subsequence(string str){
//base case

  if(str.length()==0){
     vector <string> resultt={" "};
     return resultt; 
  }
//faith 
char ch=str[0];
string ros=str.substr(1);
// cout<<"ros is this"<<ros<<endl;
vector<string>arr=subsequence(ros);

vector<string>result;

for(const string& h : arr ){
    
  result.push_back(" "+h);
  result.push_back(ch+h);
}
return result;

}

int main()
{

string str;
cin>>str;
vector<string>result=subsequence(str);

for(const string& h : result){
    cout<<h<<endl;

}
}