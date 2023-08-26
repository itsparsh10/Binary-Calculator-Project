#include <iostream>
using namespace std;

int main(){


    int n;
    cin>>n;
    int ans=0;
    int power=1;

    while(n>0){
        int partydigit = n%2;
        ans+= partydigit*power;
        power*=10;
        n/=2;
    
    }

    cout<<ans<<endl;

    return 0;



}