#include<iostream>
#include "linkedList"
#include "Stack"
#include "Queue"
using namespace std;

int main()
{

    // MyStack<int>obj;
    // obj.Push(5);
    // obj.Push(0);
    // obj.Push(50);
    // obj.Display();
    
    cout<<"------------------------Welcome to omkar's extended STL of linear Data structures---------------------";
    cout<<"\n";
    
    int iPos = 0,iChoice = 0;
    int iNo = 0;
    char ch = '\0';

    SinglyLL<int>iobj;
    SinglyLL<char>cobj;

    SinglyCL<int>Ciobj;
    SinglyCL<char>Ccobj;  

    DoublyLL <int> diobj;
    DoublyLL <char> dcobj;   

    DoublyCL <int> DCiobj;
    DoublyCL <char> DCcobj;  
    
    MyStack <int>Siobj;
    MyStack <char>Scobj;
    
    
    MyQueue <int>Qiobj;
    MyQueue <char>Qcobj;
    
    cout<<"-----------------------------------------------------------------\n";

    

        cout<<"\n-----------------------------------------------------------------\n";
        
        cout<<"1  : Insert Integer new node at First Postion : \n";
        cout<<"2  : Insert Character new node at First Postion : \n";

        cout<<"\n";
        cout<<"3  : Insert Integer new node at Last Postion : \n";
        cout<<"4  : Insert Character new node at Last Postion : \n";

        cout<<"\n";
        cout<<"5  : Insert Integer new node at Given Postion : \n";
        cout<<"6  : Insert Character new node at Given Postion : \n";

        cout<<"\n";
        cout<<"7  : Delete Integer node From First Postion : \n";
        cout<<"8  : Delete Character node From First Postion : \n";

        cout<<"\n";
        cout<<"9  : Delete Integer node From Last Postion : \n";
        cout<<"10 : Delete Character node From Last Postion : \n";

        cout<<"\n";
        cout<<"11 : Delete Integer node From Given Postion : \n";
        cout<<"12 : Delete Character node From Given Postion : \n";

        cout<<"\n";
        cout<<"13 : Display the int Contents from Linked List : \n";
        cout<<"14 : Display the char Contents from Linked List : \n";
        
        cout<<"\n";
        cout<<"15 : Exit\n";

        cout<<"-----------------------------------------------------------------\n";     

    while(1)
    {
        cout<<"Choose your Option : \n";
        cin>>iChoice;
        switch (iChoice)
        {
        case 1 : 
            cout<<"Enter the Integer data that you want to insert : \n";
            cin>>iNo;

            iobj.InsertFirst(iNo);

            Ciobj.InsertFirst(iNo);

            diobj.InsertFirst(iNo);

            DCiobj.InsertFirst(iNo);
            break;

        case 2 :
            cout<<"Enter the Character data that you want to insert : \n";
            cin>>ch;

            cobj.InsertFirst(ch);

            Ccobj.InsertFirst(ch);

            dcobj.InsertFirst(ch);

            DCcobj.InsertFirst(ch);
            break;

        case 3 :
            cout<<"Enter the Integer data that you want to insert : \n";
            cin>>iNo;

            iobj.InsertLast(iNo);

            Ciobj.InsertLast(iNo);

            diobj.InsertLast(iNo);

            DCiobj.InsertLast(iNo);
            break;

        case 4 :
            cout<<"Enter the Character data that you want to insert : \n";
            cin>>ch;

            cobj.InsertLast(ch);

            Ccobj.InsertLast(ch);

            dcobj.InsertLast(ch);

            DCcobj.InsertLast(ch);
            break;    

        case 5 :
            cout<<"Enter the Integer data that you want to insert : \n";
            cin>>iNo;

            cout<<"Enter the Position : \n";
            cin>>iPos;

            iobj.InsertAny(iNo,iPos);

            Ciobj.InsertAny(iNo,iPos);

            diobj.InsertAny(iNo,iPos);

            DCiobj.InsertAny(iNo,iPos);
            break;            

        case 6 :
            cout<<"Enter the Character data that you want to insert : \n";
            cin>>ch;

            cout<<"Enter the Position : \n";
            cin>>iPos;            

            cobj.InsertAny(ch,iPos);

            Ccobj.InsertAny(ch,iPos);

            dcobj.InsertAny(ch,iPos);

            DCcobj.InsertAny(ch,iPos);
            break;  


        case 7 :

            iobj.DeleteFirst();

            Ciobj.DeleteFirst();

            diobj.DeleteFirst();

            DCiobj.DeleteFirst();

            cout<<"First Node Delete Successfully..\n";

            break;            
        
        case 8 : 

            cobj.DeleteFirst();

            Ccobj.DeleteFirst();

            dcobj.DeleteFirst();

            DCcobj.DeleteFirst();

            cout<<"First Node Delete Successfully..\n";

            break;  

        case 9 :

            iobj.DeleteLast();

            Ciobj.DeleteLast();

            diobj.DeleteLast();

            DCiobj.DeleteLast();

            cout<<"Last Node Delete Successfully..\n";

            break;

        case 10 : 

            cobj.DeleteLast();

            Ccobj.DeleteLast();

            dcobj.DeleteLast();

            DCcobj.DeleteLast();
            cout<<"Last Node Delete Successfully..\n";

            break; 

        case 11 :

            cout<<"Enter the Position : \n";
            cin>>iPos;

            iobj.DeleteAny(iPos);

            Ciobj.DeleteAny(iPos);

            diobj.DeleteAny(iPos);

            DCiobj.DeleteAny(iPos);
            break;  

        case 12 :

            cout<<"Enter the Position : \n";
            cin>>iPos;            

            cobj.DeleteAny(iPos);

            Ccobj.DeleteAny(iPos);

            dcobj.DeleteAny(iPos);

            DCcobj.DeleteAny(iPos);
            break; 

        case 13 : 

        cout<<"\t\t\t----Nodes are---- \t\t\t\n";
        cout<<"-----------------------------------------------------------------\n";
           cout<<"\nUsing Singly Linear Linked List :\n";
           iobj.Display();
           cout<<"Number of Nodes : "<<iobj.Count()<<"\n";
           //cobj.Display();

           cout<<"\nUsing Singly Circular Linked List :\n";
           Ciobj.Display();
           cout<<"Number of Nodes : "<<Ciobj.Count()<<"\n";
           //Ccobj.Display();

           cout<<"\nUsing Doubly Linear Linked List :\n";
           diobj.Display();
           cout<<"Number of Nodes : "<<diobj.Count()<<"\n";
           //dcobj.Display();

           cout<<"\nUsing Doubly Circular Linked List :\n";
           DCiobj.Display();
           cout<<"Number of Nodes : "<<DCiobj.Count()<<"\n";
           //DCcobj.Display();  

        cout<<"\n-----------------------------------------------------------------\n";           
           break;  
        
        case 14 :

        cout<<"\t\t\t----Nodes are---- \t\t\t\n";
        cout<<"-----------------------------------------------------------------\n";
           cout<<"\nUsing Singly Linear Linked List :\n";
           //iobj.Display();
           cobj.Display();
           cout<<"Number of Nodes : "<<cobj.Count()<<"\n";

           cout<<"\nUsing Singly Circular Linked List :\n";
           //Ciobj.Display();
           Ccobj.Display();
           cout<<"Number of Nodes : "<<Ccobj.Count()<<"\n";

           cout<<"\nUsing Doubly Linear Linked List :\n";
           //diobj.Display();
           dcobj.Display();
           cout<<"\nNumber of Nodes : "<<dcobj.Count()<<"\n";

           cout<<"\nUsing Doubly Circular Linked List :\n";
           //DCiobj.Display();
           DCcobj.Display(); 
           cout<<"Number of Nodes : "<<DCcobj.Count()<<"\n";
        cout<<"\n-----------------------------------------------------------------\n";
           break;  
        case 15 :

           cout<<"\nThank You !!! For using Application... \n";
           return 0;          

        default:
            
            cout<<"Invalid Option!!!\n";
            break;
        }     
    }


    
    
    return 0;
}

