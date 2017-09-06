#include <string>
#include <iostream>
#include <vector>
using namespace std;
 
vector<int> getPartialMatch(const string& N){
    int m = N.size();
    vector<int> pi(m,0);
    int matched=0;
    for(int i=1;i<m;++i){
        while(matched>0 && N[i]!=N[matched])matched = pi[matched-1];
        if(N[i]==N[matched]){
            ++matched;
            pi[i] = matched;
        }
    }
    return pi;
}
 
int main(){
    string H1;
    string H2;
    string N;
    cin>>H1>>H2>>N;
    vector<int> pi = getPartialMatch(N);
    int matched=0;
    int n1 = H1.size();
    int n2 = H2.size();
    int m = N.size();
    int ans1 = -1;
    int ans2 = -1;
    int matched1=0;
    int matched2=0;
    for(int i=0;i<n1;++i){
        while(matched1>0 && H1[i]!=N[matched1])matched1 = pi[matched1-1];
        if(H1[i]==N[matched1]){
            ++matched1;
            if(matched1==m){
                ans1 = i-m+1;
                break;
            }
        }
    }
    for(int i=0;i<n2;++i){
        while(matched2>0 && H2[i]!=N[matched2])matched2 = pi[matched2-1];
        if(H2[i]==N[matched2]){
            ++matched2;
            if(matched2==m){
                ans2 = i-m+1;
                break;
            }
        }
    }
    cout<< (ans1!=-1 && ans2!=-1 ?"YES":"NO");
}
