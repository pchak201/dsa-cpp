#include <iostream> 
using namespace std; 

const int MAX=100; 
void displayArray(int[][MAX],int); 
void input2dArray(int[][MAX],int) ; 
void transposeArray(int[][MAX],int); 
void reverseArray(int*, int); 
void rotate90(int[][MAX],int); 

int main()
{ 
    int arr[MAX][MAX], n; 
    cout<< "Enter the size of the matrix : "; 
    cin>>n; 
    input2dArray(arr,n) ; 
    displayArray(arr,n); 
    rotate90(arr,n); 
    displayArray(arr,n); 
}

void input2dArray(int arr[][MAX], int n) 
{
    cout<< '\n' ; 
    for (int i=0; i<n; i++)
    { 
        for (int j=0; j<n; j++)
        { 
            cout<< "Enter element [" << i << "]["<<j << "] : "; 
            cin>> arr[i][j]; 
        }
        cout<<"\n"; 
    }
}

void displayArray(int arr[][MAX],int n)
{ 
    cout<< "\nThe array is : \n" ; 
    for (int i=0; i<n; i++)
    { 
        for (int j=0; j<n; j++)
        { 
            cout<< arr[i][j]<< ' ' ; 
        }
        cout<< '\n'; 
    }
}

void transposeArray(int arr[][MAX], int n)
{ 
    for (int i=0; i<n; i++)
    { 
        for (int j=i+1; j<n; j++)
        { 
        swap(arr[i][j], arr[j][i]); 
        }
    }
}

void reverseArray(int* arr, int n) 
{ 
    for (int i=0; i<n/2; i++)
    { 
        swap(arr[i],arr[n-1-i]); 
    }
}

void rotate90(int arr[][MAX], int n)
{ 
    transposeArray(arr,n); 
    for (int i=0; i<n; i++)
    { 
        reverseArray(arr[i],n); 
    }
}