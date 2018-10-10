/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 4th, 2018, 10:25 AM
 * Purpose:  Menu Template
 */


//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;//Option 0 to 9 input as a character not a numeric value
    
    //Input or initialize values Here
    cout<<"This program illustrates a Menu"<<endl;
    cout<<"Choose the problem you wish to solve"<<endl;
    cout<<"0 -> Gaddis_9thEd_Chap4_Prob1_JustATest"<<endl;
    cout<<"1 -> Gaddis_9thEd_Chap4_Prob3_JustATest"<<endl;
    cout<<"2 -> Gaddis_9thEd_Chap4_Prob4_JustATest"<<endl;
    cout<<"3 -> Gaddis_9thEd_Chap4_Prob11_JustATest"<<endl;
    cout<<"4 -> Gaddis_9thEd_Chap4_Prob13_JustATest"<<endl;
    cout<<"5 -> Gaddis_9thEd_Chap4_Prob14_JustATest"<<endl;
    cout<<"6 -> Gaddis_9thEd_Chap4_Prob16_JustATest"<<endl;
    cout<<"7 -> Gaddis_9thEd_Chap4_Prob17_JustATest"<<endl;
    cout<<"8 -> Gaddis_9thEd_Chap4_Prob18_JustATest"<<endl;
    cout<<"9 -> Gaddis_9thEd_Chap4_Prob9_JustATest"<<endl;
    cin>>choice;
   
#include <iostream>
#include <cmath>


using namespace std;

int main() 
{
    float number1, number2, larger, smaller;
    
    cout<< "Enter two numbers: ";
    cin>> number1 >> number2;
    
    if(number1 > number2);
    
    cout << "The large number is: " << number1 << endl << endl;
    cout << "and the smaller number is : " << number2 << endl << endl;
    

  
    return 0;
}
             break;
            
        case '1':
            cout<<"Put solution to Prob 3 here"<<endl;
            /*
 *The date June 10, 1960 is special because when we write it in the following
 * format, the month times the day equals the year.
 * 6/10/60
 * Write a program that asks the user to enter a month (in numeric form),
 * a day, and a two-digit year. The program should then determine
 * whether the month times the day is equal to the year. If so, it should
 * display a message saying the date is magic. Otherwise, it should display a
 * message saying the date is not magic.
 */

/* 
 * File:   Magic Dates.cpp
 * Author: nicolette
 */

#include <cstdlib>

using namespace std;


int main()
{ 
    int month, day, year;
    cout << "Enter a month in numeric form: ";
    cin>> month;
    cout << "Enter a day (1-31): ";
    cin >> day;
    cout << "Enter a two-digit year: ";
    cin >> year;
    
    cout << "\n The Magic Dates \n";
    
    if(month * day == year)
        cout << "The date is magic\n";
    else
        cout << "The date is not magic\n";
    
    
    return 0;
}

            break;
        case '2':
            cout<<"Put solution to Prob 4 here"<<endl;
            break;
            
            case '3':
            cout<<"Put solution to Prob 11 here"<<endl;
    /*
 * This is a modification of Programming Challenge 17 from Chapter 3. 
 * Write a program that can be used as a math tutor for a young student.
 * The program should display two random numbers that are to be added, such as:
 *    247
 *  + 129
 *  ------
 * 
 * The program should wait for the student to enter the answer. If the answer
 * is correct, message of congratulations should be printed. If the answer
 * is incorrect, a message should be printed showing the correct answer.
 */



#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;


int main() 
{
    cout << "\n Math Tutor\n\n";
    
    int number1, number2, sum, answer;
    unsigned seed = time(0);
    
    srand(seed);
    
    number1 = 100 + rand() % 999;
    number2 = 100 + rand() % 999;
    
    sum = number1 + number2;
    
    cout << setw(5) << number1 << endl;
    cout << setw(5) << number2 <<" + \n";
    cout << setw(5) << "----\n\n";
    
    cout << "Enter the answer: ";
    cin >> answer;
    
    if(answer == sum)
        cout << "Congratulations, the answer is correct. \n\n";
    else
        cout << "Incorrect answer. The correct answer is: " << sum <<"\n\n";
    
            
    return 0;
}

            break;  
            
            case '4':
            cout<<"Put solution to Prob 13 here"<<endl;
    /*
 * Book Club Points
 * Serendipity Booksellers has a book club that awards points to its customers 
 * based on
 *the number of books purchased each month.  The points are awarded as follows:
 * -If a customer purchases 0 books, 0 points are earned.
 * -If a customer purchases 1 book, 5 points are earned.
 * -If a customer purchases 2 books, 15 points are earned.
 * -If a customer purchases 3 books, 30 points are earned.
 * -If a customer purchases 4 or more books, 60 points are earned.
 * 
 * Write a program that asks the user to enter the number of books that
 * he or she has purchased this month and then display the number of points
 * awarded.
 */

  #include <iostream>

