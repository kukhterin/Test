#include <iostream>
using namespace std;

class Distance
{
private:
  int feet;
  float inches;
public:
  Distance() : feet(0), inches(0.0)
  {}
  Distance(int ft, float inch) : feet(ft), inches(inch)
  {}
  void getdist()
  {
    cout << "\nВведите число фунтов: ";
    cin >> feet;
    cout << "\nВведите число дюймов: ";
    cin >> inches;
  }
  void show_distance()
  {
    cout << feet <<"\'-" << inches <<"\"";
  }
  Distance add_dist(Distance);
};

Distance Distance::add_dist(Distance dd2)
{
  Distance temp;
  temp.inches = inches + dd2.inches;
  if(temp.inches >=12.0)
  {
    temp.inches -= 12.0;
    temp.feet = 1;
  }
  temp.feet += feet + dd2.feet;
  return temp;
}


int main() 
{
  Distance d1, d3;
  Distance d2(11, 4.5);
  d1.getdist();
  d3 = d1.add_dist(d2);
  
  cout << "\nd1 = "; d1.show_distance();
  cout << "\nd2 = "; d2.show_distance();
  cout << "\nd3 = "; d3.show_distance();
  cout << endl;
 
  
return 0;

}
