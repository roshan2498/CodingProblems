// Lets go to the next level 
// AIM CM at CF *__* asap 
// Hit A,B,C and D faster and reach Candidate Master
// Remember you were also a novice when you started, 
// hence never be rude to anyone who wants to learn something
// Never open a ranklist untill and unless you are done with solving problems, wastes 3/4 minuts 
// Donot treat CP as a placement thing, love it and enjoy it, you will succeed for sure.  


#include <bits/stdc++.h>
using namespace std;
#define mod (int)1000000007
#define MOD (int)10000000007
// Big two primes 
#define X 1001100011100001111ll
#define M 26388279066623ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for0e(i, n) for (int i = 0; i <= n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define tc(t) int t; cin >> t; while (t--)
#define int long long 
#define ll long long
#define pb emplace_back
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define in(x) scanf("%d", &x)
#define rr return 0
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define ini(a, i) memset(a, i, sizeof(a))
#define vi vector<int> 
#define F first
#define S second
#define pi pair<int, int>
#define ppi pair<pair<int,int> , int >
#define vii vector<pi>
const int MAXN = (int)((1e5) + 100);
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
int max(int a,int b){if(a>b) return a; else return b;}
int min(int a,int b){if(a<b) return a; else return b;}  
int cbrt(int x){ int lo=1,hi=min(2000000ll,x);while(hi-lo>1){int mid=(lo+hi)/2;if(mid*mid*mid<x){lo=mid;}else hi=mid;}if(hi*hi*hi<=x) return hi;else return lo;} 
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
const int N =  (int)(1e6+5); 

void lcs(string s1,string s2){
    int ans = INT_MAX;
    const int m = s1.size();
    const int n = s2.size();
    vector<vector<int>>dp(m+1,vector<int>(n+1,0));
 
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    //len of lcs stored in dp[m][n]
    //return dp[m][n];
    // Now to print the LCS

    int index = dp[m][n];
    char LCS[index+1];
    LCS[index] = '\0';
    int i = m,j = n;

    while(i>0 && j>0){
        if(s1[i-1] == s2[j-1]){
            LCS[index-1] = s1[i-1];
            i--;
            j--;
            index--;
        }
        else if(dp[i-1][j] > dp[i][j-1]){
            i--;
        }
        else{
            j--;
        }
    }
    cout<<LCS<<endl;
}


signed main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  fio;
    string s1,s2;
    cin>>s1>>s2;
    lcs(s1,s2);
  rr;
}