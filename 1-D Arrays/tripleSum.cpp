#include <iostream> 
#include <vector> 
using std::cout, std::cin, std::vector; 

vector<vector<int>> threeSum(vector<int>&); 
bool notIn(vector<vector<int>> arr, const vector<int> val); 

int main()
{          
    vector <int> arr = { 1,2,3,4,5,6,7,9,10,11}; 
    for (int i=0; i<arr.size(); i++)
    { 
        for (int j=i+1; j<arr.size(); j++)
        { 
            for (int k=j+1; k<arr.size(); k++)
            { 
                cout<< arr[i]<< " "<<  arr[j] <<" " << arr[k] << "\n"; 
            }
            cout<< "\n"; 
        }
        cout<< "\n"; 
    }
}

// vector<vector<int>> threeSum(vector<int>& arr)
// { 
//     vector<vector<int>> ans; 
//     for (int i=0; i<arr.size(); i++)
//     { 
//         for (int j=i+1; j<arr.size(); j++)
//         { 
//             for (int k=j+1; k<arr.size(); k++)
//             { 
//                 if (arr[i]+arr[j]+arr[k]==0)
//                 { 
//                     if (notIn(ans,{arr[i], arr[j], arr[k]}))
//                     ans.push_back({arr[i], arr[j], arr[k]}); 
//                 }
//             }
//         }
//     }
//     return ans; 
// }

// bool notIn(vector<vector<int>> arr, const vector<int> val)
// { 
//     sort(val.begin(), val.end()); 
//     for (vector<int> elem : arr)
//     { 
//         sort(elem.begin(),elem.end())
//         if (elem==val)
//             return false; 
//     }
//     return true; 
// }