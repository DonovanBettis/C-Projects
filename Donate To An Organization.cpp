//  Chapter 6-10 Lab
//  Created by Donovan Bettis on 11/22/20.

#include <iostream>

using namespace std;


class Organization
{
    int orgs[4];
public:
    Organization()
    {
        for(int i=0; i<4; i++)
            orgs[i]=0;
    }
    void add(int,int);
    void update(int,int);
    void search(int);
    void display();
};
void Organization::add(int orgno,int amount)
{
    orgs[orgno-1] += amount;
    cout << "Thanks for contributing." << endl;
}
void Organization::update(int orgno,int newVal)
{
    orgs[orgno-1] = newVal;
    cout << "Updated successfully." << endl;
}
void Organization::search(int orgno)
{
    cout << "Contributions of that organization are: " << orgs[orgno-1] << endl;
}
void Organization::display()
{
    cout << "1. PTK" << endl;
    cout << "2. NTHS" << endl;
    cout << "3. MPA" << endl;
    cout << "4. OBL" << endl;
}
int main()
{
    int option;
    Organization obj;
    while(1)
        cout << "Choose one of the option:" << endl;
        cout << "1. Add" << endl;
        cout << "2. Update" << endl;
        cout << "3. Search " << endl;
        cout << "4. Exit " << endl;
        cin >> option;
        
        if(option == 1)
        {
            int amount,org;
            obj.display();
            cout << "Which organization do you want to contribute: ";
            cin >> org;
            cout << "How much do you want to contribute " << endl;
            cin >> amount;
            obj.add(org,amount);
        }
        
        else if(option == 2)
        {
            int org,newVal;
            obj.display();
            cout << "Which organization do you want to contribute: ";
            cin >> org;
            cout << "Enter the new value: ";
            cin >> newVal;
            obj.update(org,newVal);
        }
        
        else if(option == 3)
        {
            int org;
            obj.display();
            cout << "Which organization would you like to search: ";
            cin >> org;
            obj.search(org);
        }
        
        else if(option == 4)
        {
            return 0;
        }
        
        else
        {
            cout << "Please choose a valid option " << endl;
        }
}
