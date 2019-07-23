my implementation
int atoi(string str)
{
    int res=0;
    int sign=1;
    int i=0;
    if(str[0]=='-'){
        sign=-1;
        i++;
    }
    for(;i<str.length();i++){
        if(str[i]>='a'&& str[i]<='z'){
            return -1;
        }
        res=res*10+str[i]-'0';
    }
    //Return result with sign 
    return sign * res; 
}
-----------------------------------------------------------------------------
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    //last index that has seen this character is stored in vis
	    int vis[26];
	    for(int i=0; i<26; ++i)
	        vis[i] = -1;
	    vis[s[0]-'a'] = 0;
	    int cur = 1,mx = 1;
	    for(int i=1; i<s.length(); ++i){
	        int prev = vis[s[i]-'a'];
	        if(vis[s[i]-'a']==-1 || i-prev>cur){
	            cur++;
	            mx = max(cur,mx);
	        }
	        else{
	            mx = max(cur,mx);
	            cur = i - prev;
	        }
	        vis[s[i]-'a'] = i;
	    }
	   //  mx = max(cur,mx);
	    cout<<mx<<endl;    
	    
	}
	return 0;
}
