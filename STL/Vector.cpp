#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // Declaring a vector
    vector<int> vector1;

    cout<<"Initialising a vector with 10 elements ranging from from 0 to 9"<<endl;
    for(int i=0;i<10;i++){
        vector1.push_back(i);
    }
    //Check Vector size
    cout<<"Vector size = "<<vector1.size()<<endl;

    // Change value at any index 
    cout<<"Changing element at 6th index to 50"<<endl;
    vector1[5]=50;

    // Print Vectors
    cout<<"Printing Vector"<<endl;
    for(auto i = vector1.begin();i!=vector1.end();i++){
        cout<<*i<<"\t";
    }
    cout<<endl;

    // Access values in vector with at() 
    cout<<"Vector element at position 1 using at() method="<<vector1.at(1)<< endl;

    // Access values in vector with [] operator
    cout << "which is same as accessing using [] operator "<<vector1[1]<<endl;
    
    // Use insert() to add value at any specific index
    cout<<"Inseting 25 to 2nd position"<<endl;
    vector1.insert(vector1.begin()+2,25);
    
    // Calculate new vector size
    cout<<"New vector size = "<<vector1.size()<<endl;
    vector1.pop_back();

    // Calculate new vector size
    cout<<"New vector size = "<<vector1.size()<<endl;

    // Print vector using index
    for(int i=0;i<vector1.size();i++){
        cout<<vector1[i]<<"\t";
    }
    cout<<endl;

    // Sorting a vector with STL algorithm
    cout<<"Sorting vector"<<endl;
    sort(vector1.begin(),vector1.end(),greater<int>());
    for(auto i = vector1.begin();i!=vector1.end();i++){
        cout<<*i<<"\t";
    }
    cout << endl;

}