#include <iostream> 
using std::cout, std::cin; 

bool linearSearch(int*,int,int); 

int main()
{ 
    int arr[]={1,2,3,4,5,6}; 
    int size= sizeof(arr)/sizeof(arr[0]); 
    int key; 
    cout<< "Enter the key to be searched in the array : "; 
    cin>>key; 
    if (linearSearch(arr,size,key))
        cout<< key<< " is present in the array\n"; 
    else 
        cout<< key<< " is not present in the array\n"; 
}

bool linearSearch(int *arr, int size, int key)
{ 
    if(size==0)
        return false; 
    if (arr[0]==key)
        return true;
    return linearSearch(arr+1,size-1,key);
}