/*
Програма може полічити кількість різних елементів у векторі
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int полічити_різні(vector <int> & вектор) {
  if (вектор.empty())
        {
        cout <<  "В пустому векторі нема різних елементів!\n"; 
        return 0;
        }
  else
  {
   sort(вектор.begin(), вектор.end());
   int лічильник = 1;
   for (auto i = вектор.begin(); i != вектор.end()-1; i++ )
   {
      if (*i != *(i + 1)) 
				{лічильник++;}
   }
   return лічильник;
  }
}
int main()
{ 
  srand(time(0)); //nullptr
  vector <int> вектор; 
  for (auto iндекс = 0; iндекс < 10; iндекс++) 
      {
        вектор.push_back(rand()%10); 
      }
  for (auto ітератор = вектор.begin(); ітератор != вектор.end(); ітератор++) 
    {cout << *ітератор << " "; }
  cout << "\n"; 
  sort(вектор.begin(), вектор.end());
  for (auto ітератор = вектор.begin(); ітератор != вектор.end(); ++ітератор) 
    cout << *ітератор << " "; 
  int кількість_різних=полічити_різні(вектор);
  cout <<endl<<"Кількість різних: "<< кількість_різних<< " "; 
}