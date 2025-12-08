#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
  ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	
    int bills[] = {100, 20, 10, 5, 1}; // array of bills 
    int count = 0;
    
    int n;
 
    cin >> n; // total money 
 
    for (int i = 0; i < 5; i++)
    {
        count = count + (n / bills[i]); // compute this and add this to count 
        n = n % bills[i]; // remaining money so n gets updated 
    }
 
    cout << count << endl;
 
    return 0;
}
