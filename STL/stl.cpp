#include<bits/stdc++.h>

using namespace std;

void pairExplaination() {
   pair<int ,int> p = {1,2};
   cout << p.first << " " <<p.second;   // 1 ,2
   pair<int ,pair< int ,int> >p1  = {1, {2,3}} ;
   cout << p1.first << " " << p1.second.first << " " <<p1.second.second;  // 1 ,2,3
   pair<int ,int>arr[] = {{1,2},{3,5},{2,4}};
   cout<<arr[1].first<<" "<<arr[1].second;     // 3, 5
}

void vectorExplaination() {
   vector<int>v;
   v.push_back(1);  // {1}
   v.emplace_back(2);  // {1,2}  it's faster than pushback

   vector<pair<int,int>>v1;
   v1.push_back({1,2});   // {{1,2}}
   v1.emplace_back(1,2);  // {{1,2}, {1,2}}

   vector<int>v2(3 , 10); //{10,10,10}

   vector<int>v3(v2);     //v3-> {10,10,10}
   v3.push_back(1);       //v3-> {10,10,10,1}
   
   vector<int>::iterator it = v.begin();    //iterator basically point the address of the value  // v={1,2,3}
   it++;  
   cout<< *(it)<<" ";       // {1,2,3}

   vector<int>::iterator it = v.end();
   it--;
   cout<<*(it)<<""; //{1,2,3}

   cout<<v[0];     // {1}
   cout<<v.back();  //{3}

   for (vector<int>::iterator it = v.begin(); it != v.end();it++){
      cout<< *(it) <<" ";
   }
   for( auto  it = v.begin(); it != v.end();it++)
   {
      cout<< *(it) <<" ";
   }
   for(auto it : v)
   {
      cout<< it <<" ";
   }

   vector<int> v = {1,2,3,4};
   v.erase(v.begin()+1);      // {1,3,4}
   v ={1,3,4,5,6};    //remove{4,5}
   v.erase(v.begin()+2,v.begin()+4);  // {1,3,6}

   vector<int>v(2,10);  // {10,10}
   v.insert(v.begin(),300); //{300,10,10}
   v.insert(v.begin()+1 ,2 ,20);  //{300,20,20,10,10}

   v.size();  //5
   vector<int>v1(5,4);
   // v1.swap(v);

   v.pop_back();   //remove last element
   v.clear();      // clear whole vector
   v.empty();      // check weather vector is emtpy or not -> boolean value
}

void listExplaination() {
   list<int>ls;

   ls.push_back(2); //{2}
   ls.emplace_back(4); //{2,4}

   ls.push_front(5); //{5,2,4}
   ls.emplace_front(3); //{3,5,2,4}
   //rest of all function same as vector
   //begin ,end,clear ,size,swap [insert ->it is costly]
}

void dequeExplaination() {
    //same as list 
    deque<int>dq;
    dq.push_back(1);
     //rest of all functions same as list
}

void stackExplaination() {
   //LIFO -> last in first out
   stack<int>st;
   st.push(1); //{1}
   st.push(2);//{2,1}
   st.push(5);//{5,2,1}
   st.push(6); //{6,5,2,1}

   st.top(); // 6
   st.pop(); //{5,2,1}
   st.size(); //3

   stack<int>st1,st2;
   st1.swap(st2);
}

void queueExplanation() {
   //FIFO-> first in first out
   queue<int> q;
   q.push(1);   //{1}
   q.push(2);  //{1,2}
   q.emplace(4); //{1,2,4}

   q.back() += 5; // it make last element is 9
   q.pop(); //remove 1
   q.front(); //gives 2
   q.back();  //gives 4
}

void priorityQueueExplaination() {
   //larget/max value stays at top
   priority_queue<int>pq;
   pq.push(2); //{2}
   pq.push(3); //{3,2}
   pq.push(1); //{3,2,1}

   pq.top(); //3
   pq.pop();  // remove 3


   /*Minimum heap*/
   priority_queue<int,vector<int>,greater<int>>pq;
   pq.push(4); //{4}
   pq.push(5);  //{4,5}
   pq.push(2); //{2,4,5}

   pq.top(); // 2
}



 int main() {
   pairExplaination();
   vectorExplaination();
    return 0 ; 
 }