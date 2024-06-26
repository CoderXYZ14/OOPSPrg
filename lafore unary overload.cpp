#include <iostream>
using namespace std;
class Counter
{
private:
unsigned int count; 
public:
Counter() : count(0)
{ }

Counter(int c) : count(c)
{ }

unsigned int get_count() const
{ return count; }

Counter operator ++ (int) // (prefix)
{ 
return Counter(++count); 
}

Counter operator ++ () // (postfix)
{ 
return Counter(count++); 
}
};

int main()
{
Counter c1, c2; 

cout << "\nc1=" << c1.get_count(); 
cout << "\nc2=" << c2.get_count();

++c1; 

c2 = ++c1;

cout << "\nc1=" <<  c1.get_count(); 
cout << "\nc2=" << c2.get_count();
}
