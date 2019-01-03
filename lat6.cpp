#include <iostream>
using namespace std;
int main ()
{
int a;
cout<<"masukan derajat suhu"<<endl;
cin>>a;
if(a<0) {
    cout<<"a zat beku"<<endl;
} else if (a>100){
 cout<<"a zat gas"<<endl;
} else if (0<a<100) {
cout<<"a zat cair"<<endl;
}
return 0;

}
