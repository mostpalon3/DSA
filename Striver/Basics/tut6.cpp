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

	// Accessing the elements of a vector

	// Way 1
	cout<<v[0]<<" "<<v.at(0)<<endl;

	// Last element of a vector
	cout<<v.back()<<endl;


    //ITERATORS
    vector<int>::iterator it = v.begin();//points to the memory the first element
    it++;
    cout << *(it) << " "; //* access the value at memory

    it = it +2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();//points to the point last after the last element

    vector<int>::iterator it = v.rend();//before the first element

    vector<int>::iterator it = v.rbegin(); //points to the last element\

    cout << v.back() ;//element that is at last

//LOOPING
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
    //in vector we needed to insert which is costly here we can directly insert using  emplace_front

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

//O(1) time complexity
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

//O(1) time complexity
void explainQueue(){
	queue<int>q;
	q.push(1);
	q.push(2);
	q.emplace(3);//{1,2,3}

	q.back()+=5;

	cout<<q.back();//8

	cout<<q.front();//1

	q.pop();//{2,3}

	// size, swap and empty are same as stack
}

//max heap
void priorityQueue(){
	priority_queue<int>pq;

	pq.push(1);
	pq.push(0);
	pq.emplace(3);

	cout<<pq.top();//3 [3,1,0]
	pq.pop();

	// size, swap and empty function are same as others 

	// Minimum heap to store minimum ele at top
	priority_queue<int,vector<int>,greater<int>>pq;
	pq.push(5);  // {5}
	pq.push(2);  // {2,5}
	pq.emplace(8); // {2,5,8}

	cout<<pq.top();

	// Push and Pop happens in logn time
	// Top operation can be performed in O(1)
}


void explainSet(){
	set<int>st;
	st.insert(1); //{1}
	st.emplace(2); // {1,2}
	st.insert(2); // {1,2}
	st.insert(3); // {1,2,3}

//Sorted and unique elements
	// Functionality of insert in a vector can be used above
	// But it only increases the effciency

	// begin(),end(),rbegin(),rend(), size() are same as those above

	// {1,2,3,4,5}
	auto it=st.find(3); // returns an iterator pointing to 3

	auto it=st.find(6); // returns an iterator after 5 st.end() if not found

    auto it=st.lower_bound(2); // returns an iterator pointing to 2
    auto it=st.upper_bound(4); // returns an iterator pointing to 5 st.end() if not found   
    // {1,4,5}
    st.erase(5); // erases the element 5 {1,4} takes logn time

    int cnt=st.count(4); // returns 1 if 4 is present else 0

    auto it=st.find(3);
    st.erase(it);

    // {1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2); // {1,4,5} erases 2 and 3 takes logn time because it dont erase the last element
//[first, last) last is not included
    auto it=st.lower_bound(2);// it points to 2
    auto it=st.upper_bound(4);

    //logn time complexity
}


void explainMultiSet(){
	// Everything is same as set just the fact that it stores duplicates also
    //sorted order

	multiset<int>ms;

	ms.insert(1); // {1}
	ms.insert(1); // {1,1}
	ms.insert(1); // {1,1,1}

	ms.erase(1); // All 1's are erased

	int cnt=ms.count(1);

	// Only a single 1 is erased
	ms.erase(ms.find(1));

	ms.erase(ms.find(1),ms.find(1)+2);

	// rest all functions are same as set
}

void explainUSet(){
	unordered_set<int>st;

//unordered set is not sorted
//O(1) time complexity
// unique elements
	// All the operations take O(1) time
	// But lower_bound and upper_bound fn does not work

	// In worst case it goes upto O(n)
}

void explainMap(){
	map<int,int>mpp;//key value pair
    //unique keys in sorted order

	map<int,pair<int,int>>mpp;

	map<pair<int,int>,int>mpp;

	mpp[1]=2;

	mpp.emplace({3,1});

	mpp.insert({2,4});

	mpp[{2,3}]=10;

	for(auto it:mpp){
		cout<<it.first<<" "<<it.second<<endl;//key and value respectively
	}

	cout<<mpp[1];
	cout<<mpp[3];

	auto it=mpp.find(3);
	cout<<*(it).second;//value of 3

	auto it=mpp.find(5);

//for key 
	auto it=mpp.lower_bound(2);//it points to 2, if not found then points to next greater element
	auto it=mpp.upper_bound(4);// it points to 5 or in general next greater element, if not found then points to next greater element
    //logn time complexity
}

void explainMultiMap(){
	// similar to map except that u can store duplicate keys
	// in sorted order
    //only mpp[key] cant be used
    //logn time complexity
}

void explainUnorderedSet(){
	// Similar to set except that it does not store elements
	// in sorted order
    //O(1) time complexity
    //worse case O(n)
}

bool comp(pair<int,int>p1,pair<int,int>p2){
	// sorting the 2nd ele in asc order
	if(p1.second < p2.second){
		return true;
	}
	if(p1.second > p2.second){
		return false;
	}

    // if 2nd ele is same then this case will be checked
    // and we check whether the first ele is sorted in
    // desc order then return true else return false
	if(p1.first > p2.first){
		return true;
	}
	return false;
}

void explainAlgo(){
	sort(a,a+n);
	sort(v.begin(),v.end());

	sort(a+2,a+4);

	// sort them in desc order
	sort(a,a+n,greater<int>());

	pair<int,int>a[]={{1,2},{2,1},{4,1}};

	// sort it according to the 2nd ele if 2nd ele is same
	// then sort it acc to 1st ele in desc order

	sort(a,a+n,comp);//comp is a custom comparator self defined bool function

	int num=7;

	// Finds number of 1's in binary notation
	// Finds number of set bits in binary form
	int cnt=__builtin_popcount();

	long long n=9876543210
	int cnt=__builtin_popcountll();

	string s="213";
    //you should sort the string first
    sort(s.begin(),s.end());
	do{
		cout<<s<<endl;
	}while(next_permutation(s.begin(),s.end()));

	int maxi=*max_element(a,a+n);
	int mini=*min_element(a,a+n);
//*address of the element=value of the element
	int sum=0;
	accumulate(a,a+3,sum);
}

int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
 
    explainVector();
    return 0;
}