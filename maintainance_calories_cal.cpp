#include<iostream>
using namespace std;
class calculator
{
	private:
	int w,h,a,bmr,bmrf,mc,j,mg;
	float s=1.2,l=1.375,i=1.55,o=1.725,p=1.90;
	char e;
    string start,end;
    
    void getdata()
    {
    
    cout<< "To start Calculator Enter 'yes' to stop enter 'no': ";
    cin>>start;
	}
    public:
    	void displaydata()
    	{
    		getdata();
    		 if(start == "yes")
    {
    
        cout<<"           Enter your Weight(KG) : ";
		cin>>w;
		cout<<"           Enter your Height(CM) : ";
		cin>>h;
		cout<<"           Enter your Age : ";
		cin>>a;
		bmr=10*w+6.25*h-5*a+5;
		bmrf=10*w+6.25*h-5*a-161;
		cout<<"                   \n";
		
		cout<<"       sedentary lifestyle(Desk job and no workout) Enter 1\n";
		cout<<"       Light activity(1-3 day workout) Enter 2\n";
		cout<<"       4-5 day workout Enter 3\n";
		cout<<"       6-7 day workout Enter 4\n";
		cout<<"       Professional Athlete Enter 5\n                    ";
		cin>>j;
		if(j==1)
		{
		    mc=bmr*s;
		    cout<<"          Male :Your Maintenance calories are   "<<mc<<endl;
		    mg=bmrf*s;
		    cout<<"          Female :Your Maintenance calories are  "<<mg<<endl;
		}
		else if(j==2)
		{
		    mc=bmr*l;
		    cout<<"          Male :Your Maintenance calories are   "<<mc<<endl;
		    mg=bmrf*l;
		    cout<<"          Female :Your Maintenance calories are  "<<mg<<endl;
		}
		else if(j==3)
		{
		   	mc=bmr*i;
			cout<<"          Male :Your Mintenance calories are   "<<mc<<endl;
			 mg=bmrf*i;
		    cout<<"          Female :Your Maintenance calories are  "<<mg<<endl;
		}
		else if(j==4)
		{
		    mc=bmr*o;
			cout<<"          Male :Your Maintenance calories are   "<<mc<<endl;
			mg=bmrf*o;
		    cout<<"          Female :Your Maintenance calories are  "<<mg<<endl;
		}
		else if(j==5)
		{
		   mc=bmr*p;
		    cout<<"          Male : Your Maintenance calories are   "<<mc<<endl;
		    mg=bmrf*p;
		    cout<<"          Female :Your Maintainance calories are  "<<mg<<endl;
		}
		else
		{
			cout<<"          YOU HAVE ENTERED WRONG VALUE !";
		}
		cout<<"\nEnter 'y' to restart Enter 'n' to Stop  :";
	cin>>end;
	if(end=="n")
	{
		cout<<"YOU HAVE STOPPED THE PROGRAM !";
		exit(0);
	}
	else(end=="y");
	{
		displaydata();
	}
    
	}
    else
    { 
        cout<<"YOU HAVE STOPPED THE PROGRAM !";
    }
}

   
};
int main()
{
	cout<<"Roll : 2452\n";
    cout<<"Name : [Your Name]\n";
    cout<<"class : FY.IT / A\n\n";
    cout<<"Project by @ jatin_gangare"<<endl;
    cout<<"----------- Maintainance Calorie calculator -------------\n\n";
	calculator c;
	c.displaydata();
    return 0;
}
