#include <iostream>
using namespace std;

int main() {
    int n=1, a=0, b=1, c= a+b;
    cin>>n;
    if (n==0) {
        cout<<" ";
    }else{
        cout<< "1" <<endl;
        cout<< "1" <<endl;
        for (int i=0; i<n ;i++) {
            a = b;
            b = c;
            c = a + b;
            if (c<=n){
                cout << c << endl;
            }else{
                break;
            }
    }
        }

    return 0;
}
