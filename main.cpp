#include <cmath>
#include <iostream>
using namespace std;

int main()
{
int a, b, c;
  double root, root2, discriminant;
  root = (-b + sqrt((b * b) - 4*a*c))/(2*a);
    root2 = (-b - sqrt((b * b) - 4*a*c))/(2*a);
  discriminant= b*b-4*a*c;


  cin >> a;
if (a == 0)  
  { cout << "invalid entry";}
    
      
  cout << endl;
  
  cin >> b;
  cout << endl;
  
  cin >> c; discriminant= b*b-4*a*c;root = (-b + sqrt
    ((b * b) - 4*a*c))/(2*a);root2 = (-b - sqrt((b * b) - 4*a*c))/(2*a);
  cout << discriminant << endl;
  cout << endl;
  if (discriminant < 0)
  {cout << "two complex numbers";
  }
  else {cout << root << ", " << root2;}
  
  cout << endl;
  cout << root;
  
  
  

  
  
  
}
