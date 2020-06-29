void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 
	for (i = 0; i < n-1; i++) 
	{ 
		mind = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[mind]) 
			mind = j; 
		swap(arr[min_idx], arr[i]); 
	} 
} 
