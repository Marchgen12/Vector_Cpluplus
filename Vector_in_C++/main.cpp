#include <iostream>
//#include "Vector.h"
#include <Vector.h>
using namespace std;

void print_vector(Vector<int>);

int main(){
  int arr[10]= {1,2,3,4,5,6,7,8,9,10};

  Vector<int> vector1;

  for(int i=0; i<10;i++){
    vector1.push_back(arr[i]);
    }
  vector1.insert(6,20);
  print_vector(vector1);
  cout << endl;
  return 0;
}

void print_vector(Vector<int> v){
  for (int i = 0; i < v.size(); i++){cout << v[i] << " ";}
  return;
}

