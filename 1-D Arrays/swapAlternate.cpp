#include <iostream> 
#include <vector> 
using std::cout, std::cin, std::vector; 
void printVector(const vector<int>&); 
void swapAlt(vector<int>&); 
void reverse(vector<int>&); 

int main()
{ 
    vector<int> v; int n, elem; 
    cout<< "Enter the number of elements : "; 
    cin>> n; 
    for (int i=0; i<n; i++)
    { 
        cout<< "Enter element " << i+1 << " : "; 
        cin>> elem; 
        v.push_back(elem); 
    }
    cout<< "Vector before swapping : \n"; 
    printVector(v); 
    swapAlt(v); 
    cout<< "Vector after swapping : \n"; 
    printVector(v); 
    cout<< "Reversing the swap : \n";  
    swapAlt(v); 
    printVector(v); 
    reverse(v); 
    cout<< "Vector after reverse : \n"; 
    printVector(v); 
}

void printVector(const vector<int> &v)
{ 
    for (int elem : v)
        cout<< elem << " "; 
    cout<< "\n"; 
}

void swapAlt(vector<int>& v)
{ 
    // int v_length; 
    // if(v.size()%2)
    //     v_length = v.size()-1; 
    // else
    //     v_length = v.size(); 
    // for (int i=0; i<v_length;i+=2)
    //     std::swap(v[i], v[i+1]); 
    // OR (better version)
    for (int i=0; i<v.size()-1; i+=2)
        std::swap(v[i], v[i+1]); 
}


void reverse(vector<int>& v) 
{ 
    for (int i=0; i<v.size()/2;i++)
        std::swap(v[i],v[v.size()-i-1]); 
}