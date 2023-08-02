#include <iostream>

using namespace std;

int main(){
    int sales = 95000;
    const double  statetaxRate = .04,  countyTaxrate = .02;
    double tax = sales * statetaxRate;
    double countyTax = sales * countyTaxrate;
    double totalTax  = tax + countyTax;
    
    // sales
    // state tax
    // county tax
    // total tax to pay
    cout <<"Sales: $" << sales << endl << "State Tax: $"<< tax << endl
         << "County Tax: $" << countyTax << endl << "Total Tax : $"<< totalTax << endl;

    return 0;
}