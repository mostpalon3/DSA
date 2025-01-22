//C++ STL(standard template library)
#include <bits/stdc++.h>
using namespace std;

// Pairs
void explainPairs(){
    pair<int,int> p = {1,3};
    cout<<p.first<<" "<<p.second;

    pair<int,pair<int,int>> q = {1,{3,4}};

    cout << q.first << " " <<q.second.second;

    pair <int,int> arr[] = {{1,2}, {3,4}, {5,6}};

    cout << arr[1].second;
}

//vectors - singly linked list
void explainVector(){
    vector<int> v;//creates an empty container

    v.push_back(1);
    v.emplace_back(2);//faster and dynamic
    

    vector<pair<int, int> >vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> j(5, 100);//5 instances of 100

    vector<int> k(5);//5 instances of 0 or any garbage value
//vector is dynamic in nature and You can always increase its size 
    vector<int> v1(5,20);
    vector<int> v2(v1);//copy of v1

    cout<<v[0]<<v.at(0);

    //iterator
    vector<int>::iterator it = v.begin();//points to the memory the first element
    it++;
    cout << *(it) << " "; //* access the value at memory

    it = it +2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();//points to the point last after the last element

    vector<int>::iterator it = v.rend();//before the first element

    vector<int>::iterator it = v.rbegin(); //points to the last element\

    cout << v.back() ;//element that is at last

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    //auto means auto assignation of the data type 
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    for (auto it : v )
    {
        cout << it << " ";
    }

    //{10, 20, 12, 23}
    v.erase(v.begin()+1);

    //{10, 20, 12 ,23 ,35}
    v.erase(v.begin() + 2, v.begin() + 4);//(begin, end)//here end should point to the last element + 1;

    //Insert function

    vector<int>v(2,100);//{100,100}
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin() + 1, 2,10 );//{300,10,10,100,100}

    vector<int> copy(2,50); //{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}
    
    //{10.20}
    cout <<v.size();


    v.pop_back();//{10}

    v1.swap(v2);//swaps the entire vector

    v.clear();//erases entire vector

    cout << v.empty();
}

//Lists-doubly linked list
void explainList(){
    list<int> ls;

    ls.push_back(2);//{2}
    list.emplace_back(4);//{2,4}

    ls.push_front(5);//{5,2,4}

    ls.emplace_front();//{5,2,4}

    //rest functions same as vector
    //begin , end ,rbegin,rend,clear,insert,size,swap


////deqeue

void explainDeque(){
    deque<int>dq;
    dq.push_back(1);//{1}
    dq.emplace_back(2);//{1,2}
    dq.push_front(4);//{4,1,2}
    dq.emplace_front(3);//{3,4,1,2}

    dq.pop_back(); //{3,4,1}
    dq.pop_front();//{4,1}

    dq.back();
    dq.front();
}

void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);//{3,3,2,1}
    st.emplace(5);//{5,3,3,2,1}
//index access not allowed in stack
    cout <<st.top();//5,not st[2]
    st.pop();//{3,3,2,1}

    cout <<st.top();//3

    cout<<st.size();

    cout<<st.empty();

    stack<int> st1,st2;
    st1.swap(st2);
}
}