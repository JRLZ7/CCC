#include <iostream>
using namespace std;

// HW: finish question J3


int main() {

	int cf_p = 1;
	int p;

	int cf_g = 2;
	int g;
	
	int cf_r = 3;
	int r;

	int cf_o = 4;
	int o;

	int total = 3;
	int total_combo = 0;
	int least_total = 0;
	/*

	cout << "Cost of PINK tickets:\n";
	cin >> p;
	
	cout << "Cost of GREEN tickets:\n";
	cin >> g;

	cout << "Cost of RED tickets:\n";
	cin >> r;

	cout << "Cost of ORANGE tickets:\n";
	cin >> o;

	cout << "How much must be raised with ticket sales?\n";
	cin >> total;

	*/


	for (p=0; p*cf_p <= total; p++){
		
		for (g=0; g*cf_g + p*cf_p <= total; g++){
			
			for (r=0; r*cf_r + g*cf_g + p*cf_p <= total; r++){
				
				for (o=0; o*cf_o + r*cf_r + p*cf_p + g*cf_g <= total; o++){
					if (o*cf_o + r*cf_r + p*cf_p + g*cf_g == total){
						cout << p << ", " << g << ", " << r << ", " << o << endl;
						total_combo++;

						if (total_combo == 1){
							least_total = p + g + r + o;
						}
						
						if (least_total > p + g + r + o && total_combo != 1){
							least_total = p + g + r + o;
						}

					}

					// task 2 and 3 probably completed here.
				}
			}
		}
	}

	cout << "Total combinations is " << total_combo << ".\n";  
	cout << "Minimum number of tickets to print is " << least_total <<".\n";

}

// first year = pink
// second year = green
// third year = red
// fourth year = orange

// each ticket is uniquely priced
// EVERYTHING INTEGER

// CIN the amount of money that wants to be raised

// (complete) 1. COUT all combinations of tickets that produce exactly the desired amount to be raised
// 2. COUT the total number of combinations found
// 3. COUT the smallest number of tickets to print to raise the desired amount so that printing cost is minimized.

