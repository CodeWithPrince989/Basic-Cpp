#include<iostream>
// #include<cstdlib>
#include<string>
using namespace std;

int main(){
  // string str = "hello";
  string str1;
  // cout << str << endl;
  // str = "yellow";
  // cout << str << endl;
  getline(cin, str1);
  // getline(cin, str1, '$');
  cout << str1 << endl;
  cout << str1[0] << endl;
  cout << str1[1] << endl;
  cout << str1[2] << endl;
  cout << str1[3] << endl;
  cout << str1[4] << endl;
  
  return 0;
}