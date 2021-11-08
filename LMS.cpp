#include <iostream>
#include <stdio.h>
#include<conio.h>
using namespace std;
class library
{
    private:
        struct Node
        {
            int id;
            string name,author,publisher;
            Node *next_add;
           
        };
    public:
        Node *head=NULL;
        void menu();
        void insert();
       
};

void library :: menu()
{
    p:
   system("clear");
    int choice;
    cout<<"\n\n\t======";
    cout<<"\n1.Insert a New Record";
    cout<<"\n2.Search a record";
    cout<<"\n3. Update record";
    cout<<"\n4. Delete a record";
    cout<<"\n5. show all record";
    cout<<"\n6. Exit";
    cout<<"\nenter your choice";
    cin>>choice;
    switch(choice)
    {
        case 1:
            insert();
            break;
        case 2:
           
            break;
        case 3:
           
            break;
        case 4:
         
            break;
        case 5:
           
            break;
        case 6:
            exit(0);
        default:
            cout<<"Invalid Choice please try again";
    }
    getch();
    goto p;
   
}
void library :: insert()
{
    cout<<"okay we are here";
   
}



int main()
{
    library obj;
    obj.menu();
   
   
    cout<<"Hello World";

    return 0;
}
