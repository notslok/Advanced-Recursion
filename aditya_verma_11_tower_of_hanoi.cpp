#include<bits/stdc++.h>
using namespace std;

void solve_TOH(int source,int destination,int helper,int num_disc){
    if(num_disc==1){
        cout<<"Move disc from pole "<<source<<" to pole "<<destination<<"\n";
        return;
    }

    solve_TOH(source,helper,destination,num_disc-1);
    cout<<"Move disc from pole "<<source<<" to pole "<<destination<<"\n";

    solve_TOH(helper,destination,source,num_disc-1);
    //cout<<"Move disc from pole "<<helper<<" to pole "<<destination<<"\n";
    return;
}
int main() {
    int source=1,helper=2,destination=3,num_disc;
    cin>>num_disc;
    solve_TOH(source,destination,helper,num_disc);
    return 0;
}
