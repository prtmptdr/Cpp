# include <iostream>
using namespace std;
class father{
public:
virtual void add(int x,int y)=0;
void play(){
cout<<"playing music"<<endl;
}
};
class child:public father{
public:
void add(int x, int y){
cout<<x+y<<endl;
}
};
int main(){
child c1;
c1.add(10,20);
c1.play();
}
