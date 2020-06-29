char* countSort(char arr[])
{
    int p[26]={0};
    for(int i=0;arr[i]!='\0';i++)
    {
        p[arr[i]-'a']++;
    }
    int j=0;
    for(int i=0;i<26;i++)
    {
        while(p[i]--)
        arr[j++]=i+'a';
    }
    return arr;
    
}
