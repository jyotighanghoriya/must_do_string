Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Example 1:

Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i
Example 2:

Input:
S = pqr.mno
Output: mno.pqr
Explanation: After reversing the whole
string , the input string becomes
mno.pqr

using namespace std;

void revWord(string &s, int b, int e) 
{ 
    char temp; 
    while (b<e) { 
        temp = s[b]; 
        s[b++] = s[e]; 
        s[e--] = temp; 
    } 
} 

void reverse(string s){
    int n = s.length();
    int b = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='\0')
            revWord(s,b,i-1);
        else if(s[i]=='.'){
            revWord(s,b,i-1);
            b = i+1;
        }
    }
    revWord(s,b,n-1);
    revWord(s,0,n-1);
    cout<<s<<endl;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    reverse(s);
	}
	return 0;
}


Python : 
class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,S):
        l=S.split('.')
        l.reverse()
        s=".".join(l)
        return s

