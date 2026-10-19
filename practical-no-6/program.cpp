#include <iostream>
using namespace std;
class complex
{
float real, img;
public:
void accept(float r, float i)
{
real = r ;
img = i ;
}
void display()
{
    if(img>=0)
    cout<<real<<"+i"<<img;
    else
    cout<<real<<"-i"<<-img;
}
complex operator+(complex b)
{   complex sum;
    sum.real= real + b. real;
    sum.img= img + b.img;
    return sum;
}
complex operator-(complex b)
{   complex sub;
    sub.real= real - b. real;
    sub.img= img - b.img;
    return sub;
}
 complex operator*(complex b )
 {
    complex mul;
    mul. real = (real*b.real)-(img*b.img);
    mul.img = (real*b.img) + (img*b.real);
    return mul;
 }
 complex operator/(complex b ){
    complex div;
    int d = b.real*b.real + b.img*b.img;
    div. real = (real*b.real+img*b.img)/d;
    div.img = (img*b.real - real*b.img)/d;
    return div;
 }
};
int main(){
    complex c1,c2,c3,c4,c5,c6;
    c1.accept(2,4);
    c2.accept(6,3);
    cout << "c1 = ";
    c1.display();
    cout << "\nc2 = ";
    c2.display();
    c3 = c1 + c2;
    cout<<"\nThe addition of 2 complex number is:\n";
    c3.display();
    c4 = c1 - c2;
    cout<<"\nThe subtraction of 2 complex number is:\n";
    c4.display();
    c5 = c1 * c2;
    cout<<"\nThe multiplication of 2 complex number is:\n";
    c5.display();
    c6 = c1 / c2;
    cout<<"\nThe division of 2 complex number is:\n";
    c6.display();
    return 0;
}
