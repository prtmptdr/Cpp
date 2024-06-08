#include <iostream>
using namespace std;
class student{
public:
~student(){
cout<<"destructor call";
}
};
int main(){
    student s1;
}