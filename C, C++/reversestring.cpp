include <iostream>
using namespace std;

int main() {
 
  string greeting = "Hello";
  int len = greeting.length();
  int n=len-1;
  for(int i=0;i<(len/2);i++){
    swap(greeting[i],greeting[n]);
    n = n-1;

  }
  cout<<greeting<<endl;
}
