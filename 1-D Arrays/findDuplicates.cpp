#include <iostream> 
#include <vector> 
using std::vector; 


void inputVector(vector<int>&, int); 
void displayVector(const vector<int>&); 
vector<int> findDuplicates(vector<int>&) ; 

int main()
{ 
    vector <int> v; 
    int n; 
    std::cout<< "Enter the size of the vector : "; 
    std::cin>> n; 
    inputVector(v,n); 
    std::cout<< "\nThe duplicate elements are : "; 
    displayVector(findDuplicates(v)); 
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


// vector<int> findDuplicates(vector<int>& nums) 
// {
//     vector<int> dup; 
//     int temp; 
//     for (int i=0; i<nums.size(); i++)
//     {
//         bool counted=false; 
//         for (int j=0; j<i ; j++)
//         { 
//             if (nums[i]==nums[j])
//             { 
//                 counted=true; 
//                 break; 
//             }
//         }
//         if (!counted)
//         { 
//             for (int j=0; j<nums.size(); j++)
//             { 
//                 if (i!=j && nums[i]==nums[j])
//                 { 
//                     dup.push_back(nums[i]); 
//                     break; 
//                 }
//             }
//         }
//     }
//     return dup; 
// }

vector<int> findDuplicates(vector<int>& nums) 
{
    vector<int> dup; 
    for (int i=0; i<nums.size();i++)
    { 
        int index=abs(nums[i])-1; 
        if (nums[index]<0)
        { 
            dup.push_back(abs(nums[i])); 
            continue; 
        }
        nums[index]=-nums[index]; 
    }
    return dup; 
}
