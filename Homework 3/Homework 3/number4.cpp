#include <iostream>
#include <string>
using namespace std;

namespace SALES
{
	const int QUARTERS = 4;
	class Sales
	{
	private:
		double sales[QUARTERS];
		double average;
		double max;
		double min;

	public:
		void showSales();
		void setSales();
		Sales();
		Sales(double sales[], int n)
	};
}