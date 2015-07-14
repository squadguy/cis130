#include <iostream>
#include <iomanip>
#include "tips.h"
using namespace std;

void Tips::setTax_rate(double _tax_rate)
{
	tax_rate = _tax_rate;
}
void Tips::setBill_after_taxes(double _bill_after_taxes)
{
	bill_after_taxes = _bill_after_taxes;
}
void Tips::setTip_rate(double _tip_rate)
{
	tip_rate = _tip_rate;
}
double Tips::getTax_rate()
{
	return tax_rate;
}
double Tips::getBill_after_taxes()
{
	return bill_after_taxes;
}
double Tips::getTip_rate()
{
	return tip_rate;
}
void Tips::print()
{
	cout << fixed << setprecision(2);
	cout << endl;
	cout << "  Bill after taxes           :  $" << bill_after_taxes << endl;
	cout << "  Tax rate                   :   " << tax_rate << "%" << endl;
	cout << "  Bill before taxes          :  $" << (getBill_after_taxes()*(1-(getTax_rate()/100))) << endl;
	cout << endl;
	cout << "  Tip rate                   :   " << getTip_rate() << "%" << endl;
	cout << "  Tip amount                 :   " << (getBill_after_taxes()*(1-(getTax_rate()/100))) * (getTip_rate()/100) << endl;
	cout << "  Total bill with            :   " << bill_after_taxes + (getBill_after_taxes()*(1-(getTax_rate()/100))) * (getTip_rate()/100) << endl;
	cout << "------------------------------------------" << endl;
}
