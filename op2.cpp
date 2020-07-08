#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

class events
{
    public:
    string name;
    int noofpart;
    int partfees;
    string instruc;
    string venue;
    virtual void show()=0;
};

class IT:public events
{
    public:
    string coord;
    IT(string n,int p,int f,string i,string v,string c)
    {
        this->name=n;
        this->noofpart=p;
        this->partfees=f;
        this->instruc=i;
        this->venue=v;
        this->coord=c;
    }
    void show()
    {
        cout<<"Name of the event: "<<name<<endl;
        cout<<"Maximum number of participants in a team: "<<noofpart<<endl;
        cout<<"Participation fee: "<<partfees<<endl;
        cout<<"Venue of the event: "<<venue<<endl;
        cout<<"Organizing coordinator: "<<coord<<endl;
        cout<<"Instructions: "<<instruc<<endl;
    }
};

class CSE:public events
{
    public:
    string coord;
    CSE(string n,int p,int f,string i,string v,string c)
    {
        this->name=n;
        this->noofpart=p;
        this->partfees=f;
        this->instruc=i;
        this->venue=v;
        this->coord=c;
    }
    void show()
    {
        cout<<"Name of the event: "<<name<<endl;
        cout<<"Maximum number of participants in a team: "<<noofpart<<endl;
        cout<<"Participation fee: "<<partfees<<endl;
        cout<<"Venue of the event: "<<venue<<endl;
        cout<<"Organizing coordinator: "<<coord<<endl;
        cout<<"Instructions: "<<instruc<<endl;
    }
};

class informal:public events
{
    public:
    string coord;
    informal(string n,int p,int f,string i,string v,string c)
    {
        this->name=n;
        this->noofpart=p;
        this->partfees=f;
        this->instruc=i;
        this->venue=v;
        this->coord=c;
    }
    void show()
    {
        cout<<"Name of the event: "<<name<<endl;
        cout<<"Maximum number of participants in a team: "<<noofpart<<endl;
        cout<<"Participation fee: "<<partfees<<endl;
        cout<<"Venue of the event: "<<venue<<endl;
        cout<<"Organizing coordinator: "<<coord<<endl;
        cout<<"Instructions: "<<instruc<<endl;
    }
};

class ECE:public events
{
    public:
    string coord;
    ECE(string n,int p,int f,string i,string v,string c)
    {
        this->name=n;
        this->noofpart=p;
        this->partfees=f;
        this->instruc=i;
        this->venue=v;
        this->coord=c;
    }
    void show()
    {
        cout<<"Name of the event: "<<name<<endl;
        cout<<"Maximum number of participants in a team: "<<noofpart<<endl;
        cout<<"Participation fee: "<<partfees<<endl;
        cout<<"Venue of the event: "<<venue<<endl;
        cout<<"Organizing coordinator: "<<coord<<endl;
        cout<<"Instructions: "<<instruc<<endl;
    }
};

class MAE:public events
{
    public:
    string coord;
    MAE(string n,int p,int f,string i,string v,string c)
    {
        this->name=n;
        this->noofpart=p;
        this->partfees=f;
        this->instruc=i;
        this->venue=v;
        this->coord=c;
    }
    void show()
    {
        cout<<"Name of the event: "<<name<<endl;
        cout<<"Maximum number of participants in a team: "<<noofpart<<endl;
        cout<<"Participation fee: "<<partfees<<endl;
        cout<<"Venue of the event: "<<venue<<endl;
        cout<<"Organizing coordinator: "<<coord<<endl;
        cout<<"Instructions: "<<instruc<<endl;
    }
};


