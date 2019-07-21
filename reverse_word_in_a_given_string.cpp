using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
		int n,res=0;
		cin >> n;
		for(int i=1; i<n; i++){
		    int x;
			cin>>x;
			res = res^x;
			res = res^i;
		}
		cout<<(res^n)<<endl;
	}
	return 0;
}
