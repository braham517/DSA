#include <bits/stdc++.h>
using namespace std;
void fun(int arr[],int n)
{
    if(n==1)
    {
        cout<<arr[0];
        return;
    }
    priority_queue<int> maxh;
    priority_queue<int,vector<int>,greater<int>> minh;
    int med=arr[0];
    maxh.push(min(arr[0],arr[1]));
    minh.push(max(arr[0],arr[1]));
    cout<<med<<endl;
    med=(maxh.top()+minh.top())/2;
    cout<<med<<endl;
    for(int i=2;i<n;i++)
    {
        int x=arr[i];
        if(x>maxh.top())
        minh.push(x);
        else
        maxh.push(x);
        while(abs(maxh.size()-minh.size())>1)
        {
            if(maxh.size()>minh.size()){
            minh.push(maxh.top());
            maxh.pop();
            }
            else{
                maxh.push(minh.top());
                minh.pop();
            }
        }
        if(maxh.size()==minh.size())
        med=(maxh.top()+minh.top())/2;
        else if(minh.size()>maxh.size())
        med=minh.top();
        else if(minh.size()<maxh.size())
        med=maxh.top();
        cout<<med<<endl;
    }

    
}
int main() {
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	       cin>>arr[i];   
	    }
	    fun(arr,n);
	
	return 0;
}
