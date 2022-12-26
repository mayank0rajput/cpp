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
