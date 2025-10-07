#include <bits/stdc++.h>
using namespace std;

class maxHeap{
    public:
        int arr[100];
        int size;

    maxHeap(){
        arr[0]=-1;
        size=0;
    }
    
    void insert(int val){
        size++;
        int index = size;
        arr[index]=val;

        while(index>1){
            int parent = index/2;//here this parent would be for two nodes except the root, for eg 4,5 need 4/2,5/2 = 2, so they share parent , so this will result in binary tree two nodes unde a parent 
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }else{
                return;
            }

        }

    }

    void print(){
        for(int i =1; i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    
    void deleteRoot() {
    if (size == 0) {
        cout << "Heap is empty\n";
        return;
    }

    arr[1] = arr[size]; 
    size--;

    int i = 1;
    while (i <= size) {
        int l = 2 * i;
        int r = 2 * i + 1;
        int largest = i;

        if (l <= size && arr[l] > arr[largest]) {
            largest = l;
        }
        if (r <= size && arr[r] > arr[largest]) {
            largest = r;
        }

        if (largest != i) {
            swap(arr[i], arr[largest]);
            i = largest;
        } else {
            return;
        }
    }
    }   
};

void heapify(int i,int arr[],int size){
    int l = 2*i;
    int r = 2*i+1;

    int largest = i;

    if (l <= size && arr[l] > arr[largest]) {
        largest = l;
    }
    if (r <= size && arr[r] > arr[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(largest,arr,size);
    } else {
        return;
    }
}

void heapSort(int arr[],int n){

    int size=n;
    while(size>1){
        swap(arr[size],arr[1]);
        size--;

        heapify(1,arr,size);
    }
}

int main(){
    maxHeap mh;
    mh.insert(55);
    mh.insert(54);
    mh.insert(53);
    mh.insert(50);
    mh.insert(52);

    mh.print();
    mh.deleteRoot();
    mh.print();


    int n = 5;
    int arr[6] = {-1,2,45,5,389,23};
    for(int i=n/2;i>0;i--){
        heapify(i,arr,n);
    }
    for(int i=1; i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapSort(arr,n);
    for(int i=1; i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //using priority queue

    priority_queue<int> maxHeap;

    maxHeap.push(5);
    maxHeap.push(57);
    maxHeap.push(89);
    maxHeap.push(2);

    for(int i = 0; i<4;i++){
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();
    }
    cout<<endl;

    priority_queue<int,vector<int>, greater<int>> minHeap;

    minHeap.push(5);
    minHeap.push(57);
    minHeap.push(89);
    minHeap.push(2);

    for(int i = 0; i<4;i++){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
    cout<<endl;
    return 0;
}