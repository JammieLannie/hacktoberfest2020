#include <bits/stdc++.h>

using namespace std;

void PrintSpaces(const int& n) {
    string s(n,' ');
    cout << s;
}
void PrintHashes(const int& n) {
    string s(n,'#');
    cout << s;
}
// Complete the staircase function below.
void staircase(int n) {

    for(int i=0;i<n;++i){
        int spaces=n-1-i;
        int hashes=i+1;
        PrintSpaces(spaces);
        PrintHashes(hashes);
        cout<<'\n';    
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
