#include <bits/stdc++.h>
using namespace std;

void pairDetails()
{
    pair<int, int> pair1 = {1, 2}; // dataType can be anything
    cout << "pair first element: " << pair1.first << " "
         << "pair second element : " << pair1.second << endl;

    pair<int, pair<int, bool>> pair2 = {40, {10, false}};
    cout << "pair first element: " << pair2.first << " "
         << "pair second first element : " << pair2.second.first << " "
         << "pair second second element : " << pair2.second.second << endl;

    pair<int, int> pairArray[] = {{1, 2},
                                  {3, 4},
                                  {5, 6}};

    cout << pairArray[2].first << endl;
}
void vectorDetails()
{
    cout << "vector is kind of container which stores same type of elements as the array dose, can increase size as we want" << endl;
    vector<int> vector1;     // {}
    vector1.push_back(2);    //{2}
    vector1.emplace_back(3); //{2,3}

    vector<pair<int, int>> vector2;
    vector2.push_back({1, 2});
    vector2.emplace_back(1, 2); // not need {}

    vector<int> vector3(5, 100); // {100, 100, 100, 100, 100} also can increases size
    vector<int> vector4(5);      // {0, 0, 0, 0, 0}
    vector4.emplace_back(20);    // {0, 0, 0, 0, 0, 20}

    vector<int> vector5(vector3);

    cout << vector3[0] << endl;    // 100
    cout << vector1.at(0) << endl; // 2
    cout << vector4.at(5) << endl; // 20

    // points to the memory address and return element address

    vector<int>::iterator it = vector3.begin();           // first element
    vector<int>::iterator it1 = vector3.end();            // last + 1 element
    vector<int>::reverse_iterator it2 = vector4.rend();   // first - 1 element  it2++ = first - 2 element
    vector<int>::reverse_iterator it3 = vector3.rbegin(); // last element
    it++;                                                 // it = 2 + it;
    cout << "element: " << *it << endl;                   // *(it)

    cout << "return last element: " << vector1.back() << endl; // return last element

    vector<int> vector6 = {1,
                           2,
                           3,
                           5};
    vector6.emplace_back(10);

    for (vector<int>::iterator addIt = vector6.begin(); addIt != vector6.end(); addIt++)
    {
        cout << "element is : " << *addIt << endl;
    }
    for (auto addIt = vector6.begin(); addIt != vector6.end(); addIt++)
    {
        cout << "element is : " << *addIt << endl;
    }
    // for each loop
    for (int it : vector6) // for (auto it : vector6)
    {
        cout << "element is : " << it << endl;
    }

    // erase element
    vector6.erase(vector6.begin(), vector6.begin() + 2); // it will not include last element

    for (int it : vector6) // for (auto it : vector6)
    {
        cout << "element is : " << it << endl;
    }

    // insert element

    vector6.insert(vector6.begin(), 200);
    vector6.insert(vector6.begin() + 1, 2, 300); // two time 300
    cout << "insert" << endl;
    for (int it : vector6) // for (auto it : vector6)
    {
        cout << "element is : " << it << endl;
    }

    // element inside of vector
    cout << "size of vector: " << vector6.size() << endl;

    // pop_back
    vector6.pop_back();
    cout << "after pop an element:" << endl;
    for (int it : vector6) // for (auto it : vector6)
    {
        cout << "element is : " << it << endl;
    }
    vector3.clear();                                          // clear vector
    cout << "is vector have an element: " << vector3.empty(); // true and false
};
void listDetails()
{
    list<int> li; // {}
    li.push_back(4);
    li.push_front(10); // in vector we need to use insert for add en element at front
    li.emplace_back(20);
    li.emplace_front(50);
    li.pop_back();
    li.pop_front();
    for (int it : li)
    {
        cout << "list element: " << it << endl;
    }
    for (list<int>::iterator addIt = li.begin(); addIt != li.end(); addIt++)
    {
        cout << "element is : " << *addIt << endl;
    }
}
void dequeDetails()
{
    deque<int> deQue = {1, 2, 3};
    deQue.push_back(4);
    deQue.push_front(10); // in vector we need to use insert for add en element at front
    deQue.emplace_back(20);
    deQue.emplace_front(50);
    deQue.pop_back();
    deQue.pop_front();
    cout << "list:::: " << deQue[1] << endl;
    for (auto it : deQue)
    {
        cout << "list element: " << it << endl;
    }
};
void stackDetails() // LIFO O(1) constant time
{
    stack<int> st;
    st.push(12);
    st.push(10);
    st.push(8);
    st.push(6);
    st.emplace(4);
    cout << "last added element: " << st.top() << endl;
    st.pop();
    cout << "after pop, last element: " << st.top() << endl;
    cout << "size of stack: " << st.size() << endl;
    cout << "stack is empty?: " << st.empty() << endl;
    stack<int> st2;
    st2.swap(st);
    cout << "stack st is empty?: " << st.empty() << endl;

    // cout << "after swap st last added element: " << st.top() << endl;
    cout << "size of st: " << st.size() << endl;
    cout << "size of st2: " << st2.size() << endl;
}
void queueDetails() // FIFO
{
    queue<int> qu;
    qu.push(8);
    qu.push(4);
    qu.push(2);
    qu.emplace(1);
    cout << "queue last element: " << qu.back() + 12 << endl;
    cout << "queue last element: " << qu.back() << endl;
    cout << "queue first element: " << qu.front() << endl;
    qu.pop();
    cout << "queue first element: " << qu.front() << endl;
}
void priorityQueueDetails()
{
    priority_queue<int> pq;
    pq.push(2);    //{2}
    pq.push(5);    //{5,2}
    pq.emplace(1); //{5,2,1}
    cout << "priority queue largest element: " << pq.top() << endl;
    pq.pop();
    cout << "priority queue largest element: " << pq.top() << endl;

    // Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(2);    //{2}
    pq2.push(5);    //{2,5}
    pq2.emplace(1); //{1,2,5}
    cout << "priority queue small element: " << pq2.top() << endl;
    pq2.pop();
    cout << "priority queue small element: " << pq2.top() << endl;
};
void setDetails()
{
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2}
    st.emplace(8); // {1, 2, 8}
    st.emplace(5); // {1, 2, 5, 8}
    auto it = st.find(8);
    auto it2 = st.find(4);
    auto it3 = st.end();
    cout << *--it << endl;        // 5
    cout << *it2 << endl;         // 4
    cout << *it3 << endl;         // 4
    cout << st.count(10) << endl; // 0
    cout << st.count(2) << endl;  // 1
};
void multiSetDetails()
{
    multiset<int> mst;
    mst.insert(2);          // {2}
    mst.insert(2);          // {2, 2}
    mst.insert(5);          // {2, 2, 5}
    mst.emplace(3);         // {2, 2 , 3, 5}
    mst.erase(2);           // erase all 2
    mst.erase(mst.find(3)); // only one 3 erased
    mst.erase(mst.find(2), mst.find(2)++);
    for (int a : mst)
    {
        cout << a << endl;
    }
};
void unorderedSetDetails()
{
    unordered_set<int> uost;
    uost.insert(12); //{12}
    uost.insert(12); //{12}
    uost.insert(5);  //{12, 5}
    uost.insert(8);  //{12, 5, 8}
    uost.insert(8);  //{12, 5, 8}
    // lower bound and upper bound not works
};
void mapDetails()
{
    map<int, int> mpp; // key and value is any data type
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;
    mpp3.insert({{10, 10}, 5});
    mpp2.insert({5, {10, 10}});
    cout << mpp2[5].first << mpp2[5].second << endl;

    mpp[2] = 3;
    cout << mpp[2] << endl;
    mpp.emplace(1, 4);
    mpp.insert({4, 5});
    cout << mpp[1] << endl;

    for (auto i : mpp)
    {
        cout << "key: " << i.first << " "
             << "value: " << i.second << endl;
    }
};
void multiMapDetails() {};
void unorderedMapDetails() {};
// bool comp()
// {
//     return true;
// };
// void extraDetails()
// {
//     sort(a, a + n);               // first element and and last element is not included
//     sort(a, a + n, greater<int>); // des order
//     sort(a, a + n, comp);         // comp return boolean value

//     int num = 7;
//     int cnt = __builtin_popcount()
// };
int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
} 

int main()
{
    cout << "STL" << endl;
    // pairDetails();
    // vectorDetails();
    // listDetails();
    // dequeDetails();
    // stackDetails(); // O(1) time complexity
    // queueDetails(); // O(1) time complexity
    // priorityQueueDetails(); // push lon n || top O(1) || pop log n
    // setDetails(); // store unique and sorted log n
    // multiSetDetails(); // store sorted multiple same key
    // unorderedSetDetails(); // only store unique element, not in sorted order O(1)
    // mapDetails(); // unique keys and sorted order
    // multiMapDetails();     // store sorted multiple same key
    // unorderedMapDetails(); // only store unique element, not in sorted order O(1)
    int n = 2;
    // cout << countSetBits(n);
    return 0;
}
