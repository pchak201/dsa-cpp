#include <iostream> 
using namespace std; 

const int MAX=100; 
void displayArray(int[][MAX],int row,int col); 
void input2dArray(int[][MAX], int row, int col) ; 
void spiralTraversal(int[][MAX],int,int); 

int main()
{ 
    int arr[MAX][MAX], row,col; 
    cout<< "Enter array row and column size  : "; 
    cin>> row>> col; 
    input2dArray(arr,row,col) ; 
    displayArray(arr,row,col); 
    spiralTraversal(arr,row,col); 
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

void spiralTraversal(int arr[][MAX],int row,int col)
{
    cout<< "\nSpiral Traversal : \n"; 
    int top=0, bottom=row-1 , right=col-1 , left=0, count=0, total=row*col; 
    while (count<total)
    {
        for (int j=left;count<total && j<=right; j++)
        { 
            cout<< arr[top][j]; 
            cout<< ' '; 
            count++; 
        }
        top++; 

        for (int j=top; count<total && j<=bottom; j++)
        { 
            cout<< arr[j][right]; 
            cout<< ' '; 
            count++; 
        }
        right--; 

        for (int j=right; count<total && j>=left; j--)
        { 
            cout<< arr[bottom][j]; 
            cout<< ' '; 
            count++; 
        }
        bottom--; 

        for (int j=bottom; count<total && j>=top ; j--)
        { 
            cout<< arr[j][left];
            cout<< ' '; 
            count++; 
        }
        left++; 
    }
}