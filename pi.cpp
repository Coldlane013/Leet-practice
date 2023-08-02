#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double circum, result; 
  cout << "Enter circle radius:";
  cin >> circum;
  result = M_PI * pow(circum, 2);
  cout<<"Circle radius is:"<< result;
    return 0;
}