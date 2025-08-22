/*
Name: Dhruv Jain
PRN: 24070123042
Batch: A2
*/
#include <iostream>
using namespace std;
void swap(int *x, int *y){
  int t;
  t=*x;
  *x=*y;
  *y=t;
}
int main(){
  int a=4, b=2;
  cout<<"Value of a before swapping is: "<<a<<endl;
  cout<<"Value of b before swapping is: "<<b<<endl;
  swap(&a,&b);
  cout<<"Value of a after swapping is: "<<a<<endl;
  cout<<"Value of b after swapping is: "<<b<<endl;
  return 0;
}

/*
Output:
Value of a before swapping is: 4
Value of b before swapping is: 4
Value of a after swapping is: 2
Value of b after swapping is: 4
*/
