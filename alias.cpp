# include <iostream>
using namespace std;
int main(){
// int x=100;
// int &y =x;
// y =2000;
// cout<<x<<endl<<y<<endl;
// }

   







// void reference(int x,int y){
// x=100;
// y=200;
// cout<<x<<endl<<y<<endl;

// }
// int main(){
// int a,b;
// cout<<"pls enter 2 nos\n";
// cin>>a>>b;
// cout<<a<<endl<<b<<endl;
// reference(a,b);
// cout<<a<<endl<<b<<endl;
// }






// int arr[]={10,20,30,40};
// for(int i=0;i<4;i++)
// cout<<arr[i]<<endl;
// }







// class student{
// string name , id , email;
// public:
// void setter(string name, string id, string email){
// this-> name=name;
// this-> id=id;
// this -> email=email;
// }
// void getter(){
//     cout<<name<<endl<<id<<endl<<email<<endl;

// }
// void study(string subject){
//     cout<<"studing"<<endl<<subject<<endl;

// }
// };
// int main(){
// student aman,ajay;
// cout<<&aman<<endl<<&ajay<<endl;
// string name , id , email ,subject;
// cout<<"enter name,id,email"<<endl;
// getline(cin,name);
// getline(cin,id);
// getline(cin,email);
// cout<<name<<endl<<id<<endl<<email<<endl;
// cout<<"enter subject name\n";
// getline(cin,subject);
// aman.setter(name,id,email);
// aman.getter();
// aman.study(subject);

// }




// int x=100;
// int y =0100;
// int z=0x100;
// cout<<x<<endl<<y<<endl<<z<<endl;

// }


// # include <iostream>
// using namespace std;
// class car{
// static string average , price, company, model;
// public:

// static void setter(string av, string pr, string com, string mo){
// average=av;price=pr;company=com;model=mo;
// }
// static void getter(){
//     cout<< average<<endl<<price<<endl<<company<<endl<<model<<endl;
// }
// };
// string car:: average;
// string car :: price;
// string car:: company;
// string car :: model;
// int main(){
// car::setter("12","10000000","british mototr vehicel","seven serise");
// car ::getter();
// }



// int arr[]={10 , 20 , 50 ,3 ,2};
// int *p=arr;
// for(int i=0; i<5;i++)
// cout<<*(p+i)<<endl;
// }




int arr[]={10,50,100,200};
int flag=0;
// flag=flag+arr[i];
// int average=flag  ;
// cout<<average;
for(int i=0;i<4;i++){
 if(i==1 || i==4)
 continue;
flag = flag+arr[i];
}
int average=flag ;
cout<<average/2;
}
