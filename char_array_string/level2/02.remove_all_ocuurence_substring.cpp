#include<iostream>
#include<string.h>
using namespace std;
 string removeOccurrences(string s, string part) {
        
        
        while(s.find(part)!= string::npos){
            s.erase(s.find(part),part.length());
        }
        return s;
    }
int main()
{
cout<<removeOccurrences("pratham","am");



}