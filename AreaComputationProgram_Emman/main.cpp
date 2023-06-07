#include <iostream>
#include <unistd.h>
#include <iostream>
#include <limits>
#define PI 3.14159
using namespace std;

//VOIDs declaration
int main();
void choosevoid();
void circleRestart();
void rectangleRestart();
void squareRestart();
void triangleRestart();


//number input only
double getNumericInput(const std::string& prompt) {
    double input;
    bool validInput = false;

    while (!validInput) {
        std::cout << prompt;

        if (!(std::cin >> input)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nInvalid input. Number only. \n";
        } else {
            validInput = true;
        }
    }

    return input;
}


//letter input only
std::string getLetterInput(const std::string& prompt) {
    std::string input;
    bool validInput = false;

    while (!validInput) {
        std::cout << prompt;
        std::cin >> input;

        bool containsNonLetter = false;
        for (char c : input) {
            if (!std::isalpha(c)) {
                containsNonLetter = true;
                break;
            }
        }

        if (containsNonLetter) {
            std::cout << "\nInvalid input. Letter only. \n";
        } else {
            validInput = true;
        }
    }

    return input;
}


//rectangle
void rectangle()
{
    int length, width, area;

    cout << "\n---Area of Rectangle---" << endl;

    /*
    cout << "\n Enter the Length: ";
    cin>>length;
    */

    // Asking for input
    length = getNumericInput("\n Enter the Length: ");
    width = getNumericInput("\n Enter the Width: ");

    // calculate
    area = length * width;
    cout << " The Area of Rectangle is: " << area;

    cout << "";
    rectangleRestart();
}

void rectangleRestart()
{
    //---ask to restart---
    char start;
    cout << "\n\nBack to Main Menu or Repeat the Program? [Y/N] \n [Y] Main Menu\n [N] Repeat \n : ";
    cin>> start;

    //yes - go to main
    if(std::tolower(start) == 'y')
    {
        system("cls");
        main();

        //repeat the program
    }
    else if (std::tolower(start) == 'n')
    {
        cout << "\nRepeating the program..." << endl;
        rectangle();

        //yes - go to main
    }
    else
    {
        cout << "\nINVALID! Please Try Again." << endl;
        rectangleRestart();
    }
}



//square
void square()
{
    int side, area;

    cout << "\n---Area of Square---" << endl;

    // Asking for input
    side = getNumericInput("\n Enter the Length of Square: ");

    // Calculating area
    area = side * side;

    // Displaying output
    cout << " The Area of Square length " << side << " is: " << area;

    cout << "";
    squareRestart();

}

void squareRestart()
{
    //---ask to restart---
    char start;
    cout << "\n\nBack to Main Menu or Repeat the Program? [Y/N] \n [Y] Main Menu\n [N] Repeat \n : ";
    cin>> start;

    //yes - go to main
    if(std::tolower(start) == 'y')
    {
        system("cls");
        main();

        //repeat the program
    }
    else if (std::tolower(start) == 'n')
    {
        cout << "\nRepeating the program..." << endl;
        square();

        //yes - go to main
    }
    else
    {
        cout << "\nINVALID! Please Try Again." << endl;
        squareRestart();
    }
}



//triangle
void triangle()
{
    float b, h, area;

    cout << "\n---Area of Triangle---" << endl;

    // Asking for input
    b = getNumericInput("\n Enter Base: ");
    h = getNumericInput("\n Enter Height: ");

    //calculate
    area = 0.5*b*h;

    cout<<" The Area of Triangle is: "<<area;
    cout<<endl;

    cout << "";
    triangleRestart();
}

void triangleRestart()
{
    //---ask to restart---
    char start;
    cout << "\nBack to Main Menu or Repeat the Program? [Y/N] \n [Y] Main Menu\n [N] Repeat \n : ";
    cin>> start;

    //yes - go to main
    if(std::tolower(start) == 'y')
    {
        system("cls");
        main();

        //repeat the program
    }
    else if (std::tolower(start) == 'n')
    {
        cout << "\nRepeating the program..." << endl;
        triangle();

        //yes - go to main
    }
    else
    {
        cout << "\nINVALID! Please Try Again." << endl;
        triangleRestart();
    }
}



//circle
void circle()
{
    float radius, area, circum;

    cout << "\n---Area of Circle---" << endl;

    // Asking for input
    radius = getNumericInput("\n Enter the radius: ");

    // calculate
    circum = 2*PI*radius;
    area = PI*(radius*radius);
    cout<<" The area of the circle is: "<< area << endl;
    cout<<" The circumference of the circle is: "<< circum << endl;

    cout<<"";
    circleRestart();
}

void circleRestart()
{
    //---ask to restart---
    char start;
    cout << "\nBack to Main Menu or Repeat the Program? [Y/N] \n [Y] Main Menu\n [N] Repeat \n : ";
    cin>> start;

    //yes - go to main
    if(std::tolower(start) == 'y')
    {
        system("cls");
        main();

        //repeat the program
    }
    else if (std::tolower(start) == 'n')
    {
        cout << "\nRepeating the program..." << endl;
        circle();

        //yes - go to main
    }
    else
    {
        cout << "\nINVALID! Please Try Again.\n" << endl;
        circleRestart();
    }

}



//menu
void choosevoid()
{
    int choose = static_cast<int>(getNumericInput("Please Choose: \n\n[1] Find the Area of Rectangle\n[2] Find the Area of Square\n[3] Find the Area of Triangle\n[4] Find the Area of Circle\n[5] Exit\n\nEnter Selection: "));

    switch (choose)
    {
        case 1:
            rectangle();
            break;

        case 2:
            square();
            break;

        case 3:
            triangle();
            break;

        case 4:
            circle();
            break;

        case 5:
            cout << "Bye!" << endl;
            sleep(1);
            exit(0);
            break;

        default:
            cout << "ERROR! Invalid choice.\n\n";
            choosevoid();
            break;
    }
}



//start
int main()
{
    cout << "---Area Computation Program---" << endl;
    cout << "      by Emman Barrameda" << endl;
    cout << "\n         MAIN MENU\n" << endl;
    choosevoid();
}


//THIS CONSOLE PROGRAM IS TESTED ON CODEBLOCKS IDE
//Copyright 2021 emmanpbarrameda

