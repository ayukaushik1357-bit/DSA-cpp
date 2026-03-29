#include<iostream>
using namespace std;

#include<set>

#include<map>

int main()
{

// STL SET
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(int i:s){
        cout<<i<<" "<<endl;
    }

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for(int i:s){
        cout<<i<<" "<<endl;
    }

    cout<<"5 is present or not "<<s.count(-5)<<endl;

    set<int>::iterator itr = s.find(5);
    cout<<"value present at itr -> "<<*it<<endl;


// STL MAP
    map<int,string> m;

    m[1] = "babbar";
    m[2] = "love";
    m[13] = "kumar";

    m.insert( {5,"bheem"});

    cout<<"Before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"FInding 13-> "<<m.count(13)<<endl;

    m.erase(13);
    cout<<"After erase "<<endl;
      for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);

    /*for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }*/






    return 0;
}
