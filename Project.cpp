#include<iostream>
using namespace std;
int main()
{


   int c=0,d=0,e=0;
   //ETC
   string q[10]={"Who is the Prime Minister of India?",
   "Who is the current president of China?",
   "What is the capital of India",
   "Where is Amaravati located?",
   "Where is BIT located?",
   "What is Anurag Basu's childhood home?",
   "WWhere is Vadakkumnathan Mandir located??",
   "Which country owns MG Motors?",
   "Samsung brand is from which country?",
   "Who is the new Emperor of Japan?"};

   string op1[10]={"Narendra Modi","Den Xiaoping","Bangalore","Andhra Pradesh","Bhilai","Raipur","Lahore","UK","Japan","Hirohito"};
   string op2[10]={"Rahul Gandhi","Xi Jingping","Mumbai","Odisha","Durg","Rewa","Trissur","China","South Korea","Akihito"};
   string op3[10]={"Sonia Gandhi","Mao Zedong","Bhilai","Maharashtra","Raipur","Baihar","Muzaffarabad","USA","China","Naruhito"};
   string op4[10]={"Arvind Kejriwal","Shinzo Abe","Delhi","Haryana","2 and 3","Korba","Karachi","India","India","Fumihito"};

   int ans[10]={1,2,4,1,4,3,2,2,4,4};
    

   //Mechanical
   string r[10]={"Who is the Home Minister of India?",
   "Who is the current president of China?",
   "What is the capital of India",
   "Where is Amaravati located?",
   "Where is BIT located?",
   "What is Anurag Basu's childhood home?",
   "Where is Vadakkumnathan Mandir located?",
   "Which country owns MG Motors?",
   "Samsung brand is from which country?",
   "Who is the new Emperor of Japan?"};

   string m1[10]={"Narendra Modi","Den Xiaoping","Bangalore","Andhra Pradesh","Bhilai","Raipur","Lahore","UK","Japan","Hirohito"};
   string m2[10]={"Amit Shah","Xi Jingping","Mumbai","Odisha","Durg","Rewa","Trissur","China","South Korea","Akihito"};
   string m3[10]={"Sonia Gandhi","Mao Zedong","Bhilai","Maharashtra","Raipur","Baihar","Muzaffarabad","USA","China","Naruhito"};
   string m4[10]={"Rajnath Singh","Shinzo Abe","Delhi","Haryana","2 and 3","Korba","Karachi","India","India","Fumihito"};

   int mechans[10]={2,2,4,1,4,3,2,2,4,3};

   int i,k,j;
//rno name branch sem
   string name,b;
   int sem;
   cout<<"Enter name:";
   cin>>name;
   cout<<"Enter branch:";
   cin>>b;
   cout<<"Enter semester:";
   cin>>sem;


   if(b=="Mechanical")
   {
      for(i=0;i<10;i++)
      {
      cout<<"Question "<<i+1<<" "<<r[i]<<"\n";
      cout<<"1. "<<m1[i]<<"\n";
      cout<<"2. "<<m2[i]<<"\n";
      cout<<"3. "<<m3[i]<<"\n";
      cout<<"4. "<<m4[i]<<"\n";
      cout<<"Enter answer:";
      cin>>j;
      if(j==mechans[i])
      {
         e=e+1;
      }
      }
      cout<<"Number if correct answers:"<<e<<"\n";
      cout<<"Number of incorrect answers:"<<10-e<<"\n";

   }
   if(b=="ETC")
   {
   for(i=0;i<10;i++)
   {
      cout<<"Question: "<<i+1<<" "<<q[i]<<"\n";
      cout<<"1. "<<op1[i]<<"\n";
      cout<<"2. "<<op2[i]<<"\n";
      cout<<"3. "<<op3[i]<<"\n";
      cout<<"4. "<<op4[i]<<"\n";
      cout<<"Enter answer:";
      cin>>k;
      if(k==ans[i])
      {
         //cout<<"CORRECT\n";
         c=c+1;

      }
      else
      {
         //cout<<"INCORRECT\n";
         d=d+1;
      }
      
   }
   
   cout<<"Number of correct answers:"<<c<<"\n";
   cout<<"Number of incorrect answers:"<<d<<"\n";
   }


   
}