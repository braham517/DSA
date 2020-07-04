void Graph::connectedComponents() 
{ 
    
    bool *visited = new bool[V]; 
    for(int v = 0; v < V; v++) 
        visited[v] = false; 
  
    for (int v=0; v<V; v++) 
    { 
        if (visited[v] == false) 
        {
            DFSUtil(v, visited); 
  
            cout << "\n"; 
        } 
    } 
    delete[] visited; 
} 
