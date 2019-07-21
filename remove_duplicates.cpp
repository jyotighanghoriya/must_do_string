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
