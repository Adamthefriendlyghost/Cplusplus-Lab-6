//Fiberglass Shard Program

#include <iostream>
using namespace std;

bool isValidDimensions(double len, double di) {

	if ((len > 0 && len < 21)&&(di > 0 && di < 1)){
		return true;
	}
	else {
		return false;
	}
}

double eval_volume(double len, double die) {

	double out = 0;
	double working1 = 0;
	double working2 = 0;

	working1 = die / 2;
	working2 = pow(working1, 2.0);



	out = working2 * 3.142 * len;
	return out;

}

double eval_weight(double est_vol, double density) {

	double out = 0;
	out = est_vol * density;
	return out;
	

}

void wedge_or_cylinder(double est_weight, double act_weight) {

	double out = 0;
	out = est_weight - act_weight;
	if (out < -0.1 || out > 0.1) {
		cout << "Shard is a Cylinder" << endl;
	}
	else {
		cout << "Shard is a Wedge" << endl;
	}

}

int main()
{

	double length = 0;  double diameter = 0; double act_weight = 0;
	double est_volume = 0; double est_weight = 0;

	cout << "Enter the length:" << endl;
	cin >> length;

	cout << "Enter the diameter" << endl;
	cin >> diameter;

	cout << "Enter the weight?:" << endl;
	cin >> act_weight;

	if (!isValidDimensions(length, diameter))
		// check len is within the range 1mm to 20mm and dia is in range 0.1mm - 1mm
	{
		cout << "Dimensions are not valid";
	}
	else
	{
		// estimate volume
		est_volume = eval_volume(length, diameter);
		// estimate weight, density 0.05
		est_weight = eval_weight(est_volume, 0.05);
		// display if wedge or cylinder
		wedge_or_cylinder(est_weight, act_weight);
	}

	
	return 0;
}