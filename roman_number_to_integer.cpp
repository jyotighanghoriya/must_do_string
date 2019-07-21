using namespace std;
int getValue(char c){
    if(c=='I')
        return 1;
    if(c=='V')
        return 5;
    if(c=='X')
        return 10;
    if(c=='L')
        return 50;
    if(c=='C')
        return 100;
    if(c=='D')
        return 500;
    if(c=='M')
        return 1000;
}

int roman(string s){
    int res = 0;
    for(int i=0; i<s.length(); ++i){
        if(i==s.length())
            res += getValue(s[i]);
        else{
            int a = getValue(s[i]);
            int b = getValue(s[i+1]);
            if(a>=b)
                res += a;
            else
                res -= a;
        }
    }
    return res;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    cout<<roman(s)<<endl;
	}
	return 0;
}
