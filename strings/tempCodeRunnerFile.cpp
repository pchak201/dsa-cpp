        // else 
        // {
        //     bool appears_again=false; 
        //     for (int j=i+1;j<s.length()-1; j++)
        //     { 
        //         if (s[j]==s[i])
        //         {
        //             appears_again=true; 
        //             break; 
        //         }
        //     }
        //     if (!appears_again)
        //     { 
        //         for (int k=0; k<s.length(); k++)
        //         { 
        //             int count=0; 
        //             for (int j=0; j<s.length(); j++)
        //             { 
        //                 if (s[j]==s[k])
        //                     count++; 
        //             }
        //             s.push_back(s[s.length()-1]); 
        //             for (int j=s.length()-1; j>k; j--)
        //             { 
        //                 s[j]=s[j-1];
        //             }
        //             s[k+1]=(int)(char)count;  
        //         }
        //     }
        // }