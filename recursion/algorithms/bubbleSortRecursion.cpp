#include <iostream> 
using std::cout, std::cin, std::swap; 

void printArr(int*,int); 
void bubbleSort(int*,int); 

int main()
{ 
    int arr[]={5,2,1,4,1,5,6}; 
    int size=sizeof(arr)/sizeof(arr[0]); 
    cout<< "Array before sort : \n"; 
    printArr(arr,size); 
    bubbleSort(arr,size); 
    cout<< "Array after sort : \n"; 
    printArr(arr,size); 
}

void printArr(int* arr,int size)
{ 
    if (size==0)
        return; 
    cout<< arr[0]<< " "; 
    printArr(arr+1,--size); 
}

void bubbleSort(int *arr, int size)
{ 
    if (size==0|| size==1)
        return; 
    for (int i=0; i<size-1; i++)
    { 
        if (arr[i]>arr[i+1])
            swap(arr[i], arr[i+1]); 
    }
    return bubbleSort(arr,size-1); 
}