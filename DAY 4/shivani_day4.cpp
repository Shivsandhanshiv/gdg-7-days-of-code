#include <iostream>
using namespace std;
int main() {
    int p, q, r;
    while(cin>>p>>q>>r)
        {
        int total_stud=p*q;
        if (r > total_stud/2)
            {
            cout<<"YES"<<endl;
            }
        else
            {
            cout<<"NO"<<endl;
            }
        }
return 0;
}