using namespace std;

int main()
{
 int books, points;

 cout << "Book Club Points";
 

 cout << "Enter the number of books purchased this month: ";
 cin >> books;

 if(books == 0)
 {
 points = 0;
 cout << "You have earned: " << points << " points \n\n";
 }
 if(books == 1)
 {
 points = 5;
 cout << "You have earned: " << points << " points \n\n";
 }
 if(books == 2)
 {
 points = 15;
 cout << "You have earned: " << points << " points \n\n";
 }
 if(books == 3)
 {
 points = 30;
 cout << "You have earned: " << points << " points \n\n";
 }
 if(books >= 4)
 {
 points = 60;
 cout << "You have earned: " << points << " points \n\n";
 }
 else
 {
 if(books < 0)
 cout << "Number of books cannot be negative!! \n\n";
 }

 return 0;
}

            break;       
    
    case '5':
            cout<<"Put solution to Prob 14 here"<<endl;
    /*
 * A bank charges $10 per month plus the following check fees for a commercial 
 * checking account:
 * $0.10 each for fewer than 20 checks
 * $0.08 each for 20-39 checks
 * $0.06 each for 40-59 checks
 * $0.04 each for 60 or more checks
 * The bank also charges an extra $15 if the balance of the account falls below
 *  $400 (before any check fees are applied).
 * Write a program that asks for the beginning balance and the number of 
 * checks written. Compute and display the bank's service fees for the month.
 * Input validation: Do not accept a negative value for the number of checks 
 * written. If a negative value is given for the beginning balance, display
 * an urgent messageindicating the account is overdrawn.
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
 int checks;
 double beginningBalance, feeOne, feeTwo, totalFees;

 cout << "\n+++++++++++++++++++++++++++++\n"
  << "       Bank Charges"
  << "\n+++++++++++++++++++++++++++++\n\n";

 cout << "Enter beginning balance: $";
 cin >> beginningBalance;

 cout << setprecision(2) << fixed;
 if(beginningBalance < 0)
 cout << "URGENT MESSAGE!! YOUR ACCOUNT IS OVERDRAWN!! \n\n";
 else
 {
 cout << "Enter number of checks written: ";
 cin >> checks;
 
 if(beginningBalance < 400)
 feeOne = 15.00;
 else
 feeOne = 0.00;

 if(checks >= 0 && checks < 20)
 feeTwo = checks * 0.10;
 if(checks >= 20 && checks <= 39)
 feeTwo = checks * 0.08;
 if(checks >= 40 && checks <= 59)
 feeTwo = checks * 0.06;
 if(checks >= 60)
 feeTwo = checks * 0.04;
 if(checks < 0)
 cout << "The number of checks cannot be negative. \n\n";

 totalFees = feeOne + feeTwo;

 cout <<  "\n Monthly Fees\n";
 cout << "Low Balance fee: $" << feeOne << endl;
 cout << "Check fees: $" << feeTwo << endl;
 cout << "Total Monthly fees: $" << totalFees << "\n\n";
 }

 return 0;
 }

            break;    
    
    case '6':
            cout<<"Put solution to Prob 16 here"<<endl;
    /* Write a program that asks for the names of three runners and the time it
 * took each of them to finish a race. The program should display who
 * came in first, second, and third place.
 
 */

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
 string runnerOne, runnerTwo, runnerThree;
 double timeOne, timeTwo, timeThree;

 cout << "\n Running the Race\n\n";

 cout << "Enter the name of first runner: ";
 getline(cin, runnerOne);
 cout << "Enter time for first runner: ";
 cin >> timeOne;

 if(timeOne <= 0)
 cout << "Only positive times are allowed. \n\n";
 
 cin.ignore();
 cout << "\nEnter the name of second runner: ";
 getline(cin, runnerTwo);
 cout << "Enter time for second runner: ";
 cin >> timeTwo;

 if(timeTwo <= 0)
 cout << "Only positive times are allowed. \n\n";

 cin.ignore();
 cout << "\nEnter the name of third runner: ";
 getline(cin, runnerThree);
 cout << "Enter time for third runner: ";
 cin >> timeThree;

 if(timeThree <= 0)
 cout << "Only positive times are allowed. \n\n";

 cout << "\n Results\n\n";

 if(timeOne < timeTwo && timeOne < timeThree)
 {
 if(timeTwo < timeThree)
 {
 cout << "First place: " << runnerOne << endl
  << "Second Place: " << runnerTwo << endl
  << "Third Place: " << runnerThree << "\n\n";
 }
 if(timeThree < timeTwo)
 {
 cout << "First place: " << runnerOne << endl
  << "Second Place: " << runnerThree << endl
  << "Third Place: " << runnerTwo << "\n\n";
 }
 }

 if(timeTwo < timeOne && timeTwo < timeThree)
 {
 if(timeOne < timeThree)
 {
 cout << "First place: " << runnerTwo << endl
  << "Second Place: " << runnerOne << endl
  << "Third Place: " << runnerThree << "\n\n";
 }
 if(timeThree < timeOne)
 {
 cout << "First place: " << runnerTwo << endl
  << "Second Place: " << runnerThree << endl
  << "Third Place: " << runnerOne << "\n\n";
 }
 }

 if(timeThree < timeOne && timeThree < timeTwo)
 {
 if(timeOne < timeTwo)
 {
 cout << "First place: " << runnerThree << endl
  << "Second Place: " << runnerOne << endl
  << "Third Place: " << runnerTwo << "\n\n";
 }
 if(timeTwo < timeOne)
 {
 cout << "First place: " << runnerThree << endl
  << "Second Place: " << runnerTwo << endl
  << "Third Place: " << runnerOne << "\n\n";
 }
 }


 return 0;
}            break;  
    
            
            case '7':
            cout<<"Put solution to Prob 17 here"<<endl;
    /*
 * Write a program that asks for the name of a pole vaulter and the
 * dates and vault heights (in meters) of the athlete's three best vaults.
 * It should then report in order of height (best first), the date on which
 * each vault was made and it height.
 * Input Validation: Only accept values between 2.0 and 5.0 for the heights.
 */

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
 string name, date1, date2, date3;
 double height1, height2, height3;

 cout << "Enter the name of the pole vaulter: ";
 getline(cin, name);

 cout << "\nEnter the date of the 1st date: (mm/dd/yyyy)";
 getline(cin, date1);
 cout << "Enter the height (in meters) of the 1st date: ";
 cin >> height1;
 if(height1 < 2  || height1 > 5)
 {
 cout << "Height has to be between 2 and 5. \n\n";
 cout << "Enter the height again: ";
 cin >> height1;
 }

 cin.ignore();
 cout << "\nEnter the date of the 2nd date: (mm/dd/yyyy)";
 getline(cin, date2);
 cout << "Enter the height (in meters) of the 2nd date: ";
 cin >> height2;
 if(height2 < 2  || height2 > 5)
 {
 cout << "Height has to be between 2 and 5. \n\n";
 cout << "Enter the height again: ";
 cin >> height2;
 }

 cin.ignore();
 cout << "\nEnter the date of the 3rd date: (mm/dd/yyyy)";
 getline(cin, date3);
 cout << "Enter the height (in meters) of the 3rd date: ";
 cin >> height3;
 if(height3 < 2  || height3 > 5)
 {
 cout << "Height has to be between 2 and 5!! \n\n";
 cout << "Enter the height again: ";
 cin >> height3;
 }

 cout << "\n\n Athlete's name: " << name;
 cout << "Best vaults: \n";

 if(height1 > height2 && height1 > height3)
 {
 if(height2 > height3)
 {
 cout << "Date: " << date1 << "\t" << "Height: " << height1 << " meters" << endl
      << "Date: " << date2 << "\t" << "Height: " << height2 << " meters" << endl
  << "Date: " << date3 << "\t" << "Height: " << height3 << " meters" << "\n\n";
 }
 if (height3 > height2)
 {
 cout << "Date: " << date1 << "\t" << "Height: " << height1 << endl
      << "Date: " << date3 << "\t" << "Height: " << height3 << endl
  << "Date: " << date2 << "\t" << "Height: " << height2 << "\n\n";
 }
 }

 if(height2 > height1 && height2 > height3)
 {
 if(height1 > height3)
 {
 cout << "Date: " << date2 << "\t" << "Height: " << height2 << endl
      << "Date: " << date1 << "\t" << "Height: " << height1 << endl
  << "Date: " << date3 << "\t" << "Height: " << height3 << "\n\n";
 }
 if (height3 > height1)
 {
 cout << "Date: " << date2 << "\t" << "Height: " << height2 << endl
      << "Date: " << date3 << "\t" << "Height: " << height3 << endl
  << "Date: " << date1 << "\t" << "Height: " << height1 << "\n\n";
 }
 }

 if(height3 > height2 && height3 > height1)
 {
 if(height2 > height1)
 {
 cout << "Date: " << date3 << "\t" << "Height: " << height3 << endl
      << "Date: " << date2 << "\t" << "Height: " << height2 << endl
  << "Date: " << date1 << "\t" << "Height: " << height1 << "\n\n";
 }
 if (height1 > height2)
 {
 cout << "Date: " << date3 << "\t" << "Height: " << height3 << endl
      << "Date: " << date1 << "\t" << "Height: " << height1 << endl
  << "Date: " << date2 << "\t" << "Height: " << height2 << "\n\n";
 }
 }

 return 0;
}
    break; 
    
    case '8':
            cout<<"Put solution to Prob 18 here"<<endl; 
    /*
 * Write a program that asks for the number of calories and fat grams
 * in a food. The program should display the percentage of calories that come
 * from fat. If the calories from fat are less than 30 percent of the total
 * calories of the food, it should also display a message indicating that 
 * the food is low in fat.
 * 
 * One gram of fat has 9 calories, so
 * Calories from fat = fat grams * 9
 * The percent of calories from fat can be calculated as
 * Calories from fat/ total calories.
 */

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
 double calories, fatgrams, fatcalories;
 double lowfat;

 cout << "Enter the number of calories in food: ";
 cin >> calories;
 if(calories < 0)
 {
 cout << "\n Calories cannot be less than 0!! \n"
  << "Enter calories again: ";
 }

 cout << "\n Enter the number of fat grams in food: ";
 cin >> fatgrams;
 if(fatgrams < 0 || fatgrams > calories)
 {
 cout << "\n Fatgrams cannot be less than 0 or greater than calories. \n"
  << "Enter fatgrams again: ";
 }

 fatcalories = fatgrams * 9;
 lowfat = fatcalories/calories;

 cout << "Calories from fat: " << lowfat * 100 << "%" << "\n\n";
 if(lowfat < 0.30)
 cout << "This food is low in fat. \n\n";

 system("pause");

 return 0;
}

    break;
    
    case '9':
            cout<<"Put solution to Prob 9 here"<<endl;   
    /*
 Create a change-counting game that gets the user to enter the number of
 * coins required to make exactly one dollar. The program should ask the user
 * to enter the number of pennies, nickels, dimes, and quarters. If the
 * total value of the coins entered is equal to one dollar, the program
 * should display a message indicating whether the amount entered was
 * more than or less than one dollar.
 */


#include <iostream>
#include <iomanip>

using namespace std;


int main() 
{
    double pennies, nickels, dimes, quarters, total;
    
    cout << "Change for a Dollar Game\n";
    
    cout << "Enter the number of pennies: ";
    cin >> pennies;
    
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    
    cout << "Enter the number of quarters: ";
    cin >> quarters;
    
total= (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);

if(total == 1.00)
    cout << "\n You win! You entered one dollar! \n\n";
else
{
    if(total < 1.00 && total > 0)
    {
        cout << "\n You entered less than one dollar. Try again later.\n\n";   
    }
    else
    {
        if(total > 1.00)
        {
            cout << "\n The number of coins have to be greater than 0. Try"
                   << "again \n\n";
        }
        }
    }

    return 0;
}
    break; default:
            cout<<"Having trouble following instructions?"<<endl;
    }
    
    //Exit Stage Right
    return 0;
}

