// Problem : A. Circle Coloring
// Contest : Codeforces - Grakn Forces 2020
// URL : https://codeforces.com/contest/1408/problem/A
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
███╗   ██╗ █████╗ ██╗   ██╗ ██████╗ ██╗  ██╗████████╗██╗   ██╗██████╗  ██████╗ ██╗   ██╗
████╗  ██║██╔══██╗██║   ██║██╔════╝ ██║  ██║╚══██╔══╝╚██╗ ██╔╝██╔══██╗██╔═══██╗╚██╗ ██╔╝
██╔██╗ ██║███████║██║   ██║██║  ███╗███████║   ██║    ╚████╔╝ ██████╔╝██║   ██║ ╚████╔╝ 
██║╚██╗██║██╔══██║██║   ██║██║   ██║██╔══██║   ██║     ╚██╔╝  ██╔══██╗██║   ██║  ╚██╔╝  
██║ ╚████║██║  ██║╚██████╔╝╚██████╔╝██║  ██║   ██║      ██║   ██████╔╝╚██████╔╝   ██║   
╚═╝  ╚═══╝╚═╝  ╚═╝ ╚═════╝  ╚═════╝ ╚═╝  ╚═╝   ╚═╝      ╚═╝   ╚═════╝  ╚═════╝    ╚═╝

*/
#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = (a); i <= (b); ++i)
#define REPD(i, a, b) for (int i = (a); i >= (b); --i)
#define rep(i, a, bb) for (int i = a; i < bb; i++)
#define FORI(i, n) REP(i, 1, n)
#define FOR(i, n) REP(i, 0, int(n) - 1)
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define ll long long
#define SZ(x) int((x).size())
#define DBG(v) cerr << #v << " = " << (v) << endl;
#define FOREACH(i, t) for (typeof(t.begin()) i = t.begin(); i != t.end(); i++)
#define fi first
#define se second

//constraints

//globals

//custom functions

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> v(n, vector<int>(3, 0));
        rep(i, 0, 3)
                rep(j, 0, n)
                    cin >>
            v[j][i];

        rep(j, 0, n)
            sort(v[j].begin(), v[j].end());
        //sort(v.begin(), v.end());
        vector<int> ans(n);
        ans[0] = v[0][0];
        rep(j, 1, n)
        {
            rep(i, 0, 3)
            {
                if (v[j][i] != ans[j - 1])
                {
                    if (j == n - 1)
                    {
                        if (v[j][i] != ans[0])
                        {
                            ans[j] = v[j][i];
                            break;
                        }
                    }
                    else
                    {
                        ans[j] = v[j][i];
                        break;
                    }
                }
            }
        }
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */