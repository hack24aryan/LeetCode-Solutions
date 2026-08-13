int visited[55],nodeCount,degreeSum;

void dfs(int node,int **adj,int *adjSize){
    visited[node]=1;
    nodeCount++;
    degreeSum+=adjSize[node];
    for(int i=0;i<adjSize[node];i++){
        if(!visited[adj[node][i]])
            dfs(adj[node][i],adj,adjSize);
    }
}

int countCompleteComponents(int n,int **edges,int edgesSize,int *edgesColSize){
    int **adj=malloc(n*sizeof(int*));
    int *adjSize=calloc(n,sizeof(int));

    for(int i=0;i<edgesSize;i++){
        adjSize[edges[i][0]]++;
        adjSize[edges[i][1]]++;
    }

    for(int i=0;i<n;i++){
        adj[i]=malloc(adjSize[i]*sizeof(int));
        adjSize[i]=0;
    }

    for(int i=0;i<edgesSize;i++){
        int from=edges[i][0];
        int to=edges[i][1];
        adj[from][adjSize[from]++]=to;
        adj[to][adjSize[to]++]=from;
    }

    memset(visited,0,sizeof(visited));

    int completeComponents=0;

    for(int i=0;i<n;i++){
        if(!visited[i]){
            nodeCount=0;
            degreeSum=0;
            dfs(i,adj,adjSize);
            if(degreeSum/2==nodeCount*(nodeCount-1)/2)
                completeComponents++;
        }
    }

    return completeComponents;
}
