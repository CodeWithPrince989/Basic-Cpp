// char Datatype

# include <iostream>
using namespace std;

int main(){
    // char -> 1 byte
    char ch1 = 'a';
    char ch2 = 'X';
    char ch3 = '%';
    char ch4 = '1';
    char ch5 = '\t';
    char ch6 = '\n';
    cout << ch1 << ch2 << ch3 << ch4 << ch5 << ch6;
    cout << (int) ch1 << (int) ch2 << (int) ch3 << (int) ch4 << (int) ch5 << (int) ch6;

    char ch7 = 'F';
    int pos = ch7 - 'A';
    cout << pos << endl;
    return 0;
  
    
}