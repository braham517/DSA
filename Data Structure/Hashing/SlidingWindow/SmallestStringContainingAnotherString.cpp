#include<bits/stdc++.h> 
using namespace std; 

const int no_of_chars = 256; 
// Function to find smallest window containing 
// all characters of 'pat' 
string findSubString(string str, string pat) 
{ 
	int len1 = str.length(); 
	int len2 = pat.length(); 
	if (len1 < len2) 
	{ 
		cout <<-1; 
		return ""; 
	} 

	int hash_pat[no_of_chars] = {0}; 
	int hash_str[no_of_chars] = {0}; 

	// store occurrence ofs characters of pattern 
	for (int i = 0; i < len2; i++) 
		hash_pat[pat[i]]++; 

	int start = 0, start_index = -1, min_len = INT_MAX; 

	// start traversing the string 
	int count = 0; // count of characters 
	for (int j = 0; j < len1 ; j++) 
	{ 
		// count occurrence of characters of string 
		hash_str[str[j]]++; 

		// If string's char matches with pattern's char 
		// then increment count 
		if (hash_pat[str[j]] != 0 && 
			hash_str[str[j]] <= hash_pat[str[j]] ) 
			count++; 

		// if all the characters are matched 
		if (count == len2) 
		{ 
			while ( hash_str[str[start]] > hash_pat[str[start]] 
				|| hash_pat[str[start]] == 0) 
			{ 

				if (hash_str[str[start]] > hash_pat[str[start]]) 
					hash_str[str[start]]--; 
				start++; 
			} 

			// update window size 
			int len_window = j - start + 1; 
			if (min_len > len_window) 
			{ 
				min_len = len_window; 
				start_index = start; 
			} 
		} 
	} 

	// If no window found 
	if (start_index == -1) 
	{ 
	cout <<-1; 
	return ""; 
	} 

	// Return substring starting from start_index 
	// and length min_len 
	return str.substr(start_index, min_len); 
} 

// Driver code 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b;
	    cin>>a>>b;
	    cout<<findSubString(a,b)<<endl; 
	}
	
	return 0; 
} 
