/*#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream obj1;
    obj1.open("newfile.jpg");
    if(!obj1){cout<<"Error!!!..."<<endl;}
    else{cout<<"Successfully created"<<endl;
    obj1<<"Hello World"<<endl;
    obj1<<"This is OIST"<<endl;
    obj1<<"I T Department"<<endl;
    obj1.close();
    }


    ifstream obj2;
    obj2.open("newfile.jpg");
    if(!obj2){cout<<"Error!!!..."<<endl;}
    else{cout<<"File Opened Successfully"<<endl;
    char data[100];
    while(!obj2.eof()){
        obj2.getline(data,100);
        cout<<data<<endl;
    }
    obj2.close();
    }
}
*/
//create a text file jiska naam user user runtime pr de
/* Enter file name 
Enter data */

// #include <iostream>
// #include <fstream>
// using namespace std;



// int main(){
//     fstream obj1;
//     string name;
//     cout<<"Enter file name:";   getline(cin,name);
//     obj1.open(name,ios::out);
//     if(!obj1){cout<<"Error!!!..."<<endl;}
//     else{cout<<"Successfully created"<<endl;}
//     string data;
//     while(true){
//         cout<<"Enter data:";    cin>>data;
        
//         if (data =="HeLLo"){
//             cout<<"Data send successfully. Terminated..."<<endl;;
//             break;
//         }
//         obj1<<data<<endl;
//     }


//     fstream obj2;
//     obj2.open(name,ios::in);
//     if(!obj2){cout<<"Error!!!..."<<endl;}
//     else{cout<<"File Opened Successfully"<<endl;
//     char data[100];
//     while(!obj2.eof()){/*
//         for(int i =0;i<5;i++){

//         }*/
//         obj2.getline(data,100);
//         cout<<data<<endl;
//     }
//     obj2.close();
//     }
// }


#include <fstream>
#include <iostream>
using namespace std;

class Events {
public:
  string eventName = "New", eventVenue = "Audi";
  int eventFee = 0; // data members of Events
  static int eventId;
  friend istream &operator>>(istream &in, Events &obj);
  Events(){eventId++;};
  void ofile();
};

int Events::eventId = 0;

void Events::ofile() {
}

int main() {

  

  Events Seminar;
  Seminar.eventFee=0;Seminar.eventName="NEw";Seminar.eventVenue="afs";
  Events newEve;
  newEve.eventFee=0;newEve.eventName="NEw";newEve.eventVenue="afs";
  cout<<newEve.eventId<<endl;
  
  ofstream obj1;
    obj1.open("event.txt");
    if (!obj1) {
      cout << "Error!!!..." << endl;
    } else {
      cout << "Successfully created" << endl;
      obj1 << Seminar.eventName << endl;
      obj1 << Seminar.eventVenue << endl;
      obj1 << Seminar.eventFee << endl;
    /* from here we if we dig more into some logics then we might end up resolving the issue of overwriting of data.
     we need to think a lil bit more 
     here the values are provided in code need to resolve this too*/
      obj1 << newEve.eventName << endl;
      obj1 << newEve.eventVenue << endl;
      obj1 << newEve.eventFee << endl;
    }

  
  return 0;
}