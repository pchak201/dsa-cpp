#include <iostream> 
using namespace std; 
#define MAX 100

void inputArray(int*,int); 
void displayArray(int*,int); 
void reverseArray(int*,int); 
void reversalAlgo(int*,int,int); 

int main()
{ 
    int arr[MAX], n, k; 
    cout<< "How many elements are in the array ? ";
    cin>>n ;
    cout<< "How many shifts do you want to the right ? "; 
    cin>>k;
    inputArray(arr,n); 
    cout<< "Array before right shift by " << k << " times : "; 
    displayArray(arr,n); 
    reversalAlgo(arr,n,k); 
    cout<< "Array after right shift by " << k << " times : "; 
    displayArray(arr,n); 
}

void inputArray(int* arr, int n)
{ 
    for (int i=0; i<n; i++)
    { 
        cout<< "Enter element " << i+1 << " : " ; 
        cin>> arr[i]; 
    }
    cout<< "\n"; 
}

void displayArray(int* arr, int n)
{ 
    for (int i=0; i<n; i++)
    { 
        cout<< arr[i] << " "; 
    }
    cout<< "\n"; 
}

void reverseArray(int* arr,int n)
{ 
    for (int i=0; i<n/2; i++)
    { 
        int temp=arr[i]; 
        arr[i]=arr[n-1-i]; 
        arr[n-1-i]=temp; 
    }
}

void reversalAlgo(int* arr, int n, int k)
{ 
    reverseArray(arr,n);
    reverseArray(arr,k); 
    reverseArray(arr+k,n-k); 
}