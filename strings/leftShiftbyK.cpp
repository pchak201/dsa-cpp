#include <iostream>
using namespace std; 
#define MAX 100 

void inputArray(int*,int); 
void displayArray(int*,int); 
void shiftLeft(int*,int,int); 

int main()
{ 
    int arr[MAX],n,shift; 
    cout<< "How many elements do you want to enter ? "; 
    cin>>n; 
    cout<<"How many elements do you want to shift ? "; 
    cin>>shift; 
    inputArray(arr,n); 
    cout<<"\nArray Before Shift : "; 
    displayArray(arr,n); 
    shiftLeft(arr,n,shift); 
    cout<<"\nArray After Shift : "; 
    displayArray(arr,n); 
}

void inputArray(int* arr,int n)
{ 
    cout<< "\n"; 
    for (int i=0; i<n; i++)
    { 
        cout<< "Enter element " << i+1 << " : "; 
        cin>>arr[i]; 
    }
    cout<< "\n"; 
}

void displayArray(int* arr,int n)
{ 
    cout<< "\n"; 
    for (int i=0; i<n; i++)
    { 
        cout<< arr[i] << " "; 
    }
    cout<< "\n"; 
}

void shiftLeft(int* arr,int n,int shift)
{ 
    int temp[shift] ={}; 
    //storing temp values to append to the end
    for (int i=0; i<shift; i++)
    { 
        temp[i]=arr[i]; 
    }
    // now shifting
    for (int i=0; i<n-shift;i++)
    { 
        arr[i]=arr[i+shift]; 
    }
    // transferring the temp values to our array 
    for (int i=0; i<shift; i++)
    { 
        arr[n-shift+i]=temp[i]; 
    }
}