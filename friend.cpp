# include <iostream>
using namespace std;
 class student{
string name, email, address;
public:
void setter(string name, string email,string address){
    this-> name=name;  this-> email=email;  this-> address=address;
}
friend void full_address(student k);
 }; 
void full_address(student k){
cout<<k.name<<endl<<k.email<<endl<<k.address<<endl;
}
int main(){
    
student s1;
s1.setter("prtm ptdr","patidatpritam600@gmail.com","bhopal city");
full_address(s1);
}

