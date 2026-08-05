class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        //O(V+E), V = nodes , E = edges
        //graph - adjacency list
        vector<vector<int>> adj(n); //u -> {ngbr1, ngbr2} //O(V+E)
        vector<int> inDegree(n, 0); //O(V)
        vector<bool> suspicious(n, false);//O(V)

        for(auto &edge : invocations) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            inDegree[v]++;
        }

        //BFS
        queue<int> que;
        que.push(k);
        suspicious[k] = true;

        while(!que.empty()) {
            int curr = que.front();
            que.pop();
