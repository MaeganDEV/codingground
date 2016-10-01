#include <iostream>
#include <iomanip>

using namespace std;

//Calculates Male BMR
double BMRmale(double wt, double ht, int age){
    double maleFormula = 66 + (6.23 * wt) + (12.7 * ht) - (6.8 * age);
    cout << "Your BMR is " << fixed << setprecision(0) << maleFormula << endl;
    return 0;
}
//Calculates Female BMR
double BMRfemale(double wt, double ht, int age){
    double femaleFormula = 655 + (4.35 * wt) + (4.7 * ht) - (6.8 * age);
    cout << "Your BMR is " << fixed << setprecision(0) << femaleFormula << endl;
    return 0;
}

int main()
{
    
  //declaring variables
   int age = 0;
   double wt = 0.0;
   double ht = 0.0;
   char gender = ' ';

    //io with calls to formula functions depending on condition
   cout << "Enter your Age: " ; 
   cin >> age;
   cout << "Enter your Weight in lbs: ";
   cin >> wt;
   cout << "Enter your Height in inches: ";
   cin >> ht;
   cout << "Enter your Gender: (M/F): ";
   cin >> gender;
  
    if (gender == 'M' || gender =='m'){
        BMRmale(wt,ht,age);
    } else if (gender == 'F' || gender == 'f'){
        BMRfemale(wt,ht,age);
    } else {
        cout << "Try Again: Please enter 'M' for male or 'F' for female: ";
        cin >> gender;
            if (gender == 'M' || gender =='m'){
                BMRmale(wt,ht,age);
            } else if (gender == 'F' || gender == 'f'){
                 BMRfemale(wt,ht,age);
            }
    }

 
   
   return 0;
}



