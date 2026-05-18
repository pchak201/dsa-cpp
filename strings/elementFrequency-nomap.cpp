#include <iostream> 
using namespace std; 
#define MAX 100

void input(int*,int);
int count(int*,int,int); 
void frequency(int*,int); 

int main()
{ 
    int n, arr[MAX]; 
    cout<<"How long is the array : "; 
    cin>>n; 
    input(arr,n); 
    frequency(arr,n); 
    return 0; 
}

void input(int* arr,int n)
{ 
    for(int i=0; i<n; i++)
    { 
        cout<< "Enter element " << i+1 << " : " ; 
        cin>>arr[i]; 
    }
}

int count(int* arr,int n,int key)
{ 
    int count=0; 
    for (int i=0; i<n; i++)
    { 
        if (arr[i]==key)
            count++; 
    }
    return count;  
}

void frequency(int* arr,int n) 
{ 
    bool counted=false; 
    for (int i=0; i<n ;i++)
    {
        bool counted=false; 
        for (int j=0; j<i; j++) 
        { 
            if (arr[i]==arr[j])
            { 
                counted=true; 
                break; 
            }
        }
        if (counted==false)
            cout<< arr[i] << " has appeared " << count(arr,n,arr[i]) << " times\n"; 
    }
}