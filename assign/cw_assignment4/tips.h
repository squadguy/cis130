#ifndef TIPS_H
#define TIPS_H
#include <iostream>
#include <iomanip>
using namespace std;

class Tips
{
private:
	double tax_rate,
		bill_after_taxes,
		tip_rate;

public:
	//------- Constructor ----------
	Tips (double _bill_after_taxes = 100, double _tax_rate = 6.5,  double _tipRate = 10)
		{
			setBill_after_taxes(_bill_after_taxes);
			setTax_rate(_tax_rate);
			setTip_rate(_tipRate);
		}

	//--------- class functions that perform calculations -----------
	double getTip();
	double getBillAmountBeforeTaxes();

	//-------- mutator functions ----------
	void setTax_rate(double );
	void setBill_after_taxes(double );
	void setTip_rate(double );

	//--------- accessor functions -------------
	double getTax_rate();
	double getBill_after_taxes();
	double getTip_rate();

	//------ print out class variables -----------
	void print();
};

#endif