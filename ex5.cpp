#include <iostream>
#include <set>
using namespace std;
template <typename T>
T rechercher(T a, T b)
{
   if (b.find(a) == b.end())
      return false;
   else
      return true;
}
main()
{
   set<int> n;
   int i;
   float a;
   for (i = 0; i <= 100; i++)
   {
      cin >> a;
      n.insert(a);
   }
}
