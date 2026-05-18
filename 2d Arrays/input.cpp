#include <iostream> 
using namespace std; 

const int MAX=100; 
void input2dArray(int[][MAX], int,int); 
void displayArray(int[][MAX],int,int); 
void rowWiseSum(const int[][MAX], int,int); 
void colWiseSum(const int[][MAX],int,int); 
void largestRow(const int[][MAX],int,int); 

int main()
{ 
    int row,col, arr[MAX][MAX]; 
    cout<< "How many rows and columns do you want ? "; 
    cin>> row>> col; 
    cout<< "\n"; 
    input2dArray(arr,row,col); 
    displayArray(arr,row,col); 
    cout<< '\n'; 
    rowWiseSum(arr,row,col); 
    cout<< '\n'; 
    colWiseSum(arr,row,col); 
    cout<< '\n'; 
    largestRow(arr,row,col); 

}

void input2dArray(int arr[][MAX], int row, int col) 
{ 
    for (int i=0; i<row; i++)
    { 
        for (int j=0; j<col; j++)
        { 
            cout<< "Enter element [" << i << "]["<<j << "] : "; 
            cin>> arr[i][j]; 
        }
        cout<<"\n"; 
    }
}
void displayArray(int arr[][MAX],int row,int col)
{ 
    cout<< "\nThe array is : \n" ; 
    for (int i=0; i<row; i++)
    { 
        for (int j=0; j<col; j++)
        { 
            cout<< arr[i][j]<< ' ' ; 
        }
        cout<< '\n'; 
    }
}

void rowWiseSum(const int arr[][MAX],int row,int col)
{ 
    for (int i=0; i<row; i++)
    { 
        int sum=0; 
        for (int j=0; j<col; j++)
        { 
            sum+=arr[i][j]; 
        }
        cout<< "Sum of row " << i+1 << " is = " << sum << '\n'; 
    }
}

void colWiseSum(const int arr[][MAX],int row,int col)
{ 
    for (int i=0; i<col; i++)
    { 
        int sum=0; 
        for (int j=0; j<row; j++)
        { 
            sum+=arr[j][i]; 
        }
        cout<< "Sum of column " << i+1 << " is = " << sum << '\n'; 
    }
}

void largestRow(const int arr[][MAX],int row,int col)
{ 
    int max=0, index=0; 
    for (int i=0; i<row; i++)
    { 
        int sum=0; 
        for (int j=0; j<col; j++)
        { 
            sum+=arr[i][j]; 
        }
        if (sum>max)
        { 
            max=sum; 
            index=i; 
        }
    }
    cout<< "Row " << index+1 << " is the largest\n"; 
}