#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main()
{

    // Array STL

    /*    int basic[3] = {1,2,3};

        // stl array is also static array so that i
        // in cpp we use simply basic array

        array<int,4> a = {1,2,3,4};

        int size = a.size();

        for(int i=0; i < size; i++){
            cout << a[i] << endl;
        }

        cout << "Element at 2nd Index -> " <<a.at(2)<<endl;
        cout << "Empty or not -> " << a.empty() << endl;

        cout << " First Element -> " << a.front() << endl;
        cout << " Last Element -> " << a.back() << endl;



        // Vector STL

        //vector is an dynamic array

        vector<int> v;

        vector<int> a(5,1);
        vector<int> last(a);

        cout << "print last " << endl;
        for(int i : last){
            cout << i << " ";
        }cout << endl;


        cout << "Capacity -> " << v.capacity() << endl;

        v.push_back(1);
        cout << "Capacity -> " << v.capacity() << endl;

        v.push_back(2);
        cout << "Capacity -> " << v.capacity() << endl;

        v.push_back(3);
        cout << "Capacity -> " << v.capacity() << endl;
        cout << "Size -> " << v.size() << endl;

        cout << "Element at 2nd Index " << v.at(2) << endl;

        cout << "front " << v.front() << endl;
        cout << "back " << v.back() << endl;

        cout << "Before pop " << endl;
        for(int i : v){
            cout << i << " ";
        }cout << endl;

        v.pop_back();

        cout << "After pop " << endl;
        for(int i : v){
            cout << i << " ";
        }cout << endl;

        cout << "before clear size " << v.size() << endl;
        v.clear();

        cout << "after clear size " << v.size() << endl;



        // Dequeue STL

        // it is an data structure , in this deque insection and
        // delection front and back also,

        deque<int> d;
        d.push_back(1);
        d.push_front(2);

        for(int i : d){
            cout << i << " ";
        }cout << endl;

        d.pop_front();
        for(int i : d){
            cout << i << " ";
        }cout << endl;



        cout << "print first index element " << d.at(1) << endl;

        cout << "front " << d.front()<< endl;
        cout << "back " << d.back() << endl;

        cout << "Empty or not " << d.empty() << endl;

        cout<<"before erase "<<d.size()<<endl;
        d.erase(d.begin(),d.begin()+1);
        cout<<"after erase "<<d.size()<<endl;

        for(int i : d){
            cout << i << " ";
        }cout << endl;




        // List STL

        list<int> l;

        list<int> n(5,100);
        for(int i:n ){
            cout<<i<<" ";
        }cout<<endl;


        l.push_back(1);
        l.push_front(2);

        for(int i:l ){
            cout<<i<<" ";
        }cout<<endl;

        l.erase(l.begin());
        cout<<"After erase"<<endl;
        for(int i:l){
            cout<<i<<" ";
        }cout<<endl;

        cout<<"size of list "<<l.size()<<endl;




        // Stack STL

        stack<string> s;

        s.push("ravi");
        s.push("sonu");
        s.push("hitesh");

        cout<<"Top element "<<s.top()<<endl;
        s.pop();

        cout<<"Top element "<<s.top()<<endl;

        cout<<"size of stack "<<s.size()<<endl;

        cout<<"Empty or not " <<s.empty()<<endl;




         // Queue STL

         queue<string> q;

         q.push("ravi");
         q.push("sonu");
         q.push("hitesh");

         cout<<"size before pop "<<q.size()<<endl;

         cout<<"First element "<<q.front()<<endl;
         q.pop();

         cout<<"First element "<<q.front()<<endl;

         cout<<"size after pop "<<q.size()<<endl;




        // priority Queue

        //max heap
        priority_queue<int> maxi;

        //min heap
        priority_queue<int ,vector<int>, greater<int> >  mini;

        maxi.push(1);
        maxi.push(3);
        maxi.push(2);
        maxi.push(0);

        int n = maxi.size();
        for(int i=0; i<n; i++){
            cout<<maxi.top()<<" ";
            maxi.pop();
        }cout<<endl;


        mini.push(5);
        mini.push(1);
        mini.push(0);
        mini.push(4);
        mini.push(3);

        int m = mini.size();
        for(int i=0; i<m; i++){
            cout<<mini.top()<<" ";
            mini.pop();
        }cout<<endl;

        cout<<"IsEmpty or not "<<mini.empty()<<endl;



        // SET STL

        // A set is a data structure that stores unique elements of the same type in a sorted order
        // Implementation with the help of BST
        // We can't modified it


        set<int> s;

        s.insert(5);
        s.insert(1);
        s.insert(6);
        s.insert(0);
        s.insert(5);
        s.insert(1);
        s.insert(6);
        s.insert(0);
        s.insert(5);
        s.insert(1);
        s.insert(6);
        s.insert(0);

        for(int i: s){
            cout<<i<<" ";
        }cout<<endl;

        s.erase(s.begin());

        for(int i: s){
            cout<<i<<" ";
        }cout<<endl;

        cout<<"Count "<< s.count(5)<<endl;
        cout<<"Count "<< s.count(15)<<endl;

        set<int>::iterator itr = s.find(5);

        for(auto it=itr; it!=s.end(); it++){
            cout<<*it<" ";
        }cout<<endl;




        // Map STL

        map<int,string> m;

        m[1] = "ravi";
        m[2] = "iphone";
        m[13] = "malviya";

        m.insert({5,"bheem"});

        cout<<"before erase "<<endl;

        for(auto i:m){
            cout<<i.first<<" "<<i.second<<endl;
        }

        cout<<"finding 13-> "<<m.count(13)<<endl;

        m.erase(13);
        cout<<"after erase "<<endl;

        for(auto i:m){
            cout<<i.first<<" "<<i.second<<endl;
        }

        auto it = m.find(5);

        for(auto i=it;i!=m.end();i++){
            cout<<(*i).first<<endl;
        }

    */

    // Algorithm STL

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6 -> "<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"lower bound -> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    cout<<"upper bound -> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=5;
    int b=10;

    cout<<"Max -> "<<max(a,b);
    cout<<endl<<"Min -> "<<min(a,b);

    swap(a,b);
    cout<<endl<<"a-> "<<a<<endl;

    string s = "abcd";
    reverse(s.begin(),s.end());
    cout<<"string -> "<<s<<endl;


    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;





    return 0;
}