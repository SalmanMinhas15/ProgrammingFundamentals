#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <cctype>
using namespace std;
string option;
int counts = 0;    // for users which have been signed up
int itemCount = 0; // chk how many products have been entered
int sug_count=0;  // chk feedback suggestions 
int empIdx = 0;
int saleIdx=0;
void headerofApp();
void menuHeader();
void setColor(int color){     //  user colors 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void resetColor(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); 
}
string menu();
void invalidChoice();
bool chkSr(string SrNo); //  chk is Sr # entered by user is integer value
void signUpHeader();
bool signUp(string name, string password, string role, string Name[], string Password[], string Role[]);
bool passwordchk(string password);
string adminInterface();          //user 1: Admin
string staffInterface();           // submenu of admin user
void employelist(string empName[], int empAge[], int empSalary[]);
void addEmploye(string empName[], int empAge[], int empSalary[]);
void removeEmploye(string empName[], int empAge[], int empSalary[], string SrNo);
string customerInterface();       // user 2 : customer
void buyProduct(string item_name[], int item_quantity[], int item_price[],string sale_name[],int sale_quantity[],int sale_total[]);
void systemRecomendation(); // System recommnneded medicines if possible .(unique feature)
void recommendMedicines(const string &name, const string &gender, const string &symptom1, const string &symptom2, const string &symptom3);
string feedback();       // feedback by user
string signIn(string name, string password, string Name[], string Password[], string Role[]);
void signInAdminheader();    // header show after sign In
void signInCustomerheader();  // header show after sign In
void enterstock(string item_name[], int item_quantity[], int item_price[]);
void removeStock(string item_name[], int item_quantity[], int item_price[], string SrNo);
void viewStock(string item_name[], int item_quantity[], int item_price[]);
void updateStock(string item_name[], int item_quantity[], int item_price[], string SrNo);
void searchStock(string item_name[], int item_quantity[], int item_price[], string search_name);
void viewfeedback(int excellent, int good, int bad,string suggestions[]);
void viewSale(string sale_name[],int sale_quantity[],int sale_total[]);
void logout();
void gotoxy(int x, int y);
main()
{
  string Name[100];
  string Password[100];
  string Role[100];
  string item_name[100];
  int item_quantity[100];
  int item_price[100];
  string empName[100];
  int empAge[100];
  int empSalary[100];
  string sale_name[100];
  int sale_quantity[100];
  int sale_total[100];
  string suggestions[100];
  string SrNo;
  int intSrNo;
  string name, password, role, SI_name, SI_password;
  string itemName;
  int itemQuantity, itemPrice;
  int excellent = 0, good = 0, bad = 0;
  system("cls");

  while (true)
  {
    system("cls");
    headerofApp();
    menuHeader();
    string menuOption = menu();
    if (menuOption == "1")    // sign up
    {
      system("cls");
      headerofApp();
      signUpHeader();
      // take input name, password, role;
      setColor(2);
      cout << "\n\tEnter Your Name: ";
      cin.ignore();
      getline(cin, name);
      while (true)
      {
        cout << "\tEnter your Password (6 characters): ";
        getline(cin, password);
        bool isPasswordValid = passwordchk(password);
        if (isPasswordValid)
        {
          while (true)
          {

            cout << "\tEnter Your role (A for Admin,C for Customer): ";
            getline(cin, role);
            if (role == "A" || role == "a" || role == "C" || role == "c")
            {
              break;
            }
            else
            {
              cout << "\tInvalid Entry ." << endl;
          Sleep(200);  
            }
          }
          break;
        }
        else
        {
          cout << "\tInvalid Password ." << endl;
          Sleep(200);
        }
      }
      bool chkSignUp = signUp(name, password, role, Name, Password, Role);
      if (chkSignUp)
      {
        Name[counts] = name;
        Password[counts] = password;
        Role[counts] = role;
        counts++;
        resetColor();
        setColor(4);
        cout << "\n\n\t\tSigned Up successfuly ...." << endl;
        resetColor();
        setColor(2);
        cout << "\t\tPress any key to continue .";
        resetColor();
        getch();
      }
      if (!chkSignUp)
      {
        setColor(4);
        cout << "\n\n\t\tThis username already exists ." << endl;
        resetColor();
        setColor(2);
        cout << "\t\tPress any key to continue ...";
        resetColor();
        getch();
      }
    }
    else if (menuOption == "2")
    {
    
      system("cls");
      headerofApp();
      
      gotoxy(10, 14);
      setColor(9);
             cout<<"\t _                _         "<<endl;
             cout<<"\t| |    ___   __ _(_)_ __    "<<endl;
             cout<<"\t| |   / _ \\ / _` | | '_ \\   "<<endl;
            cout<<"\t| |__| (_) | (_| | | | | |  "<<endl;
             cout<<"\t|_____\\___/ \\__, |_|_| |_|  "<<endl;
            cout<<"\t            |___/            "<<endl;
          resetColor();
      gotoxy(10, 23);
      setColor(2);
      cout << "Enter Your Name: ";
      cin.ignore();
      getline(cin, SI_name);
      gotoxy(10, 24);
      cout << "Enter your password: ";
      getline(cin, SI_password);
      resetColor();
      string chkSignIn = signIn(SI_name, SI_password, Name, Password, Role);
      if (chkSignIn == "Admin")
      {
        setColor(4);
        gotoxy(20, 26);
        cout << "Sign In sucsessfuly ...." << endl;
        resetColor();
        Sleep(300);
        while(true)
        {
        string adminOp = adminInterface();

        if (adminOp == "1")
        {
          while(true)
          {
          string staffOp = staffInterface();
          if (staffOp == "1")
          {
            employelist(empName, empAge, empSalary);
          }
          else if (staffOp == "2")
          {
            addEmploye(empName, empAge, empSalary);
          }
          else if (staffOp == "3")
          {
            removeEmploye(empName, empAge, empSalary, SrNo);
          }
          else if(staffOp=="4")
          {
            break;
          }
          else if (staffOp == "5")
          {
            return 0;
          }
          }
        }
        else if (adminOp == "2")
        {
          enterstock(item_name, item_quantity, item_price);
        }
        else if (adminOp == "3")
        {
          viewStock(item_name, item_quantity, item_price);
        }
        else if (adminOp == "4")
        {
          removeStock(item_name, item_quantity, item_price, SrNo);
        }
        else if (adminOp == "5")
        {
          updateStock(item_name, item_quantity, item_price, SrNo);
        }
        else if (adminOp == "6")
        {
          string search_name;
          system("cls");
          headerofApp();
          signInAdminheader();
          setColor(11);
          cout << "\n\n\tMain Menu >> Search Stock (Medicine) >>" << endl;
          resetColor();
          setColor(2);
          cout << "\n\tEnter the name of Medicine :";
          getline(cin, search_name);
          searchStock(item_name, item_quantity, item_price, search_name);
          resetColor();
        }
        else if(adminOp=="7")
        {
          buyProduct(item_name,item_quantity,item_price,sale_name,sale_quantity, sale_total); 
        }
        else if (adminOp == "8")
        {
          viewfeedback(excellent, good, bad,suggestions);
        }
        else if (adminOp=="9")
        {
          viewSale(sale_name, sale_quantity,sale_total);
        }
        else if(adminOp=="10")
        {
          logout();
          break;
        }
        else if (adminOp == "11")
        {
          return 0;
        }
      }
      }
      else if (chkSignIn == "Customer")
      {
        Sleep(200);
        gotoxy(20, 26);
        setColor(4);
        cout << "Sign In sucsessfuly ...." << endl;
        resetColor();
        Sleep(300);
        gotoxy(0, 30);
        while(true)
        {
        string customer_Op = customerInterface();
        if (customer_Op == "1")
        {
          viewStock(item_name, item_quantity, item_price);
        }
        else if (customer_Op == "2")
        {
          buyProduct(item_name,item_quantity,item_price,sale_name,sale_quantity, sale_total);
        }
        else if (customer_Op == "3")
        {
          systemRecomendation();
        }
        else if (customer_Op == "4")
        {
          while(true)
          {
          string feedback_result = feedback();
          setColor(2);
          if (feedback_result == "1")
          {
            excellent++;
            cout << "\n\tThanks for your Feedback ." << endl;
          cout << "\tPress any key to move back .";
          getch();
          break;
          }
          else if (feedback_result == "2")
          {
            good++;
            cout << "\n\tThanks for your Feedback ." << endl;
          cout << "\tPress any key to move back .";
          getch();
          break;
          }
          else if (feedback_result == "3")
          {
            bad++;
            cout << "\n\tThanks for your Feedback ." << endl;
          cout << "\tPress any key to move back .";
          getch();
          break;
          }
          else if(feedback_result=="4")
          {
            cout<<"\n\tEnter your message : ";
            getline(cin,suggestions[sug_count]);
            sug_count++;
            cout<<"\n\n\tYour Feedback has been submitted ."<<endl;
            cout<<"\tPress any key to continue .";
            getch();
          }
          else if(feedback_result=="5")
          {
            break;
          }
          else if (feedback_result == "6")
          {
            return 0;
          }
          }
          resetColor();
        }
        else if(customer_Op=="5")
        {
          logout();
          break;
        }
        else if (customer_Op == "6")
        {
          return 0;
        }
      }
      }
      else if (chkSignIn == "invalid")
      {
        setColor(4);
        cout << "\n\t\tYou are not registered .\n\t\tplease sign up first ." << endl;
        resetColor();
        setColor(2);
        cout << "\t\tPress any key to continue ....";
        resetColor();
        getch();
      }
      else if (chkSignIn == "password_incorrect")
      {
        setColor(4);
        gotoxy(10, 27);
        cout << "  Incorrect password" << endl;
        resetColor();
        Sleep(300);
        gotoxy(10, 28);
        setColor(2);
        cout << "Press any key to continue .";
        resetColor();
        getch();
      }
    }
    else if (menuOption == "3")
    {
      return 0;
    }
    else
    {
      gotoxy(73, 25);
      setColor(4);
      cout << "Invalid Choice .";
      resetColor();
      Sleep(300);
    }
  }
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void invalidChoice()
{
  setColor(4);
  cout << "\n\tInvalid Choice .";
  Sleep(300);
  resetColor();
}
bool chkSr(string SrNo)
{
  bool SrNo_result = true;
  for (int i = 0; SrNo[i] != '\0'; i++)
  {
    if (!isdigit(SrNo[i]))
    {
      SrNo_result = false;
    }
  }
  return SrNo_result;
}
void headerofApp()
{
  setColor(11); 
    std::cout << "\n\n\n\n\n";
     cout<<"     \t\t\t\t\t\t _    ____       ____  _   _    _    ____  __  __    _    ______   __    "<<endl;
          cout<<"\t\t\t\t\t\t   / \\  |  _ \\     |  _ \\| | | |  / \\  |  _ \\|  \\/  |  / \\  / ___\\ \\ / /      "<<endl;
          cout<<"\t\t\t\t\t\t  / _ \\ | |_) |    | |_) | |_| | / _ \\ | |_) | |\\/| | / _ \\| |    \\ V /     "<<endl;
          cout<<"\t\t\t\t\t\t / ___ \\|  _ <     |  __/|  _  |/ ___ \\|  _ <| |  | |/ ___ \\ |___  | |      "<<endl;
          cout<<"\t\t\t\t\t\t/_/   \\_\\_| \\_\\    |_|   |_| |_/_/   \\_\\_| \\_\\_|  |_/_/   \\_\\____| |_|      "<<endl;
 
 resetColor();
}
string  menu()
{
  setColor(3);
  string option;
  gotoxy(67, 18);
  cout << "1. Sign Up." << endl;
  gotoxy(67, 20);
  cout << "2. Sign In." << endl;
  gotoxy(67, 22);
  cout << "3. Exit." << endl;
  gotoxy(67, 24);
  cout << "Your Option ... ";
  resetColor();
  setColor(6);
  getline(cin, option);
  resetColor();
  return option;
}
void menuHeader()
{
  int x = 49;
  int y = 14;
  setColor(1);
  gotoxy(x, y = y + 1);
  cout << "   _________________________________________________________________" << endl;
  gotoxy(x, y = y + 1);
  cout << "      __________________________________________________________    " << endl;
  gotoxy(x, y = y + 1);
  cout << "                                                                    " << endl;
  gotoxy(x, y = y + 1);
  cout << "                                                                    " << endl;
  gotoxy(x, y = y + 1);
  cout << "                                                                    " << endl;
  gotoxy(x, y = y + 1);
  cout << "                                                                    " << endl;
  gotoxy(x, y = y + 1);
  cout << "                                                                    " << endl;
  gotoxy(x, y = y + 1);
  cout << "                                                                    " << endl;
  gotoxy(x, y = y + 1);
  cout << "                                                                    " << endl;
  gotoxy(x, y = y + 1);
  cout << "                                                                    " << endl;
  gotoxy(x, y = y + 1);
  cout << "                                                                    " << endl;
 gotoxy(x, y = y + 1);
  cout << "      __________________________________________________________    " << endl; 
  gotoxy(x, y = y + 1);
  cout << "   _________________________________________________________________" << endl;

  resetColor();
}
void signUpHeader()
{
  setColor(6);
  gotoxy(58, 14);
  cout << "-----------------------------------------------------" << endl;
  gotoxy(58, 15);
  cout << ".              Welcome to AR PHARMACY               ." << endl;
  gotoxy(58, 16);
  cout << "-----------------------------------------------------" << endl;
  resetColor();
  cout <<endl;
  setColor(9);
        cout<<"\t ____  _                  _   _ ____       "<<endl;
        cout<<"\t/ ___|(_) __ _ _ __      | | | |  _ \\      "<<endl;
        cout<<"\t\\___ \\| |/ _` | '_ \\     | | | | |_) |     "<<endl;
        cout<<"\t ___) | | (_| | | | |    | |_| |  __/      "<<endl;
        cout<<"\t|____/|_|\\__, |_| |_|     \\___/|_|         "<<endl;
        cout<<"\t         |___/                             "<<endl;      
                       
  resetColor();\
       cout<< endl;
}
bool passwordchk(string password)
{
  if (password.length() == 6)
  {
    return true;
  }
  else
  {
    return false;
  }
}
bool signUp(string name, string password, string role, string Name[], string Password[], string Role[])
{
  for (int i = 0; i <= counts; i++)
  {
    if (name == Name[i])
    {
      return false;
      break;
    }
  }
  return true;
}
void signInAdminheader()
{
  setColor(6);
  gotoxy(58, 15);
  cout << "-----------------------------------------------------" << endl;
  gotoxy(58, 16);
  cout << ".                      Admin                        ." << endl;
  gotoxy(58, 17);
  cout << "-----------------------------------------------------" << endl;
  resetColor();
}
void signInCustomerheader()
{
  setColor(6);
  gotoxy(58, 15);
  cout << "-----------------------------------------------------" << endl;
  gotoxy(58, 16);
  cout << ".                     Customer                      ." << endl;
  gotoxy(58, 17);
  cout << "-----------------------------------------------------" << endl;
  resetColor();
}
string signIn(string SI_name, string SI_password, string Name[], string Password[], string Role[])
{
  for (int i = 0; i < counts; i++)
  {
    if (SI_name == Name[i] && SI_password != Password[i])
    {
      return "password_incorrect";
      break;
    }
    else if (SI_name == Name[i] && SI_password == Password[i])
    {
      if (Role[i] == "A" || Role[i] == "a")
      {
        return "Admin";
        break;
      }
      else if (Role[i] == "C" || Role[i] == "c")
      {
        return "Customer";
        break;
      }
    }
  }
  return "invalid";
}
string adminInterface()
{
  while (true)
  {
    system("cls");
    headerofApp();
    signInAdminheader();
    setColor(11);
    cout<<"\n\n\tMain Menu >>\n"<<endl;
    resetColor();
    setColor(2);
    cout<<"\t=========================================\n"<<endl;
    cout << "\t  1. Staff Management" << endl;
    cout << "\t  2. Add stock (Products): " << endl;
    cout << "\t  3. View stock: " << endl;
    cout << "\t  4. Remove stock: " << endl;
    cout << "\t  5. Update stock: " << endl;
    cout << "\t  6. Search stock: " << endl;
    cout << "\t  7. Customer Order: " << endl;
    cout << "\t  8. View Feedback of Customers: " << endl;
    cout << "\t  9. View Sale  " << endl;
    cout << "\t  10. Logout  " << endl;
    cout << "\t  11. Exit  \n" << endl;
    cout<<"\t=========================================\n"<<endl;
    cout << "\t         Your option ...";
    getline(cin, option);
    resetColor();
    if (option == "1" || option == "2" || option == "3" || option == "4" || option == "5" || option == "6" || option == "7" || option == "8" || option =="10" || option=="9" || option=="11")
    {
      return option;
      break;
    }
    else
    {
      invalidChoice();
    }
  }
}
string staffInterface()
{
  while (true)
  {
    system("cls");
    headerofApp();
    signInAdminheader();
    setColor(11);
    cout << "\n\n\t\tMain Menu >> Staff Management >>\n\n"<<endl;
    resetColor();
    setColor(4);
    cout<<"\t\t=======================================\n"<<endl;
    resetColor();
    setColor(6);
    cout << "\t\t\t1. View Employe list" << endl;
    cout << "\t\t\t2. Add Employe" << endl;
    cout << "\t\t\t3. Remove Employe" << endl;
    cout << "\t\t\t4. Go back to Main Menu " << endl;
    cout << "\t\t\t5. Exit\n" << endl;
    resetColor();
    setColor(4);
    cout<<"\t\t======================================\n"<<endl;
    resetColor();
    setColor(6);
    cout << "\t\t\t   Option .  ";
    getline(cin, option);
    resetColor();
    if (option == "1" || option == "2" || option == "3" || option == "4" || option=="5")
    {
      return option;
      break;
    }
    else
    {
      setColor(4);
      cout<<"\n\t\t\t    Invalid Choice ";
      resetColor();
      Sleep(300);
    }
  }
}
void employelist(string empName[], int empAge[], int empSalary[])
{
  system("cls");
  headerofApp();
  signInAdminheader();
  setColor(11);
  cout << "\n\n\t\tMain Menu >> Staff Management >> View Employe List >>\n\n";
  resetColor();
  if (empIdx == 0)
  {
    setColor(4);
    cout << "\n\t\t\tNo Employes are in Lists ." << endl;
    resetColor();
  }
  if (empIdx != 0)
  {
    setColor(4);
    cout << "\t\tSr#\t\tEmploye Name\t\tAge\t\tSalary\n\n";
    resetColor();
    int y = 25;
    for (int i = 0; i < empIdx; i++)
    {
      setColor(3);
      gotoxy(16, y);
      cout << i + 1;
      gotoxy(32, y);
      cout << empName[i];
      gotoxy(56, y);
      cout << empAge[i];
      gotoxy(72, y);
      cout << empSalary[i];
      y++;
      resetColor();
    }
  }
  setColor(2);
  cout << "\n\n\t\tPress any key to back main menu .";
  resetColor();
  getch();
}
void addEmploye(string empName[], int empAge[], int empSalary[])
{
  system("cls");
  headerofApp();
  signInAdminheader();
  setColor(11);
  cout<<"\n\n\tMain Menu >> Staff Management >> Add Employe >> "<<endl;
  resetColor();
  string emp_age, emp_salary;
  setColor(2);
  cout << "\n\tEnter Employe name :";
  getline(cin, empName[empIdx]);

  while (true)
  {
    bool ageResult = true;
    cout << "\tEnter Employ Age: ";
    getline(cin, emp_age);
    for (int i = 0; emp_age[i] != '\0'; i++)
    {
      if (!isdigit(emp_age[i]))
      {
        ageResult = false;
      }
    }
    if (ageResult)
    {
      int intAge = stoll(emp_age);
      empAge[empIdx] = intAge;
      break;
    }
    if (!ageResult)
    {
      cout << "\tInvalid Entry .\n";
    }
  }
  while (true)
  {
    bool salaryResult = true;
    cout << "\tEnter Employe Salary: ";
    getline(cin, emp_salary);
    for (int i = 0; emp_salary[i] != '\0'; i++)
    {
      if (!isdigit(emp_salary[i]))
      {
        salaryResult = false;
      }
    }
    if (salaryResult)
    {
      int intSalary = stoll(emp_salary);
      empSalary[empIdx] = intSalary;
      break;
    }
    if (!salaryResult)
    {
      cout << "\tInvalid Entry .\n";
    }
  }
  empIdx++;
  cout << "\n\n\tEmploye added successfuly ..." << endl;
  cout << "\tPress any key to move main menu .";
  getch();
  resetColor();
}
void removeEmploye(string empName[], int empAge[], int empSalary[], string SrNo)
{
  int intSrNo;
  system("cls");
  headerofApp();
  signInAdminheader();
  setColor(11);
  cout << "\n\n\t\tMain Menu >> Staff Management >> Remove Employe >>\n\n";
  resetColor();
  setColor(6);
  if (empIdx == 0)
  {
    cout << "\n\t\t\tNo Employes are in Lists .\n\n"
         << endl;
  }
  if (empIdx != 0)
  {
    cout << "\t\tSr#\t\tEmploye Name\t\tAge\t\tSalary\n\n";
    int y = 25;
    for (int i = 0; i < empIdx; i++)
    {
      gotoxy(16, y);
      cout << i + 1;
      gotoxy(32, y);
      cout << empName[i];
      gotoxy(56, y);
      cout << empAge[i];
      gotoxy(72, y);
      cout << empSalary[i];
      y++;
    }
    resetColor();
    setColor(2);
    cout << "\n\n\t\tEnter serial number of Employe which you want to remove.";
    getline(cin, SrNo);
    bool isSrNo = chkSr(SrNo);
    if (!isSrNo)
    {
      cout << "\n\t\tInvalid Serial No .\n";
      Sleep(500);
    }
    if (isSrNo)
    {
      intSrNo = stoll(SrNo);
      if (intSrNo > 0 && intSrNo <= empIdx)
      {
        empName[intSrNo - 1] = empName[intSrNo];
        empAge[intSrNo - 1] = empAge[intSrNo];
        empSalary[intSrNo - 1] = empSalary[intSrNo];
        empIdx--;
        cout << "\n\n\t\tEmploye removed successfuly ." << endl;
      }
      else
      {
        cout << "\n\t\tInvalid Serial No .\n";
        Sleep(500);
      }
    }
  }

  cout << "\t\tPress any key to back main menu .";
  getch();
  resetColor();
}
string customerInterface()
{
  while (true)
  {
    system("cls");
    headerofApp();
    signInCustomerheader();
    setColor(11);
    cout<<"\n\n\tMain Menu >>\n"<<endl;
    resetColor();
    setColor(2);
    cout<<"\t======================================\n"<<endl;
    cout << "\t  1. View Stock " << endl;
    cout << "\t  2. Buy Product (Medicines)" << endl;
    cout << "\t  3. System Recommended Medicine" << endl;
    cout << "\t  4. Feedback" << endl;
    cout << "\t  5. Logout " << endl;
    cout << "\t  6. Exit\n" << endl;
    cout<<"\t======================================\n"<<endl;
    cout << "\n\t  Your Option . ";
    getline(cin, option);
    resetColor();
    if (option == "1" || option == "2" || option == "3" || option == "4" || option == "5" || option=="6")
    {
      return option;
      break;
    }
    else
    {
      invalidChoice();
    }
  }
}
void buyProduct(string item_name[], int item_quantity[], int item_price[],string sale_name[],int sale_quantity[],int sale_total[])
{
  system("cls");
  headerofApp();
  signInCustomerheader();
  string prod_name, prod_quan;
  setColor(11);
  cout << "\n\n\tMain Menu >> Buy Product >>" << endl;
  resetColor();
  setColor(2);
  cout << "\n\tEnter Product (Medicine) Name : ";
  getline(cin, prod_name);
  bool chk_name=false;
  for(int i=0;i<itemCount;i++)
  {
    if(prod_name==item_name[i])
    {
      chk_name=true;
      break;
    }
  }
  if(!chk_name)
  {
    cout << "\n\n\tSorry this Medicine is not avalaible in Stock ." << endl;
    cout << "\tPress any key to continue .";
    getch();
  }
  if(itemCount!=0)
  {
  for (int i = 0; i < itemCount; i++)
  {
    if (prod_name == item_name[i])
    {
      while (true)
      {
        bool quant_Result = true;
        cout << "\tEnter Quantity : ";
        getline(cin, prod_quan);
        for (int i = 0; prod_quan[i] != '\0'; i++)
        {
          if (!isdigit(prod_quan[i]))
          {
            quant_Result = false;
          }
        }
        if (quant_Result)
        {
          int buy_quantity = stoll(prod_quan);
          
            if (buy_quantity <= item_quantity[i])
            {
              char ch;
              int ntotal = buy_quantity * item_price[i];
              cout << "\n\tTotal : " << ntotal << " /"<< endl;
              cout << "\tEnter 1 to Buy Medicine . " << endl;
              cout << "\tPress any key to exit.";
              ch = getch();
              if (ch == '1')
              {
                cout << "\n\n\tThanks for buying Medicine .\n\tWish you a nice day " << endl;
                item_quantity[i] = item_quantity[i] - buy_quantity;
                sale_name[saleIdx]=item_name[i];
                sale_quantity[saleIdx]=buy_quantity;
                sale_total[saleIdx]=ntotal;
                saleIdx++;
                cout << "\tPress any key to move main menu .";
                getch();
                break;
              }
              else
              {
                exit(0);
              }
              
            }
            else
            {
              cout << "\n\n\tSorry ! Maximum available Stock of this Medicine is " << item_quantity[i] << " ." << endl;
              cout << "\tPress any key to back mainmenu .";
              getch();
              break;
            }
      
          break;
        }
        if (!quant_Result)
        {
          cout << "\tInvalid Entry .\n";
        }
      }
      break;
    }
  }
  }
  resetColor();
}

void systemRecomendation()
{
  system("cls");
  headerofApp();
  signInCustomerheader();
  setColor(11);
  cout << "\n\n\tMain Menu >> System Recomanded Medicines >>\n"<< endl;
  resetColor();
  setColor(2);
  string customerName, customerGender, s1, s2, s3;
  cout << "\tEnter your name: ";
  getline(cin, customerName);
  cout << "\tEnter your gender: ";
  getline(cin, customerGender);
  cout << "\tEnter your Disease Symptoms (3)...: " << endl;
  cout << "\t1 .";
  getline(cin, s1);
  cout << "\t2 .";
  getline(cin, s2);
  cout << "\t3 .";
  getline(cin, s3);
  cout << "\n\n";
  recommendMedicines(customerName, customerGender, s1, s2, s3);
  cout << "\n\n\tPress any key to back main menu .";
  getch();
  resetColor();
}
void recommendMedicines(const string &name, const string &gender, const string &s1, const string &s2, const string &s3)
{
  // Conditions based on symptoms
  if (s1 == "headache" && s2 == "body pain" && s3 == "dizziness")
  {
    cout << "\tDear " << name << ", you are recommended following medicines:\n";
    cout << "\t1. Panadol\n\t2. Nims\n\t3. Disprene";
  }
  else if (s1 == "fever" && s2 == "flu" && s3 == "high temperature")
  {
    cout << "\tDear " << name << ", you are recommended following medicines:\n";
    cout << "\t1. Panadol\n\t2. Boflam\n\t3. Disprene";
  }
  else if (s1 == "fever" && s2 == "headache" && s3 == "flu")
  {
    cout << "\tDear " << name << ", you are recommended following medicines:\n";
    cout << "\t1. Besoquin\n\t2. Nims\n\t3. Tonoflex";
  }
  else if (s1 == "cough" && s2 == "sore throat" && s3 == "chest pain")
  {
    cout << "\tDear " << name << ", you are recommended following medicines:\n";
    cout << "\t1. Cough Syrup\n\t2. Throat Lozenges";
  }
  else if (s1 == "stomachache" && s2 == "nausea" && s3 == "vomiting")
  {
    cout << "\tDear " << name << ", you are recommended following medicines:\n";
    cout << "\t1. Antacid\n\t2. Antiemetic";
  }

  // Add more conditions based on symptoms and age as needed

  else
  {
    cout << "\tSorry, I am unable to recommend for you. Please consult a doctor.";
  }
}
string feedback()
{
  while (true)
  {
    system("cls");
    headerofApp();
    signInCustomerheader();
    setColor(11);
    cout << "\n\n\tMain Menu >> Feedback >>" << endl;
    resetColor();
    setColor(6);
    cout << "\n\t1. Excellent " << endl;
    cout << "\t2. Good " << endl;
    cout << "\t3. Bad " << endl;
    cout << "\t4. Suggestions " << endl;
    cout << "\t5. Main menu "<<endl;
    cout << "\t6. Exit      \n\n\t\t  ";
    getline(cin, option);
    resetColor();
    if (option == "1" || option == "2" || option == "3" || option == "4" || option=="5" || option=="6")
    {
      return option;
      break;
    }
    else
    {
      invalidChoice();
    }
  }
}
void enterstock(string item_name[], int item_quantity[], int item_price[])
{
  system("cls");
  headerofApp();
  signInAdminheader();
  setColor(11);
  cout << "\n\n\tMain Menu >> Add Stock (Medicines) >>" << endl;
  resetColor();
  string item_quan, item_p,string_item_name;
  setColor(2);
  cout << "\n\n\t\t1. Enter product Name: ";
  getline(cin, string_item_name);
  item_name[itemCount]=string_item_name;
  while (true)
  {
    bool quant_Result = true;
    cout << "\t\t2. Enter product quantity: ";
    getline(cin, item_quan);
    for (int i = 0; item_quan[i] != '\0'; i++)
    {
      if (!isdigit(item_quan[i]))
      {
        quant_Result = false;
      }
    }
    if (quant_Result)
    {
      int quantity = stoll(item_quan);
      item_quantity[itemCount] = quantity;
      break;
    }
    if (!quant_Result)
    {
      cout << "\t\tInvalid Entry .\n";
    }
  }
  while (true)
  {
    bool p_Result = true;
    cout << "\t\t2. Enter product Price: ";
    getline(cin, item_p);
    for (int i = 0; item_p[i] != '\0'; i++)
    {
      if (!isdigit(item_p[i]))
      {
        p_Result = false;
        break;
      }
    }
    if (p_Result)
    {
      int price = stoll(item_p);
      item_price[itemCount] = price;
      break;
    }
    if (!p_Result)
    {
      cout << "\t\tInvalid Entry .\n";
    }
  }
  itemCount++;
  Sleep(200);
  cout << "\n\n\t\tProduct added to Stock.\n";
  cout << "\t\tPress any key to back main menu." << endl;
  getch();
  resetColor();
}
void removeStock(string item_name[], int item_quantity[], int item_price[], string SrNo)
{
  int intSrNo;
  system("cls");
  headerofApp();
  signInAdminheader();
  setColor(11);
  cout << "\n\n\t\tMain Menu >> Remove Stock >>\n\n";
  resetColor();
  setColor(6);
  if (itemCount == 0)
  {
    cout << "\t\t\tNo Avalaible Stock ." << endl;
  }
  else if (itemCount != 0)
  {
    cout << "\t\tSr#\t\tDrug Name\t\tQuantity\t\tPrice\n\n";
    int y = 25;
    for (int i = 0; i < itemCount; i++)
    {
      gotoxy(16, y);
      cout << i + 1;
      gotoxy(32, y);
      cout << item_name[i];
      gotoxy(56, y);
      cout << item_quantity[i];
      gotoxy(80, y);
      cout << item_price[i];
      y++;
    }
    resetColor();
    setColor(2);
    cout << "\n\n\t\tEnter Serial number of Product which you want to remove :";
    getline(cin, SrNo);
    bool isSrNo = chkSr(SrNo);
    if (!isSrNo)
    {
      cout << "\n\t\tInvalid Serial No .\n";
      Sleep(500);
    }
    if (isSrNo)
    {
      intSrNo = stoll(SrNo);
      if (intSrNo > 0 && intSrNo <= itemCount)
      {
        for (int i = 0; i < itemCount; i++)
        {
          if (intSrNo == i + 1)
          {
            item_name[i] = item_name[i + 1];
            item_quantity[i] = item_quantity[i + 1];
            item_price[i] = item_price[i + 1];
            itemCount--;
          }
        }
        cout << "\n\n\t\tItem removed ." << endl;
      }
      else
      {
        cout << "\n\t\tInvalid Choice .";
      }
    }
  }
  cout << "\n\n\t\tPress any key to back main menu .";
  getch();
  resetColor();
}
void viewStock(string item_name[], int item_quantity[], int item_price[])
{
  system("cls");
  headerofApp();
  signInAdminheader();
  setColor(11);
  cout << "\n\n\t\tMain Menu >> View Stock >>\n\n";
  resetColor();
  setColor(6);
  if (itemCount == 0)
  {
    cout << "\t\t\tNo Avalaible Stock ." << endl;
  }
  else if (itemCount != 0)
  {
    cout << "\t\tSr#\t\tDrug Name\t\tQuantity\t\tPrice\n\n";
    int y = 25;
    for (int i = 0; i < itemCount; i++)
    {
      gotoxy(16, y);
      cout << i + 1;
      gotoxy(32, y);
      cout << item_name[i];
      gotoxy(56, y);
      cout << item_quantity[i];
      gotoxy(80, y);
      cout << item_price[i];
      y++;
    }
  }
  resetColor();
  setColor(2);
  cout << "\n\n\t\tPress any key to move main menu .";
  getch();
  resetColor();
}
void updateStock(string item_name[], int item_quantity[], int item_price[], string SrNo)
{
  int intSrNo;
  string new_name;
  string string_quantity, string_price;
  system("cls");
  headerofApp();
  signInAdminheader();
  setColor(11);
  cout << "\n\n\t\tMain Menu >> Update Stock >>\n\n";
  resetColor();
  setColor(6);
  if (itemCount == 0)
  {
    cout << "\t\t\tNo Avalaible Stock ." << endl;
  }
  else if (itemCount != 0)
  {
    cout << "\t\tSr#\t\tDrug Name\t\tQuantity\t\tPrice\n\n";
    int y = 25;
    for (int i = 0; i < itemCount; i++)
    {
      gotoxy(16, y);
      cout << i + 1;
      gotoxy(32, y);
      cout << item_name[i];
      gotoxy(56, y);
      cout << item_quantity[i];
      gotoxy(80, y);
      cout << item_price[i];
      y++;
    }
    resetColor();
    setColor(2);
    cout << "\n\n\t\tEnter serial # of Drug to Update :";
    getline(cin, SrNo);
    bool isSrNo = chkSr(SrNo);
    if (!isSrNo)
    {
      cout << "\n\t\tInvalid Serial No .\n";
      Sleep(500);
    }
    if (isSrNo)
    {
      intSrNo = stoi(SrNo);
      if (intSrNo > 0 && intSrNo <= itemCount)
      {
        cout << "\n\t\tEnter New Name of Drug :";
        getline(cin, new_name);
        item_name[intSrNo - 1] = new_name;
        while (true)
        {
          cout << "\t\tEnter New Quantity of Drug :";
          getline(cin, string_quantity);
          bool quant_Result = true;
          for (int i = 0; string_quantity[i] != '\0'; i++)
          {
            if (!isdigit(string_quantity[i]))
            {
              quant_Result = false;
            }
          }
          if (quant_Result)
          {
            int quantity = stoll(string_quantity);
            item_quantity[intSrNo - 1] = quantity;
            break;
          }
          if (!quant_Result)
          {
            cout << "\t\tInvalid Entry .\n";
          }
        }
        while (true)
        {
          cout << "\t\tEnter New Price of Drug :";
          getline(cin, string_price);
          bool price_Result = true;
          for (int i = 0; string_price[i] != '\0'; i++)
          {
            if (!isdigit(string_price[i]))
            {
              price_Result = false;
            }
          }
          if (price_Result)
          {
            int price = stoll(string_price);
            item_price[intSrNo - 1] = price;
            break;
          }
          if (!price_Result)
          {
            cout << "\t\tInvalid Entry .\n";
          }
        }
        cout << "\n\t\tStock Updated .";
      }
      else
      {
        cout << "\n\n\t\tInvalid Choice .";
      }
    }
  }

  cout << "\n\n\t\tPress any key to back main menu .";
  getch();
  resetColor();
}
void searchStock(string item_name[], int item_quantity[], int item_price[], string search_name)
{
  bool result = false;
  for (int i = 0; i < itemCount; i++)
  {
    if (search_name == item_name[i])
    {
      cout << "\n\tYes ! " << item_name[i] << " is in Stock ." << endl;
      cout << "\tThe quantity is " << item_quantity[i] << " and Price of one tablet is " << item_price[i] << " ." << endl;
      result = true;
      break;
    }
  }
  if (result)
  {
    cout << "\n";
  }
  else
  {
    cout << "\n\t" << search_name << " not found in Stock ." << endl;
  }
  cout << "\n\n\tPress any key to back main menu .";
  getch();
}
void viewfeedback(int excellent, int good, int bad,string suggestions[])
{
  system("cls");
  headerofApp();
  signInAdminheader();
  setColor(11);
  cout << "\n\n\tMain Menu >> View Feedback >>" << endl;
  resetColor();
  setColor(6);
  if(excellent==0 && good==0 && bad==0 && sug_count==0)
  {
    cout<<"\n\tNo Feedback yet ."<<endl;
  }
  else 
  {
  cout << "\n\tExcellent : " << excellent << endl;
  cout << "\tGood      : " << good << endl;
  cout << "\tBad       : " << bad << endl;
  }
  cout<<"\n\tSuggestions : \n"<<endl;
  for(int i=0;i<sug_count;i++)
  {
    cout<<"\t"<<i+1<<". "<<suggestions[i]<<endl;
  }
  resetColor();
  setColor(2);
  cout << "\n\tPress any key to back main menu .";
  getch();
  resetColor();
}
void viewSale(string sale_name[],int sale_quantity[],int sale_total[]){
  system("cls");
  headerofApp();
  signInAdminheader();
  setColor(11);
  cout<<"\n\n\tMain Menu >> View Sale >>\n"<<endl;
  resetColor();
  setColor(6);
  if (saleIdx == 0)
  {
    cout << "\t\t\tNo Sale Record ." << endl;
  }
  else if(saleIdx!=0)
  {
  cout << "\t\tSr#\t\tDrug Name\t\tQuantity\t\tTotal\n\n";
  int y = 25;
    for (int i = 0; i < saleIdx; i++)
    {
      gotoxy(16, y);
      cout << i + 1;
      gotoxy(32, y);
      cout << sale_name[i];
      gotoxy(56, y);
      cout << sale_quantity[i];
      gotoxy(80, y);
      cout << sale_total[i];
      y++;
    }
  }
  resetColor();
  setColor(2);
    cout<<"\n\n\tPress any key to main menu . ";
    getch();
    resetColor();
}
void logout(){
  setColor(6);
          cout<<"\n\t\tLoging out";
          for(int i=0;i<5;i++)
          {
            cout<<". ";
            Sleep(200);
          }
          resetColor();
}