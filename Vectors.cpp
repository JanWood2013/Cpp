#include<iostream>
#include<vector>
//this file is just an experiment
using namespace std;

int main(){

    //creating the vectors
    vector<int> v = {1, 2, 3};
    vector<int> v2 = {1, 2, 3};

    //adding and removing elements from the vector
    v.emplace_back(10);
    v.erase(v.begin());
    cout<<v.size()<<" --size"<<endl;
    
    int sum = 0;

    //sum of all the elements in the vector
    for (int y : v2){
        sum +=y;     
    }
    //printing the sum of the elements in the vector
    cout<< "Sum: " << sum << endl;

    //printing the vector
    for (int x : v){
        cout<< x <<"testvonly" << endl;
    }

    //multiplication of two vectors
    for ( int i = 0; i < v.size(); ++i){
        cout << v[i]*v2[i] << endl;
    }
}