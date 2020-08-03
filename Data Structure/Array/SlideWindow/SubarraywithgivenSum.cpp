int subArraySum(int arr[], int n, int sum) 
{ 
   
    for (i = 1; i <= n; i++) { 
    
        while (curr_sum > sum && start < i - 1) { 
            curr_sum = curr_sum - arr[start]; 
            start++; 
        }
        if (curr_sum == sum) { 
            cout << "Sum found between indexes "
                 << start << " and " << i - 1; 
            return 1; 
        } 
        if (i < n) 
            curr_sum = curr_sum + arr[i]; 
    } 
    // Doesnot work with negative element
