#include <iostream> 
using namespace std; 
#define MAX 100

void inputArray(int*,int); 
void displayArray(int*,int); 
void reverseArray(int*,int); 
int removeDuplicates(int*,int); 

int main()
{ 
    int arr[MAX], n; 
    cout<< "How many elements are in the array ? ";
    cin>>n ;
    inputArray(arr,n); 
    displayArray(arr,removeDuplicates(arr,n)); 
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

int removeDuplicates(int* arr,int n)
{ 
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n ; j++)
        { 
            if (arr[j]==arr[i])
            { 
                for (int k=j; k<n-1; k++)
                { 
                    arr[k]=arr[k+1]; 
                }
                n--; 
                j--;    // j-- is specific to cases where duplicates are right one after another 
            }
        }
    } 
    return n ; 
}