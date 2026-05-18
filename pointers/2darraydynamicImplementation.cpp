#include <iostream> 

int main()
{
    int row,col; 
    std::cout<< "Enter the number of rows : "; 
    std::cin>>row; 
    std::cout<< "Enter the number of columns : "; 
    std::cin>>col; 
    int **arr= new int*[row];
    for (int i=0; i<row; i++)
    { 
        arr[i] = new int[col]; 
    }

    for (int i=0; i<row;  i++)
    { 
        for (int j=0; j<col; j++)
        {
            std::cout<< "Enter element : " ; 
            std::cin>> arr[i][j]; 
        }
    }
    for (int i=0; i<row; i++)
    { 
        for (int j=0; j<col; j++)
        { 
            std::cout<< arr[i][j]<< " "; 
        }
        std::cout<<'\n'; 
    }

    for (int i=0; i<row ;i++)
    { 
        delete []arr[i]; 
    }
    delete []arr; 

    for (int i=0; i<row; i++)
    { 
        for (int j=0; j<col; j++)
        { 
            std::cout<< arr[i][j]<< " "; 
        }
        std::cout<<'\n'; 
    }
}
