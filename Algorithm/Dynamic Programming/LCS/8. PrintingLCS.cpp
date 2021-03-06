void lcs( char *X, char *Y, int m, int n ) 
{ 
   int L[m+1][n+1]; 
  
   for (int i=0; i<=m; i++) 
   { 
     for (int j=0; j<=n; j++) 
     { 
       if (i == 0 || j == 0) 
         L[i][j] = 0; 
       else if (X[i-1] == Y[j-1]) 
         L[i][j] = L[i-1][j-1] + 1; 
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]); 
     } 
   } 
  
   string s;
   int i = m, j = n; 
   while (i > 0 && j > 0) 
   { 
      if (X[i-1] == Y[j-1]) 
      { 
          s.push_back(a[i-1]);
          lcs[index-1] = X[i-1]; 
          i--; j--;
      } 
      else if (L[i-1][j] > L[i][j-1]) 
         i--; 
      else
         j--; 
   } 
   cout << "LCS of " << X << " and " << Y << " is " << lcs; 
} 
