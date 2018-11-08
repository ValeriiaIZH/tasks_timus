#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,int> a;
    int n, i, b, ans;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> b;
        a[b]++;
    }
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> b;
        a[b]++;
    }
    cin >> n;
    ans=0;
    for(i=1;i<=n;i++)
    {
        cin >> b;
        if(a[b]==2)
            ans++;
    }
    cout << ans;
    return 0;
}
