#include <iostream>
using namespace std;
class student{
string name,email,address;
public:
student(string name,string email,string address){
 this->name=name;this->email=email; this->address=address;
 cout<<name<<endl<<email<<endl<<address<<endl;
   
}
};
int main(){
student s1("prtm ptdr","patidarpritam600@gmail.com","SP COLONY BHOPAL");
}