#include<bit/stdc++.h>
using namespace std;
int main()
 {
	int T;
    cin>>T;
    while(T--)
    {
        int n, k;
        cin>>k>>n;
        int arr[n];
        priority_queue <int, vector<int>, greater<int> > pq;

        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            
            if(i<k-1) 
            {  
                pq.push(arr[i]);
                cout<<-1<<" ";
            }   
            else if(i==k-1)
            {
                pq.push(arr[i]);
                cout<<pq.top()<<" ";
            }
            else
            {
               if (arr[i] > pq.top()) 
                {
                    pq.pop();
                    pq.push(A[i]);
                }
                
                cout<<pq.top()<<" ";
            }
        }
        
        cout<<endl;
    }
}
