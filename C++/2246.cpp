/**
 * Leetcode 2246. Longest Path With Different Adjacent Characters
 * There is an undirected weighted graph with n vertices labeled from 0 to n - 1.
 * You are given the integer n and an array edges, where edges[i] = [ui, vi, wi] indicates that there is an edge between vertices ui and vi with a weight of wi.
 * A walk on a graph is a sequence of vertices and edges. The walk starts and ends with a vertex, and each edge connects the vertex that comes before it and the vertex that comes after it. It's important to note that a walk may visit the same edge or vertex more than once.
 * The cost of a walk starting at node u and ending at node v is defined as the bitwise AND of the weights of the edges traversed during the walk. In other words, if the sequence of edge weights encountered during the walk is w0, w1, w2, ..., wk, then the cost is calculated as w0 & w1 & w2 & ... & wk, where & denotes the bitwise AND operator.
 * You are also given a 2D array query, where query[i] = [si, ti]. For each query, you need to find the minimum cost of the walk starting at vertex si and ending at vertex ti. If there exists no such walk, the answer is -1.
 * Return the array answer, where answer[i] denotes the minimum cost of a walk for query i.
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dist[100005];
    int ans = 1;

    void dfs(int src, string &s, vector<vector<int>> &adj)
    {
        dist[src] = 1;
        for (int node : adj[src])
        {
            dfs(node, s, adj);
            if (s[src] != s[node])
            {
                ans = max(ans, dist[src] + dist[node]);
                dist[src] = max(dist[src], dist[node] + 1);
            }
        }
    }

    int longestPath(vector<int> &parent, string s)
    {
        int n = parent.size();
        vector<vector<int>> adj(n);
        for (int i = 1; i < n; i++)
        {
            adj[parent[i]].push_back(i);
        }
        dfs(0, s, adj);
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> parent = {-1, 0, 0, 1, 1, 2};
    string s = "abacbe";

    int result = sol.longestPath(parent, s);

    cout << result << endl;

    return 0;
}
