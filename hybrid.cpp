#include<iostream>
using namespace std;
class grand_father{
protected:
string eye_colour;
};
class father:public grand_father{
protected:
string skin_colour;

};
class son:public father{
string hobby;
public:
son(string eye_colour , string skin_colour,string hobby){
this->eye_colour=eye_colour;this->skin_colour=skin_colour;this->hobby=hobby;
cout<<eye_colour<<endl<<skin_colour<<endl<<hobby<<endl;
    
 }
};
class daughter:public father{
string hobby;
public:
daughter(string eye_colour , string skin_colour,string hobby){
 this->eye_colour=eye_colour;this->skin_colour=skin_colour;this->hobby=hobby;
cout<<eye_colour<<endl<<skin_colour<<endl<<hobby<<endl;
}
};
int main(){
son s1("black","white","cricket");
daughter d1("black","white","study");
}