class help
{
    public:
    void canteen()
    {
        cout<<"Way towards the canteen: "<<endl;
        cout<<"head towards the college ground ";  
        cout<<"and follow the road away from the college gate to find a small shop";
        cout<<" adjacent to the IT block "<<endl;
        cout<<"***** MENU *****"<<endl;
        cout<<"1.Cheese maggi"<<endl;
        cout<<"2.Red sauce pasta"<<endl;
        cout<<"3.Momos"<<endl;
        cout<<"Tap the link given below to order online"<<endl;
        //attach the link;

        char ch;
        cout << "click(y/n)?" << endl;
        cin >> ch;
        if(ch == 'y'){
        system("open https://www.swiggy.com");
        }
    }
    void washroom()
    {
        cout<<"Washrooms are located on every floor in every building near the staircases";
    }
    void waytovenue()
    {
        cout<<"Tap the following link to download the college map and get directions for your venue"<<endl;
        //attach the link
        char ch;
        cout << "click(y/n)?" << endl;
        cin >> ch;
        if(ch == 'y'){
        system("open https://drive.google.com/open?id=1kYcACNQeFTGJCLMpLzNKYMl2ZhiGPpet");
        }
    }

};

void ontheday()
{
    cout<<"Click the following link and Mark your attendance an hour before the event you registered for the event to confirm your presence"<<endl;
    //attach the link
    char ch;
    cout << "click(y/n)?" << endl;
    cin >> ch;
    if(ch == 'y'){
    system("open https://webqr.com/index.html");
    }
}



