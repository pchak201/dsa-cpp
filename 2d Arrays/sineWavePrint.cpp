#include <iostream> 
using namespace std; 

const int MAX=100; 
void displayArray(int[][MAX],int row,int col); 
void input2dArray(int[][MAX], int row, int col) ; 
void sineWavePrint(int[][MAX],int,int); 

int main()
{ 
    int arr[MAX][MAX], row,col; 
    cout<< "Enter array row and column size  : "; 
    cin>> row>> col; 
    input2dArray(arr,row,col) ; 
    displayArray(arr,row,col); 
    sineWavePrint(arr,row,col); 
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

void sineWavePrint(int arr[][MAX],int row,int col)
{ 
    for (int i=0; i<col; i++)
    { 
        if (i%2==0)
        {
            for (int j=0; j<row; j++)
            { 
                cout<< arr[j][i] << " "; 
            }
        } 
       else
        {
            for (int j=row-1; j>=row; j--)
            { 
                cout<< arr[j][i] << " "; 
            }
        }
    }
}