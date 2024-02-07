#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter Size";
    cin>>n;
    int A[n] = {2,4,8,10,12};

    for(int x:A) {
        cout<<x<<endl;
    }

    cout<<sizeof(A)<<endl;
    cout<<A[2]<<endl;
    printf("%d\n", A[3]);

    return  0;
}