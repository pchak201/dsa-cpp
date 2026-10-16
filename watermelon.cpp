#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin>>n;
    std::vector<std::vector<int>> input;
    for (int i=0; i<n; i++) 
    { 
        std::vector<int> temp;
        for (int i=0; i<3 ; i++)
        { 
            int x;
            std::cin>>x;
            temp.push_back(x);
        }
        input.push_back(temp);
    }

    int ans=0;
    for (auto arr : input)
    { 
        int count=0;
        for (int elem : arr)
        { 
            if (elem)
                count++;
        }
        if (count>=2)
            ans++;
    }
    std::cout<< ans;
    return 0;
} 