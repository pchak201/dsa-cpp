
std::string reverseString(std::string s, int start,int end)
{ 
    if (start>=end)
        return s; 
    std::swap(s[start],s[end]); 
    reverseString(s,start+1,end-1); 
}