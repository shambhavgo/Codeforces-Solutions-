// Problem : C. Discrete Acceleration
// Contest : Codeforces - Grakn Forces 2020
// URL : https://codeforces.com/contest/1408/problem/C
// Memory Limit : 256 MB
// Time Limit : 3000 ms
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
        int n, l;
        cin >> n >> l;
        vi a(n);
        FOR(i, n)
        {
            cin >> a[i];
        }
        // __sort(a);

        double ca = 0, cb = l;
        int sa = 1, sb = 1;
        int i = 0, j = n - 1;
        double ans = 0;
        while (i <= j)
        {
            double d1 = a[i] - ca;
            double d2 = cb - a[j];
            double ta = d1 * 1.0 / sa;
            double tb = d2 * 1.0 / sb;
            if (ta <= tb)
            {
                ans += ta;
                ca += d1;
                cb -= ta * 1.0 * sb;

                sa += 1;
                i++;
            }
            else
            {
                ans += tb;
                ca += tb * 1.0 * sa;
                cb -= d2;

                sb += 1;
                j--;
            }
        }
        double d = cb - ca;
        sa += sb;
        ans += d * 1.0 / sa;
        cout << fixed << setprecision(15) << ans << endl;
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