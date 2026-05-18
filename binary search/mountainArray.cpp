#include <iostream> 
using std::cout, std::cin; 
const int MAX =100; 

int peakIndexInMountainArray(int*,int);

int main()
{ 
    int arr[]={0,1,5,10,3,2,1,0} ; 
    int index=peakIndexInMountainArray(arr, sizeof(arr)/sizeof(arr[0])); 
    cout<< index; 
}

int peakIndexInMountainArray(int *arr, int n)
{
        int start = 0, end = n - 1, mid;
        while (start < end) 
        {
            mid = start + (end - start) / 2;
            if (arr[mid] < arr[mid + 1])
                start = mid + 1;
            else if (arr[mid] > arr[mid + 1])
                end = mid;
        }
        return start;
}