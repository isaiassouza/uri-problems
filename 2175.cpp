#include<bits/stdc++.h>
using namespace std;
int main(){
    double o, b, i;
    cin >> o >> b >> i;
    if ((o < b) && (o < i))
        cout << "Otavio" << endl;
    else
    if ((b < o) && (b < i))
        cout << "Bruno" << endl;
    else
    if ((i < o) && (i < b))
        cout << "Ian" << endl;
    else
    if ((o == b) || (o == i) || (b == i))
        cout << "Empate" << endl;
    return 0;
}
