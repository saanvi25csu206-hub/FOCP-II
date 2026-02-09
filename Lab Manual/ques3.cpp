/*. A weather app developer needs to provide both Celsius and 
Fahrenheit readings. Implement a solution to
convert Fahrenheit temperature into Centigrade or vice versa*/
#include<iostream>
using namespace std;
int main()
{
  float temp;
  cout<<"enter temperature in fahrenheit:";
  cin>>temp;
  cout<<"temp in celcius is "<<(temp-32)/1.8;
}