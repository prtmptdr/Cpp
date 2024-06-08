 # include <iostream>
using namespace std;
// int main(){
// std::cout<<"hello pritam";
// int a,b,c;
// std::cin>>a>>b;
// c=a+b;
// std::cout<<c;
//  return 0;   
// }
// #include <iostream>
// #include "prtm.h"
// using namespace std;
// int main(){
// bhopal::a=100;
// bhopal::b=200;
// cout<<bhopal::a<<endl<<bhopal::b<<endl;
// return 0;
// }



// #include<stdio.h>
// int main(){
// printf("hellow prtm");
// return 0;
// }



// int x;
// int y;
// int z;
// cout<<"pls enter 2 nos"<<endl;
// cin>>x>>y;
// z=x+y;
// cout<< "the sum of" <<x<< "and" <<y<< "=" <<z ;
// return 0;
// }




// class student{
// int roll;
// string name;
// string email;
// string address;
// public:
// void setter(int a, string b, string c,string d){
//     roll =a;
//     name =b;
//     email =c;
//     address =d;
// }
// void getter(){
//     cout<<roll<<endl<<name<<endl<<email<<endl<<address;
// }

// };

// int main(){
// student prtm;
// // prtm.setter(2004, "pritam","patidarpritam600@gmail.com","khelagaon");
// // prtm.getter();
// int x;
// string y;
// string z;
// string p;
// cout<<"pls enter roll,name,email,address "<<endl;
// cin>>x>>y>>z;
// getline(cin,p);
// prtm.setter(x,y,z,p);
// prtm.getter();

// }





// class coaching{
// string name;
// int mo;
// string address;
// public:
// void setter(string a,int b,string c){
// name = a;
// mo = b;
// address =c;
// }
// void getter(){
// cout<<name<<endl<<mo<<endl<<address<<endl;
// }
// };
// int main(){
// coaching c;
// string x;
// int y;
// string z;
// cout<<"pls mobile, name,address"<<endl;
// cin>>y;
// cin.ignore();
// getline(cin,x);
// getline(cin,z);
// c.setter(x,y,z);
// cout<<endl<<"my data"<<endl;
// c.getter();
// }



class computer{
int ram;
string colour;
string manufacturing_name;
public:
void setter(int a,string b,string c){
ram = a;
colour = b;
manufacturing_name =c;
}
void getter(){
cout<<ram<<endl<<colour<<endl<<manufacturing_name<<endl;
}
};
int main(){
 computer c;
 int x;
 string y;
 string z;
 cout<<"pls enter ram,colour,manufacturing_name"<<endl;
 cin>>x;
 cin.ignore();
getline(cin,y);
getline(cin,z);
c.setter(x,y,z);
cout<<endl<<"my data"<<endl;
c.getter();
}