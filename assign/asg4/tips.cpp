#include "tips.h"

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
void Tips::setBill_before_taxes(double _bill_before_taxes)
{
	bill_before_taxes = _bill_before_taxes;
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
double Tips::getBill_before_taxes()
{
	return bill_before_taxes;
}
void Tips::print()
{
	cout<< "Bill after Taxes: " << bill_after_taxes << endl;
	cout<< "Tax rate: " << tax_rate << endl;
	cout<< "Bill before tax:" << bill_before_taxes << endl;
	cout<< endl;
	cout << "Tip rate: " << tip_rate << endl;;
	cout << "Tip amount: " << tip_amount << endl;
	cout << "Total Bill: " << total_bill;
}