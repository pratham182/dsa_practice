// print arr in reverse

#include <iostream>
using namespace std;

void reverse(int arr[], int index)
{
   if (index == 5)
   {
      return;
   }

   reverse(arr, index + 1);
   cout << arr[index] << endl;
}
int main()
{

   int arr[5] = {1, 2, 3, 4, 5};
   reverse(arr, 0);
}