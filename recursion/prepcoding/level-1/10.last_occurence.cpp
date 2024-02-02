// find last occurence of an array

#include <iostream>
using namespace std;

int last_occurence(int arr[], int index, int no)
{

    if (index == 5)
    {
        return -1;
    }

    int n = last_occurence(arr, index + 1, no);
    if (n == -1)
    {
        if (arr[index] == no)
        {
            return index;
        }
        else
        {
            return n;
        }
    }
    else
    {
        return n;
    }
}
int main()
{

    int arr[5] = {1, 2, 2, 1, 3};
    cout << last_occurence(arr, 0, 1) << endl;
}