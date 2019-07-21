using namespace std;

void permute(string s, int b, int e, vector<string> &v){
    if(b==e){
        v.push_back(s);
        return;
    }
    for(int i=b; i<=e; ++i){    
        swap(s[b],s[i]);
        permute(s,b+1,e,v);
        swap(s[b],s[i]);
    }
}

int main()
 {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<string>v;
        permute(s,0,s.length()-1,v);
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); ++i)
            cout<<v[i]<<" ";
        cout<<endl;
    }
	return 0;
}
