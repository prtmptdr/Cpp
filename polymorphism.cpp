#include<iostream>
using namespace std;
class number{
public:
virtual void  add(int x, int y){
cout <<x+y<<endl<<"number class"<<endl;
}

};
class integer: public number{
public:
// void add(int x, int y, int z){
// cout<<(x+y+z)<<endl;
// }
void add(int x, int y){
cout <<x+y<<endl<<"integer child class"<<endl;
}
};
int main(){
integer i1;
// i1.add(10,20);
// i1.add(10,20);
number*p=&i1;
p->add(100,200);
i1.add(100,300);
}