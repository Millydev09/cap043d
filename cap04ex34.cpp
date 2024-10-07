//cap04ex3d.cpp

#include <iostream>
using namespace std;

int main (void)
{
 float md1,md2,n1,n2,n3,n4,ne;

 cout << "entre com valor da nota 1:" << endl;
 cin >> n1;
 cout << "entre com valor da nota 2: " << endl;
 cin >> n2;
 cout << "entre com valor da nota 3: " << endl;
 cin >> n3;
 cout << "entre com valor da nota 4: " << endl;
 cin >> n4;

 md1 = (n1+n2+n3+n4)/4;
 if (md1>= 7)
 {
   cout << "aprovado! sua nota foi " << md1;
 }
 else {
    cout << "entre com a quinta nota:" << endl;
    cin >> ne;
  }
 md2 = (md1+ne)/2;
if (md2>= 5){
    cout << "parabens aprovado com a media " << md2 << endl;
}
else
{
    cout << "reprovado" << md2<< endl;
}
 return 0;

}
