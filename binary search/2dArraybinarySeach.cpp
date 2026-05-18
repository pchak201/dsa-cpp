#include <iostream> 
using std::cin, std::cout; 

void binarySearch2DArray(int[][4],int,int,int); 

int main()
{ 
    int arr[][4]={{1,2,3,5},{7,10,11,16},{20,23,30,34}};
    int key; 
    cout<<"What do you want to search ? " ; 
    cin>> key; 
    binarySearch2DArray(arr,3,4,key); 

}

void binarySearch2DArray(int arr[][4],int row,int col,int key)
{
    int start=0, end=(row*col)-1, mid; 
    while (start<=end)
    {
        mid=start+(end-start)/2; 
        if (arr[mid/col][mid%col]==key)
        { 
            cout<<key<< " is present in row : " << mid/col<< ", column : " << mid%col<< '\n'; 
            return; 
        }
        else if (arr[mid/col][mid%col]>key)
            end=mid-1; 
        else 
            start=mid+1;    
    }
    cout<< key<< " is not present in the array\n"; 
} 