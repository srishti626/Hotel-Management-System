#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;
    //quantity
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
    //food items sold out
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
    //total price of items
    int total_rooms=0,total_pasta=0,total_burger=0,total_noodles=0,total_shake=0,total_chicken=0;

    cout<<"\n\t quantity of items we have in hotel";
    cout<<"\n rooms available";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta";
    cin>>Qpasta;
    cout<<"\n Quantity of burger";
    cin>>Qburger;
    cout<<"\n Quantity of noodles";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake";
    cin>>Qshake;
    cout<<"\n Quantity of chicken";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t please provide the menu from the given options:";
    cout<<"\n\n 1) rooms";
    cout<<"\n 2) pasta";
    cout<<"\n 3) burger";
    cout<<"\n 4) noodles";
    cout<<"\n 5) shake";
    cout<<"\n 6) chicken";
    cout<<"\n 7) information regarding sales and collection :";
    cout<<"\n 8) exit";

    cout<<"enter your choice:";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"enter the no of rooms u want:";
        cin>>quant;
        if(Qrooms-Srooms>=quant)
        {
            Srooms=Srooms+quant;
            total_rooms=total_rooms+(quant*1200);
            cout<<"\n\n\t\t"<<quant<<"rooms have been alloted to you";
        }
        else{
            cout<<"\n\t Only"<<Qrooms-Srooms<<"left remaining rooms in the hotel";
        }
        break;
    case 2:
        cout<<"enter the pasta quantity:";
        cin>>quant;
        if(Qpasta-Spasta>=quant)
        {
            Spasta=Spasta+quant;
            total_pasta=total_pasta+(quant*250);
            cout<<"pasta is in order";
        }   
        else
        {
            cout<<"\n\t only"<<Qpasta-Spasta<<"left pasta in hotel";
        }
        break;
    case 3:
        cout<<"enter the burger quantity:";
        cin>>quant;
        if(Qburger-Sburger>=quant)
        {
            Sburger=Sburger+quant;
            total_burger=total_burger+(quant*100);
            cout<<"burger is in order";
        }   
        else
        {
            cout<<"\n\t only"<<Qburger-Sburger<<"left burger in hotel";
        }
        break;
    case 4:
        cout<<"enter the noodle quantity:";
        cin>>quant;
        if(Qnoodles-Snoodles>=quant)
        {
            Snoodles=Snoodles+quant;
            total_noodles=total_noodles+(quant*120);
            cout<<"noodles is in order";
        }   
        else
        {
            cout<<"\n\t only"<<Qnoodles-Snoodles<<"left noodles in hotel";
        }
        break;
    case 5:
        cout<<"enter the shake quantity:";
        cin>>quant;
        if(Qshake-Sshake>=quant)
        {
            Sshake=Sshake+quant;
            total_shake=total_shake+(quant*70);
            cout<<"shake is in order";
        }   
        else
        {
            cout<<"\n\t only"<<Qshake-Sshake<<"left shake in hotel";
        }
        break;
    case 6:
        cout<<"enter the chicken quantity:";
        cin>>quant;
        if(Qchicken-Schicken>=quant)
        {
            Schicken=Schicken+quant;
            total_chicken=total_chicken+(quant*220);
            cout<<"chicken is in order";
        }   
        else
        {
            cout<<"\n\t only"<<Qchicken-Schicken<<"left chciken in hotel";
        }
        break;
    case 7:
        cout<<"\n\t\t details of sales and collection :";
        cout<<"\n\n number of rooms we had"<<Qrooms;
        cout<<"\n\n number of rooms we gave"<<Srooms;
        cout<<"\n\n remaining rooms left"<<Qrooms-Srooms;
        cout<<"total room collection for the day:"<<total_rooms;

        cout<<"\n\n number of pasta we had"<<Qpasta;
        cout<<"\n\n number of pasta we sold"<<Spasta;
        cout<<"\n\n remaining pasta left"<<Qpasta-Spasta;
        cout<<"total pasta collection for the day:"<<total_pasta;

        cout<<"\n\n number of burger we had"<<Qburger;
        cout<<"\n\n number of burger we sold"<<Sburger;
        cout<<"\n\n remaining pasta left"<<Qburger-Sburger;
        cout<<"total burger collection for the day:"<<total_burger;

        cout<<"\n\n number of noodles we had"<<Qnoodles;
        cout<<"\n\n number of noodles we sold"<<Snoodles;
        cout<<"\n\n remaining noodles left"<<Qnoodles-Snoodles;
        cout<<"total noodles collection for the day:"<<total_noodles;

        cout<<"\n\n number of shakes we had"<<Qshake;
        cout<<"\n\n number of shakes we sold"<<Sshake;
        cout<<"\n\n remaining shakes left"<<Qshake-Sshake;
        cout<<"total shakes collection for the day:"<<total_shake;

        cout<<"\n\n number of chicken we had"<<Qchicken;
        cout<<"\n\n number of chicken we sold"<<Schicken;
        cout<<"\n\n remaining chicken left"<<Qchicken-Schicken;
        cout<<"total chicken collection for the day:"<<total_chicken;  

        cout<<"\n\n\n  total collection for the day is :"<<total_rooms+total_pasta+total_noodles+total_chicken+total_burger+total_shake;
        break;
    case 8:
        exit(0);
    default:
       cout<<"please select the numbers mentioned above:";
        break;
    }
    //tranfer the control to the menu after making the choice
    //m is the label 
    //jump statement used to jump from one part to another havnig specified label
    //help us in jumping to the menu after every choice.
    goto m;

}