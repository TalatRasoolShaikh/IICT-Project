#include<iostream>
using namespace std;
int main(){
	float phy,eng,calc,pf,ict,totalm,perc,d;
	string a,b,result;
    cout<<" Enter your name: ";
	cin>>a;
	cout<<" Enter your roll no:";
	cin>>b;
	cout<<"Enter your Physics marks out of 100 ";
	cin>>phy;
	cout<<"Enter your English marks out of 100 ";
	cin>>eng;
	cout<<"Enter your Calculus marks out 100 ";
	cin>>calc;
	cout<<"Enter your Programing Fundamental marks out of 100 ";
	cin>>pf;
	cout<<"Enter your IICT marks out of 100 ";
	cin>>ict;
	totalm=phy+eng+calc+pf+ict;
	d=500;
	perc=totalm/d*100;
	cout<<"===============================================";
	cout<<"\n               Student Marksheet ";
	cout<<"\n===============================================";
	cout<<"\n Name : "<<a;
	cout<<"\n Roll no : "<<b;
	cout<<"\n\n Subject              Marks";
	cout<<"\n-----------------------------------------------";
	cout<<"\n Physics       =        "<<phy;
	cout<<"\n English       =        "<<eng;
	cout<<"\n Calculus      =        "<<calc;
	cout<<"\n Prog: Fund:   =        "<<pf;
	cout<<"\n IICT          =        "<<ict;
	cout<<"\n-----------------------------------------------";
	cout<<"\n Total marks   :        "<<totalm;
	cout<<"\n Percentage    :        "<<perc<<"%";
	cout<<"\n Grade         :        ";
	if (perc>=85){cout<<"A 1";
}
else if (perc>=80) {cout<<"A";
}
else if (perc>=75){cout<<"B+";
}
else if (perc>=70) {cout<<"B";
}
else if (perc>=65) {cout<<"C+";
}
else if (perc>=60) {cout<<"C";
}
else if (perc>=55) {cout<<"D+";
}
else if (perc>=50) {cout<<"D";
}

	else{cout<<"fail";
	}
return 0;	
}
