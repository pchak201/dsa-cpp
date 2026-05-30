
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