#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

//for traversing the vector three methods can be used
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    for(auto element:v){
        cout<<element<<endl;
    }
    v.pop_back(); // for removing the last element of vector

    vector<int> v2 (3,50);//for fixing the value of vector
    for(auto element:v2){
        cout<<element<<endl;
    }
    swap(v,v2);//for swaping the value of two vectors
    return 0;
}