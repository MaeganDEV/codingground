#include <iostream>

using namespace std;

int main()
{
    
    //declaring variables
   int numSmPizza = 0;
   int numMdPizza = 0;
   int numLgPizza = 0;
   int numFamPizza = 0;
   
   double total = 0.0;
   
   double percentSmPizza = 0.0;
   double percentMdPizza = 0.0;
   double percentLgPizza = 0.0;
   double percentFamPizza = 0.0;
   
   
   //io items
   cout << "Enter the number of Small sized Pizzas:"<< endl;
   cin >> numSmPizza;
   
   cout << "Enter the number of Medium sized Pizzas:"<< endl;
   cin >> numMdPizza;
   
   cout << "Enter the number of Large sized Pizzas:"<< endl;
   cin >> numLgPizza;
   
   cout << "Enter the number of Family sized Pizzas:"<< endl;
   cin >> numFamPizza;
   
   //calculations of percentage and total
   total =  numSmPizza +
            numMdPizza +
            numLgPizza +
            numFamPizza;
    
    percentSmPizza = (numSmPizza/total) * 100;
    percentMdPizza = (numMdPizza/total) * 100;
    percentLgPizza = (numLgPizza/total) * 100;
    percentFamPizza = (numFamPizza/total) * 100;
    
    //output
    cout << "Total number of pizzas entered: " << total << endl
        << percentSmPizza << "% of the total pizzas were small pizzas"  << endl
        << percentMdPizza << "% of the total pizzas were medium pizzas" << endl
        << percentLgPizza << "% of the total pizzas were large pizzas" << endl
        << percentFamPizza << "% of the total pizzas were family pizzas" << endl;
    
    return 0;
}

