// Given a string s, remove all its adjacent duplicate characters recursively. 

// Example 1:

// Input:
// S = "geeksforgeek"
// Output: "gksforgk"
// Explanation: 
// g(ee)ksforg(ee)k -> gksforgkâ€‹

// Example 2:

// Input: 
// S = "acaaabbbacdddd"
// Output: "acac"
// Explanation: 
// ac(aaa)(bbb)ac(dddd) -> acac

using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    int count1[256] = {0},count2[256] = {0};
	    if(s1.length()!=s2.length()){
	        cout<<"NO"<<endl;
	    }
	    else{
    	    for(int i=0; i<s1.length(); i++){
    	        count1[s1[i]-'a']++;
    	        count2[s2[i]-'a']++;
    	    }
    	    for(int i=0; i<256; i++){
    	        if(count1[i]!=count2[i]){
    	            cout<<"NO"<<endl;
    	            break;
    	        }
    	    }
    	    cout<<"YES"<<endl;
	    }
	    
	}
	return 0;
}
Python Solution:
class Solution:
    def remove (self, s):
        i=0
        str_1=""
        if len(s)==0:
            return s
        elif len(s)==1:
            return s
        else:
           while(i < len(s)-1):
                # print("checking for ith character "+s[i])
                if s[i]==s[i+1]:
                    while i<len(s)-1 and s[i]==s[i+1]:
                        i=i+1
                    i=i+1
                else:
                    # print(s[i]+":"+str(i))
                    str_1=str_1+s[i]
                    i=i+1
        if s[len(s)-1]!=s[len(s)-2]:
            str_1=str_1+s[len(s)-1]
        return str_1
