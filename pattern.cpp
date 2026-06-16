#include<iostream>
using namespace std;

int main(){
  // int n = 10;
  // for (int i = 1; i <= n; i++){
  //   for (int j = 1; j <= i; j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  
  //Inverted Half Pyramid
  // int n = 5;
  // for (int i = 1; i <= n; i++){
  //   for (int j = 1; j <= n-i+1; j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  
  //Half Pyramid pattern
  // int n = 10;
  // for (int i = 1; i <= n; i++){
  //   for (int j = 1; j <= i; j++){
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }


  //Character Pattern
  // int n=4;
  // char ch = 'A';
  // for (int i=1; i<=n;i++){
  //   for( int j=1; i<=i; j++){
  //     cout << ch;
  //     ch++
  //   }
  //   cout<<endl;
  // }

  // int n=4;
  // char ch = 'A';
  // for (int i=1; i<=n;i++){
  //   for( int j=1; i<=i; j++){
  //     cout << ch++; //post increament
  //   }
  //   cout<<endl;
  // }

  
  // hollow rectangle pattern
  // int n = 4;

  // for(int i=1;i<=n; i++){
  //   cout<< "*"; //First
  //   for (int j=1; j<=n-2; j++){
  //     if(i==1 || i==n){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<"*"<<endl;//last
  // }


  // inverted & Roated Half Pyramid
  // int n = 5;
  // for (int i = 1; i <= n; i++){
  //   for (int j = 1; j <= n-i; j++){
  //     cout<<" ";
  //   }
  //   for (int j = 1; j <= i; j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }


  // Floyd's Triangle Pattern
  // int n = 15;
  // int num = 1;
  // for (int i = 1; i <= n; i++){
  //   for (int j = 1; j <= i; j++){
  //     cout<<num++<<" ";
  //   }
  //   cout<<endl;
  // }


//Diamond Patter

  //   //1st pyramide
  //   int n = 4;
  //   for (int i = 1; i <= n; i++){
  //     for (int j = 1; j <= n-i; j++){
  //       cout<<" ";
  //   }
  //     for (int j = 1; j <= 2*i-1; j++){
  //       cout<<"*";
  //     }
  //    cout<<endl;
  // }
  // //2nd pyramide
  //   for (int i = n; i >= 1; i--){
  //   for (int j = 1; j <= n-i; j++){
  //     cout<<" ";
  //   }
  //   for (int j = 1; j <= 2*i-1; j++){
  //   cout<<"*";
  //   }
  //   cout<<endl;
  //   }

//Butterfly Pattern
  int n = 4;
  //Upper Part Of Butterfly
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= i; j++){
      cout<<"*";
    }
    for (int j = 1; j <= 2*(n-i); j++){
      cout<<" ";
    }
    for (int j = 1; j <= i; j++){
      cout<<"*";
    }
    cout<<endl;
  }

  //Lower Part Of Butterfly
  for (int i = n; i >= 1; i--){
    for (int j = 1; j <= i; j++){
      cout<<"*";
    }
    for (int j = 1; j <= 2*(n-i); j++){
      cout<<" ";
    }
    for (int j = 1; j <= i; j++){
      cout<<"*";
    }
    cout<<endl;
  }

  return 0;
}