int main(int argc,char** argv)
{
    IT event1("CODEQUEST",5,100,"Code the idea in any language","Seminar hall","Rashmi");
    IT event2("BLIND CODE",2,50,"Code the idea with eyes blindfloded","VLSI Lab,ECE block","Ishika");
    vector<IT> v1;
    v1.insert(v1.begin(),event1);
    v1.insert(v1.begin(),event2);
    
    CSE event3("CODEMAFIA",1,20,"The faster you code the closer you are to winning","Room:205,IT block","Prerna");
    CSE event4("CODE TO MANAGE",4,100,"Code to develop a management system","Embedded lab,ECE block","Ishita");
    vector<CSE> v2;
    v2.insert(v2.begin(),event3);
    v2.insert(v2.begin(),event4);
    
    informal event5("TREASURE HUNT",5,100,"Hunt the campus to find the clues","IGDTUW campus","Mallika");
    informal event6("PUBG",1,50,"Play the game pubg and win by surviving till the end","Room:306,ECE Block","Muskaan");
    vector<informal> v3;
    v3.insert(v3.begin(),event5);
    v3.insert(v3.begin(),event6);
    
    ECE event7("DRONE MAZE",6,500,"obstacled race for your Drone","IG ground","Sneha");
    ECE event8("ELECTRO ENIGMA",4,10,"Use the given components to create a mini project","VLSI Lab,ECE block","Divya Pant");
    vector<ECE> v4;
    v4.insert(v4.begin(),event7);
    v4.insert(v4.begin(),event8);
    
    MAE event9("VIMAAN",5,200,"Display the car's you have built", "Machine Shop, AUD","Nibha");
    MAE event10("JUNKYARD",2,50,"Build best possible Machines from Scraps","EM Workshop","Seema");
    vector<MAE> v5;
    v5.insert(v5.begin(),event9);
    v5.insert(v5.begin(),event10);
    
    int i;
    help needh;
    cout<<"******* WELCOME TO INNERVE:THE TECHNICAL FEST OF IGDTUW ********"<<endl;
    cout<<endl;
    cout<<"Choose the category of events your are interested in: "<<endl;
    cout<<"1.IT"<<endl<<"2.CSE"<<endl<<"3.ECE"<<endl<<"4.MECHANICAL"<<endl<<"5.INFORMAL"<<endl;
    cout<<"6.NEED HELP"<<endl<<"7.ATTENDANCE ON THE DAY OF THE EVENT"<<endl;
    cin>>i;
    
    int k;
    char ch;

    switch (i)
    {
    case 1:
        cout<<"The events of IT are: "<<endl;
        cout<<"Choose the event for more information"<<endl;
        for(int j=0;j<v1.size();j++)
        {
            cout<<j+1<<". "<<v1[j].name<<endl;
        }
        
        cin>>k;
        if(k<=v1.size())
        {
            v1[k-1].show();
        }
        else 
        {
            cout<<"Invalid option";
        }
        cout<<"Click the following link to register for the events"<<endl;
        //attach the link
           
            cout << "click(y/n)?" << endl;
            cin >> ch;
            if(ch == 'y'){
            system("open https://docs.google.com/forms/d/e/1FAIpQLSeqz2wu3UW112J3js10wI2iFSvOr_CBoyHIzGxtxjKgjNtoHQ/viewform?usp=sf_link");
            }

        break;
    case 2:
        cout<<"The events of CSE are: "<<endl;
        cout<<"Choose the event for more information"<<endl;
        for(int j=0;j<v2.size();j++)
        {
            cout<<j+1<<". "<<v2[j].name<<endl;
        }
        cin>>k;
        if(k<=v2.size())
        {
            v2[k-1].show();
        }
        else 
        {
            cout<<"Invalid option";
        }
        cout<<"Click the following link to register for the events"<<endl;
        //attach the link
                 
                   cout << "click(y/n)?" << endl;
                   cin >> ch;
                   if(ch == 'y'){
                   system("open https://docs.google.com/forms/d/e/1FAIpQLSeqz2wu3UW112J3js10wI2iFSvOr_CBoyHIzGxtxjKgjNtoHQ/viewform?usp=sf_link");
                   }

        break;
    case 3:
                          cout<<"The events of ECE are: "<<endl;
                          cout<<"Choose the event for more information"<<endl;
                          for(int j=0;j<v4.size();j++)
                          {
                              cout<<j+1<<". "<<v4[j].name<<endl;
                          }
                        
                          cin>>k;
                          if(k<=v4.size())
                          {
                              v4[k-1].show();
                          }
                          else
                          {
                              cout<<"Invalid option";
                          }
                          cout<<"Click the following link to register for the events"<<endl;
                          //attach the link
                              
                              cout << "click(y/n)?" << endl;
                              cin >> ch;
                              if(ch == 'y'){
                              system("open https://docs.google.com/forms/d/e/1FAIpQLSeqz2wu3UW112J3js10wI2iFSvOr_CBoyHIzGxtxjKgjNtoHQ/viewform?usp=sf_link");
                              }

                          break;
    case 4:
                                     cout<<"The events of MAE are: "<<endl;
                                     cout<<"Choose the event for more information"<<endl;
                                     for(int j=0;j<v5.size();j++)
                                     {
                                         cout<<j+1<<". "<<v5[j].name<<endl;
                                     }
                                   
                                     cin>>k;
                                     if(k<=v5.size())
                                     {
                                         v5[k-1].show();
                                     }
                                     else
                                     {
                                         cout<<"Invalid option";
                                     }
                                     cout<<"Click the following link to register for the events"<<endl;
                                     //attach the link
                                        
                                         cout << "click(y/n)?" << endl;
                                         cin >> ch;
                                         if(ch == 'y'){
                                         system("open https://docs.google.com/forms/d/e/1FAIpQLSeqz2wu3UW112J3js10wI2iFSvOr_CBoyHIzGxtxjKgjNtoHQ/viewform?usp=sf_link");
                                         }

                                     break;
    case 5:
        cout<<"The informal events are: "<<endl;
        cout<<"Choose the event for more information"<<endl;
        for(int j=0;j<v3.size();j++)
        {
            cout<<j+1<<". "<<v3[j].name<<endl;
        }
        cin>>k;
        if(k<=v3.size())
        {
            v3[k-1].show();
        }
        else 
        {
            cout<<"Invalid option";
        }
        cout<<"Click the following link to register for the events"<<endl;
        //attach the link
                         
                          cout << "click(y/n)?" << endl;
                          cin >> ch;
                          if(ch == 'y'){
                          system("open https://docs.google.com/forms/d/e/1FAIpQLSeqz2wu3UW112J3js10wI2iFSvOr_CBoyHIzGxtxjKgjNtoHQ/viewform?usp=sf_link");
                          }

        break;
    case 6:
      int m;
      cout<<"1.Need something to eat?"<<endl<<"2.Way to washroom?"<<endl;
      cout<<"3.Enable to find the venue?"<<endl;
      cin>>m;
      switch(m)
      {
          case 1:
            needh.canteen();
            break;
          case 2:
            needh.washroom();
            break;
          case 3:
            needh.waytovenue();
            break;

      }
    break;
    case 7:
        ontheday();
      
    default:
        break;
    }



}