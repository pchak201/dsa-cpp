#include <iostream> 
#include <vector> 
using std::vector; 


void inputVector(vector<int>&, int); 
void displayVector(const vector<int>&); 
int uniqueElem(const vector<int>&); 

int main()
{ 
    vector <int> v; 
    int n; 
    std::cout<< "Enter the size of the vector : "; 
    std::cin>> n; 
    inputVector(v,n); 
    displayVector(v); 
    int u_index=uniqueElem(v); 
    if (u_index==-1)
        std::cout<< "There is no unique element\n"; 
    else 
        std::cout<< "The unique element is : " << v[uniqueElem(v)]; 
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

int uniqueElem(const vector<int>& v)
{ 
    for (int i=0; i<v.size(); i++)
    { 
        bool repeat_element=false;   
        int elem_i = v[i]; 
        for (int j=0; j<v.size(); j++)
        {
            if (i!=j && elem_i == v[j])
            {
                repeat_element=true; 
                break; 
            }
        }
        if (!repeat_element)
            return i; 
    }
    return -1; 
}