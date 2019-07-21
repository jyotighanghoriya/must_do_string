/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
     //Your code here
     if(s.length()<x.length())
        return -1;
     for(int i=0; i<=s.length()-x.length(); i++){
         int j;
         for(j=0; j<x.length(); j++){
             if(s[i+j]!=x[j])
                break;
         }
         if(j==x.length())
            return i;
     }
     return -1;
}
