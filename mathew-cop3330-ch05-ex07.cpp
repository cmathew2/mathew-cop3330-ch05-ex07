#include "std_lib_facilities.h"


void rootCheck (double a, double b, double c)
{
    double discrim = (b*b)-(4*a*c);

    double root1, root2;

    if(discrim<0)
    {
        cout<<"\n The quadratic formula has failed. This equation has no real roots";
    }

    else if(discrim == 0)
    {
        root1 = (-b+(sqrt(discrim)))/(2*a);

        cout<<"\n This equation has one real, common root: "<<root1;
    }

    else
    {
        root1 = (-b+(sqrt(discrim)))/(2*a);
        root2 = (-b-(sqrt(discrim)))/(2*a);

        cout<<"\n This equation has two real, different roots: "<<root1 <<"and" <<root2;
    }
}

int main()
{
    cout << "Insert the values of a, b and c of a quadratic equation (a*x^2 + b*x + c = 0)\n";

    double a;
    double b;
    double c;

    cin >> a >> b >> c;

    cout<<"Results: ";
    rootCheck(a,b,c);

    return 0;
}