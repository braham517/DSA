int longestEvenOddSubarray(int a[], int n) 
{ 
    int longest = 1; 
    int cnt = 1; 
    for (int i = 1; i < n; i++) { 

        if ((a[i] + a[i - 1]) % 2 == 1) { 
            cnt++; 
            longest = max(longest, cnt); 
        } 
        else { 
            cnt = 1; 
        } 
    } 
