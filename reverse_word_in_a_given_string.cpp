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
