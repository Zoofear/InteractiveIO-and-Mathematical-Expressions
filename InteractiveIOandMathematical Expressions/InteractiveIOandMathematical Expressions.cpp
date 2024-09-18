// InteractiveIOandMathematical Expressions.cpp : Project 1 Ingredient Adjuster
// This project is made to adjust a recipe for the different kind amount of cookies

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
		//Constant variabless for the recipe.
	
	const double SugarR = 1.5;	//1.5 cups of sugar needed in the recipe
	const double ButterR = 1;		//1 cup of butter for the recipe
	const double FlourR = 2.75;	// 2.75 cups of flour needed for the recipe
	const double CookieR = 48;	// This recipe makes 48 cookies in this ratio

		//Variables

	int CookieAmount;			//The amount of cookies inputted
	double CookieRatio;			//Used in a mathematical equation to find out how to alter the formula
	double Sugar;				//The output post calculations
	double Butter;				//The output post calculations
	double Flour;				//The output post calculations
	
		//Asking for input

	cout << "How many cookiess do you want to make?" << endl;
	cin >> CookieAmount;
	
		//Calculations

	CookieRatio = CookieAmount / CookieR;	//Divide to get the percentage to use in other calculations
	Sugar = SugarR * CookieRatio;			//Appling the ratio to the original recipe
	Butter = ButterR * CookieRatio;			//Appling the ratio to the original recipe
	Flour = FlourR * CookieRatio;			//Appling the ratio to the original recipe

		//Output

	cout << "To make " << CookieAmount << " amount of cookies, you need:" << endl;
	cout << setprecision(1) << Sugar << " Cup(s) of Sugar" << endl;
	cout << setprecision(1) << Butter << " Cup(s) of Butter" << endl;
	cout << setprecision(1) << Flour << " Cup(s) of Flour" << endl;
	
	return 0;
}
