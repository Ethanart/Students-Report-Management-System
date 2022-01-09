#include<iostream>
#include<string>
using namespace std;

char grade(int marks[])
{
  int sum=0; double avrg=0;
  for(int i=0;i<5;i++)
  {
    sum=marks[i]+sum;
  }
  avrg=sum/5;
  if(avrg>=90)
  {
    return 'A';
  }
  else if(avrg>=80)
  {
    return 'B';
  }
  else if(avrg>=70)
  {
    return 'C';
  }
  else if(avrg>=60)
  {
    return 'D';
  }
  else if(avrg>=50)
  {
    return 'E';
  }
  else{
    return 'F';
  }
}


void detail(string name,int roll,int marks[])
{
    cout<<endl<<endl<<"Student Details : "<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Roll Number : "<<roll<<std::endl;
    cout<<"Physics : "<<marks[0]<<endl;
    cout<<"Chemistry : "<<marks[1]<<endl;
    cout<<"Maths : "<<marks[2]<<endl;
    cout<<"Computer : "<<marks[3]<<endl;
    cout<<"Biology : "<<marks[4]<<endl;
    cout<<"Grade : "<<grade(marks);
}
int main() {

    int roll_num,marks[5];
    string name;
    cout << "Enter Student name ";
    getline(cin,name);
    cout << "Enter your Roll Number ";
    cin >> roll_num;
    cout<<"enter marks of Physics ";
    cin>>marks[0];
    cout<<"enter marks of Chemistry ";
    cin>>marks[1];
    cout<<"enter marks of Maths ";
    cin>>marks[2];
    cout<<"enter marks of Computer ";
    cin>>marks[3];
    cout<<"enter marks of Biology ";
    cin>>marks[4];
    detail(name,roll_num,marks);
   
    
}
