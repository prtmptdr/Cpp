// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
// fstream fs;
// fs.open("file.txt",ios::out);
// fs<<"hellow file handling";
// fs.close();
// }



// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
// fstream fs;
// fs.open("file.txt",ios::app);
// // for(char c=fs.get();!fs.eof();c=fs.get())
// // cout<<c;
// fs<<"prtm ptdr";
// fs.close();
// }




#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream fs;
int result=remove("file.txt");
if(result==0)
cout<<"file deleted";
}