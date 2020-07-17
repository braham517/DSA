using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	stack<char> a;
	int flag=0;
	for(int i=0;i<s.length();i++){
	if(s[i]=='('||s[i]=='{'||s[i]=='[')
	a.push(s[i]);
	if(s[i]==')'||s[i]=='}'||s[i]==']')
	{
	    if(a.empty()){
	    flag=1;
	    break;
	    }
	    else{
	        if(s[i]==')'&&a.top()=='(')
	        a.pop();
	        else if(s[i]=='}'&&a.top()=='{')
	        a.pop();
	        else if(s[i]==']'&&a.top()=='[')
	        a.pop();
	        else
	        flag=1;
	    }
	 
	}
	
	}

	if(!a.empty()||flag==1)
	cout<<"not balanced"<<endl;
	else
	cout<<"balanced"<<endl;
	}
	return 0;
}
