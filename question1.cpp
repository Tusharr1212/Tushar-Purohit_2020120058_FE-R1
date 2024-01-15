#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
unordered_set<int>distinctElements;
int n;

cout<<"enter the number of elements";
cin>>n;

cout<<"enter the elements";
for(int i=0;i<n;i++){
    int element;
    cin>>elements;
    distinctElements.insert(element);
}
cout<<distinctElements.size()<<", [";
for(int element:distinctElements){
    cout<<element<<",";
}
cout<<"]";

}