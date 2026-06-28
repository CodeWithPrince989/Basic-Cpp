//Practice
#include<iostream>
#include<string>
using namespace std;

class User {
private: 
  int id;
  string password;

public:
  string username;

  User(int id){
    this->id = id;
  }

//Getter
  string getPassword(){
    return password;
  }

//Setter
  void setPassword(string password){
    this->password = password;
  }
};

int main(){
  User user(101);
  user.username = "John";
  user.setPassword("123456");
  cout << user.username << endl;
  cout << user.getPassword() <<endl;
  return 0;
}