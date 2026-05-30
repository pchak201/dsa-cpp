#include <iostream> 
#include <vector> 
using std::vector; 


void inputVector(vector<int>&, int); 
void displayVector(const vector<int>&); 
bool uniqueOccurrences(vector<int>&); 

int main()
{ 
    vector <int> v; 
    int n; 
    std::cout<< "Enter the size of the vector : "; 
    std::cin>> n; 
    inputVector(v,n); 
    std::cout<< std::boolalpha << uniqueOccurrences(v); 
}

void inputVector(vector<int> &v, int n)
{
    int elem; 
    for (int i=0; i<n ;i++)
    { 
        std::cout<< "Enter element " << i+1 << " : "; 
        std::cin>> elem; 
        v.push_back(elem); 
    }
}

void displayVector(const vector<int>& v)
{ 
    std::cout<< "\nThe elements of the vector are : \n"; 
    for (int num: v)
        std::cout<< num << " "; 
    std::cout<< "\n"; 
}

bool uniqueOccurrences(vector<int>& arr)
{

    // vector <int> occ; 
    // for (int x : arr)
    // { 
    //     int count=0; 
    //     for (int y : arr)
    //     { 
    //         if (x==y)
    //             count++;
    //     }
    //     occ.push_back(count); 
    // }
    // for (int i=0; i<arr.size(); i++) 
    // { 
    //     for (int j=0;j<arr.size(); j++)
    //     { 
    //         if (arr[i]!=arr[j] && occ[i]==occ[j])
    //             return false; 
    //     }
    // }
    // return true; 

    vector<int> occ; 
    for (int i=0; i<arr.size(); i++)
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
        if (!counted)
        { 
            int count=0; 
            for (int j=0; j<arr.size(); j++)
            { 
                if (arr[j]==arr[i])
                    count++; 
            }
            occ.push_back(count); 
        }
    }
    for (int i=0; i<occ.size(); i++)
    { 
        for (int j=0; j<occ.size(); j++)
        { 
            if (i!=j && occ[i] == occ[j])
                return false; 
        }
    }
    return true; 
}