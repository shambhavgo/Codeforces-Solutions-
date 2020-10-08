// Problem : B. Arrays Sum
// Contest : Codeforces - Grakn Forces 2020
// URL : https://codeforces.com/contest/1408/problem/B
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
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define test  \
    int T;    \
    cin >> T; \
    while (T--)
#define __sort(v) sort(v.begin(), v.end())
#define __rsort(v) sort(v.rbegin(), v.rend())
//constraints

//globals

//custom functions

int main()
{
    fast;
    test
    {
        int n, k;
        cin >> n >> k;
        set<int> s;
        vi a(n);
        FOR(i, n)
        {
            cin >> a[i];
            s.insert(a[i]);
        }

        if (k == 1 and s.size() > 1)
        {
            cout << -1 << "\n";
        }
        else
        {
            int m = s.size();
            if (m == 1)
            {
                cout << 1 << "\n";
            }
            else
            {
                int ans = 0;
                while (m > 1)
                {
                    ans++;
                    m = m - k + 1;
                }
                cout << ans << endl;
            }
        }
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