#include <iostream>
#include <string>
#include "number4.h"
using namespace std;
using namespace SALES;

void Sales::showSales()
{
	cout << "the minimum sales was" << min << endl / ;
	cout << "the maximum sales was" << max << endl / ;
	cout << "the average sales was" << average << endl / ;
	cout << sales[0] << sales[1] << sales[2] << sales[3] << endl / ;

}

Sales::setSales(Sales &, const double ar[], int n)
{
	Sales::Sales();
	int i=0;
	for (i < 4, i = 0, i++)
	{

		
		double sales[4];
		double temp[4];
		if (i >= n)
		{
			this->sales[i] = 0;
			temp[i] = 0;
		}
		if (i < n)
		{
			this->sales[i] = ar[i];
			temp[i] = ar[i];
		}

	}


		while (temp[0]>temp[1]||temp[0]>temp[2]||temp[0]>temp[3]|| temp[1] > temp[2] || temp[1] > temp[3] || temp[2]>temp[3])
		{


			double value;
			value = temp[i];
			if (temp[i] > temp[i + 1]
				{
					temp[i] = temp[i + 1];
					temp[i + 1] = value;
				}
		}
this->min=temp[0];
this->max=temp[3];
this->average=(temp[0]+temp[1]+temp[2]+temp[3])/4;
}

void sales::Sales()
{
	cout << "how many quarters for the year do you have information for?" << endl;
	cin >> this->n;
	int j;
	double ar[4];
	j = 0;
	while (j < n)
	{
		cout << "enter double value for quarter" << endl;
		cin >> ar[j];
		j++;
	}

}