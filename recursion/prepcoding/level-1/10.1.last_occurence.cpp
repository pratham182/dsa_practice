// another solution of last occurence problem

#include <iostream>
using namespace std;

int last_occurence(int arr[], int index, int no)
{

    // base case

    if (arr[index] == no)
    {
        int n = last_occurence(arr, index + 1, no);
    }
}
int main()
{

    int arr[5] = {1, 2, 2, 1, 3};
    cout << last_occurence(arr, 0, 1) << endl;
}