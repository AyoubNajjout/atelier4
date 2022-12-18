#include <iostream>
#include <list>
using namespace std;
int main()
{
  // déclaration de la liste
  list<int> l1;
  // déclaration des variables
  int i, n;
  cout << "Entrez les elements de la liste (pour terminer entrez 0) " << endl;
  for (i = 0;; i++)
  {
    cin >> n;
    if (n == 0)
      break;
    l1.push_back(n);
  }
  list<int>::iterator a;
  l1.sort();
  cout << "la liste triee est : ";
  for (a = l1.begin(); a != l1.end(); a++)
  {
    cout << *a << " ";
  }
}
