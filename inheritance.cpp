# include <iostream>
using namespace std;      // {single level inheritance}

// class father{
//     protected:
//     string bg,hair_colour;
//     };
// class child:public father{
//     string hobby;
//     public:
//     child(string bg,string hair_colour,string hobby){
//         this->bg=bg; this-> hair_colour=hair_colour;this->hobby=hobby;
// cout<<bg<<endl<<hair_colour<<endl<<hobby<<endl;
//     }
// };
// int main(){
//     child c1("0+ve","brown","gilli danda");
// }
  







// class grand_father{  
//  protected:
// string skin_colour;
// };
// class father:public grand_father{
//     protected:
//  string bg,hair_colour;
// };
// class child:public father{
//     string hobby;
//     public:
//     child( string skin_colour ,string bg,string hair_colour,string hobby){
//        this-> skin_colour=skin_colour; this->bg=bg; this-> hair_colour=hair_colour;this->hobby=hobby;
// cout<<skin_colour<<endl<<bg<<endl<<hair_colour<<endl<<hobby<<endl;
// }
// };
// int main(){
//     child c1("kaluvo","0+ve","brown","gilli danda");
// }




// class father{
//     protected:
//     string bg,hair_colour;
//     };
// class mother: public father{
//     protected:
//     string height;

// };
//  class child:public mother{
//      string hobby;
//  public:
//  child(string bg,string hair_colour,string height ,string hobby){
//  this->bg=bg; this-> hair_colour=hair_colour;this->height=height; this->hobby=hobby; 
//  cout<<bg<<endl<<hair_colour<<endl<<height<<endl<<hobby<<endl;
//  }
//  };
//  int main(){
// child c1("0+ve","brown","5.6cm","gilli danda");
//  }



class father{
    protected:
    string bg,hair_colour;
};
class son:public father{
    string hobby;
public:
    son(string bg,string hair_colour,string hobby){
    this->bg=bg;this->hair_colour=hair_colour;this->hobby=hobby;
    cout<<bg<<endl<<hair_colour<<endl<<hobby<<endl;
    }
    };

class doughter:public father{
    string hobby;
    public:
    doughter(string bg,string hair_colour,string hobby){
    this->bg=bg;this->hair_colour=hair_colour;this->hobby=hobby;
    cout<<bg<<endl<<hair_colour<<endl<<hobby<<endl;
    }
    };
    int main(){
    son s1("0+ve","brown","gilli danda");
    doughter d1("0+ve","brown","study");
    }
    