#include <iostream>
using namespace std;
void stock(int price[],int n)
{
    if (n == 1) 
        return;
    int i = 0; 
    int f=0;
    while (i < n - 1) { 
        while ((i < n - 1) && (price[i + 1] <= price[i])) 
            i++; 
        if (i == n - 1) 
            break; 
        int buy = i++; 
        while ((i < n) && (price[i] >= price[i - 1])) 
            i++;
        int sell = i - 1; 
        cout <<"("<<buy<<" "<<sell<<")"<<" "; 
        f=1;
    }
    if(f==0)
    cout<<"No Profit"<<endl;
    else
    cout<<endl;
    
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stock(arr,n);
	}
	return 0;
}
