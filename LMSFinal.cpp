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
            Node *next_add=NULL;
        };
    public:
        Node *head=NULL;
        void menu();
        void insert();
        void search();
        void update();
         Node *search_supporting(int id)
        {
            if(head==NULL)
            {
            
                return NULL;
            }
            else
            {
                
            
            Node *temp=head;
            while(temp!= NULL)
            {
                if(id==temp->id)
                {
                    cout<<"Id found in search_supporting";
                    
                    return temp;
                }
                temp=temp->next_add;
            }
            return NULL;
            }
        }
       
};

void library::update()
{
     system("clear");
    int id;
    cout<<"\n\n\t\t\t=========================================================";
    cout<<"\n\n\t\t\t================LIBRARY MANAGEMENT SYSTEM================";
    cout<<"\n\n\t\t\t=========================================================";
    if(head==NULL)
    {
        cout<<"No Record exist to update..........";
    }
    else
    {
        j:
        cout<<"Update book details";
        cout<<"Book id : ";
        cin>>id;
         if(true)
        {
                cout<<"Invalid Id does not exist!!";
                goto j;
        }
        else
        {
            Node* temp=head;
            while(temp->id != id)
            {
                temp=temp->next_add;
            }
            
        }
    }
}
void library::search()
{
    system("clear");
    int id;
    cout<<"\n\n\t\t\t=========================================================";
    cout<<"\n\n\t\t\t================LIBRARY MANAGEMENT SYSTEM================";
    cout<<"\n\n\t\t\t=========================================================";
    if(head==NULL)
    {
        cout<<"\n\n Linked List is Empty............";
        
    }
    else
    {
        cout<<"\n\n Book ID:";
        cin>>id;
        Node *ptr = search_supporting(id);
        if(ptr==0)
        {
            cout<<"Invalid Id Enetered...................!";
        }
        else
        {
                system("clear");
                cout<<"\n\n\t\t\t=========================================================";
                cout<<"\n\n\t\t\t================LIBRARY MANAGEMENT SYSTEM================";
                cout<<"\n\n\t\t\t=========================================================";
                cout<<"\n\n Book id : "<<ptr->id;
                cout<<"\n\n Book Name : "<<ptr->name;
                cout<<"\n\n Author Name : "<<ptr->author;
                cout<<"\n\n Publisher Name : "<<ptr->publisher;
               
            }
           
            
        }
    
}

void library :: menu()
{
    p:
  
    int choice;
     cout<<"\n\n\t\t\t=========================================================";
    cout<<"\n\n\t\t\t================LIBRARY MANAGEMENT SYSTEM================";
    cout<<"\n\n\t\t\t=========================================================";
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
            search();
           
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
    
    cout<<"\n\n\t\t\t=========================================================";
    cout<<"\n\n\t\t\t================LIBRARY MANAGEMENT SYSTEM================";
    cout<<"\n\n\t\t\t=========================================================";
    Node *temp_node = new Node;
    q:
    cout<<"\n\nBook Id : ";
    cin>>temp_node->id;
    cout<<"\n\nVerifying Id";
    Node *ptr=search_supporting(temp_node->id);
    
    if(ptr!=0)
    {
        cout<<"\n\nInvalid Id alreay exist !!";
        goto q;
    }
    cout<<"Valid Id!!..continue filling details";
    cout<<"Name : ";
    cin>>temp_node->name;
    cout<<" Author Name : ";
    cin>>temp_node->author;
    cout<<" Publisher name: ";
    cin>>temp_node->publisher;
    temp_node->next_add=NULL;
    if(head==NULL)
    {
        cout<<"head Null";
        head=temp_node;
    }
    else
    {
        Node *ptr=head;
        while(ptr-> next_add != NULL)
        {
           
            ptr =ptr->next_add;
        }
        ptr->next_add=temp_node;
    }
    cout<<"Record added successfully........................";
}



int main()
{
    library obj;
    obj.menu();
    return 0;
}
