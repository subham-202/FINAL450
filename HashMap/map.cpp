#include<bits/stdc++.h>
using namespace std;
int main(){
    //Creation
    unordered_map<string,int> mpp;
    //insertion
    //1 Method 1
    pair<string,int>p=make_pair("Subham",365);
    mpp.insert(p);
    //2 Method 2
    pair<string,int>p2 ("Subham",834);
    mpp.insert(p2);
    //3 Method 3
    mpp["Mera"]=4;

    //Search
    cout<<mpp["Mera"]<<endl;
    cout<<mpp.at("Subham")<<endl;
    cout<<mpp["UnknownKey"]<<endl;//gives 0//it creates the entry for that coressponding row
    cout<<mpp.at("UnknownKey")<<endl;//gives error
    cout<<mpp.size()<<endl;
    cout<<mpp.count("bro")<<endl;
    cout<<mpp.erase("UnkownKey")<<endl;
    cout<<mpp.size()<<endl;

    //Iterator
    // for(auto it:mpp){
    //     cout<<it.first<<"\t"<<it.second<<endl;
    // }
    //Main diffrence between unordered map-->random order and ordered map-->bst-->order is preserved is the elements are inserted in the same order but not in unordered map.
    unordered_map<string,int>:: iterator it=mpp.begin();
    while (it!=mpp.end()){
        cout<<it->first<<" "<<it->second<<" "<<endl;
        it++;
    }
    return 0;
}