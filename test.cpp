#include <iostream>
using namespace std;

class classNode
{
  public:
  void DoStuff(int int1 = 1, int int2 = 2);
  private:
  int num1;
  int num2;
  int sum;
};

int main()
{
  classNode type;
  
  type.DoStuff(); 
  return 0;
}

void classNode::DoStuff(int int1, int int2)
{
  //Variables passed in  
  cout << int1 + int2 << endl;
  
  //Next two parts use same variables and seem to work the same way.
  classNode type;
  num1 = 1;
  num2 = 2;
  sum = num1 + num2;
  cout << sum << endl;  
  
  type.num1 = 3;
  type.num2 = 4;
  sum = type.num1 + type.num2;
  cout << sum << endl;
}
