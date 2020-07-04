using namespace std;
string lps(string s)
{
    int max=1;
    int low,high;
    int k=s.size();
    if(k==1)
    return s;
    int start=0;
    string a;
    for(int i=1;i<k;i++)
    {
        low=i-1;
        high=i;
        while(low>=0&&high<k&&s[low]==s[high])
        {
            if(high-low+1>max)
            {
                max=high-low+1;
                start=low;
            }
            low--;
            high++;
        }
        
        low =i-1;  
        high =i+1;  
        while (low >= 0 && high < k && s[low] == s[high])  
        {  
            if (high-low+1>max)  
            {  
                start=low;  
                max=high-low+1;  
            }  
            low--;  
            high++; 
        }
    }

    for(int i=start;i<start+max;i++)
    a.push_back(s[i]);
    return(a);
}


int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	   string s;
	   cin>>s;
	   cout<<lps(s)<<endl;

	}
	
	return 0;
}
