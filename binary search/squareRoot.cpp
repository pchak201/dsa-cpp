#include <iostream>
using std::cout, std::cin; 

int squareRootInt(int); 
double higherPrecisionSquareRoot(int,int,double); 

int main()
{ 
    int n, precision; 
    cout<< "What number's square root do you want ? "; 
    cin>>n; 
    cout<< "What degree of precision do you want ? "; 
    cin>> precision; 
    cout<< "The square root of " << n <<" up to " << precision << " decimal places is : " << higherPrecisionSquareRoot(n, precision, squareRootInt(n)); 
}

int squareRootInt(int n)
{ 
    int start=0, end=n, mid; 
    while (start<=end) 
    {
        mid=start+(end-start)/2; 
        if (mid*mid==n)
            return mid; 
        if (mid*mid>n)
            end=mid-1; 
        else if (mid*mid<n)
            start=mid+1; 
    }
    return end; 
}

double higherPrecisionSquareRoot(int n, int precision, double root)
{ 
    double factor=0.1, answer; 
    for (int i=0; i<precision; i++)
    { 
        if (i)
            factor=factor*(0.1); 
        while (root*root<n)
        { 
            answer=root; 
            root+=factor; 
        }
        root=answer; 
    }
    return answer; 
}