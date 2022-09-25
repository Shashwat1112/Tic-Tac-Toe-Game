#include<iostream>
using namespace std;
int main()
{
    int t=1,i,c1=0,c2=0;
    string a[3][3]={"2","3","4","5","6","7","8","9","10"};
    string n1,n2;
    cout<<"Player 1:";
    cin>>n1;
    cout<<"Player 2:";
    cin>>n2;

    while(true)
    {
    while(true)
    {
        if(t%2==1)
        {
            cout<<n1<<"\n";
        }
        else
        {
            cout<<n2<<"\n";
        }
        int c,r,j,i;
        cout<<"Enter row and column:";
        cin>>r>>c;
        r--,c--;
        if(t%2==1)
        {
            a[r][c]="*";
        }
        else
        {
            a[r][c]="O";
        }
        t++;
        cout<<"\n";

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(a[i][j]=="*"||a[i][j]=="O")
                {
                    cout<<a[i][j];
                }
                else
                {
                    cout<<"_";
                }
            
            }
            cout<<"\n";
        }
            if(a[0][0]==a[0][1]&&a[0][0]==a[0][2])
            {
                if(a[0][0]=="*")
                {
                    c1++;
                    cout<<n1<<" WINS\n";
                }
                else
                {
                    c2++;
                    cout<<n2<<" WINS\n";
                }
                break;
            }
            if(a[1][0]==a[1][1]&&a[1][0]==a[1][2])
            {
                if(a[1][0]=="*")
                {
                    c1++;
                    cout<<n1 <<" WINS\n";
                }
                else
                {   c2++;
                    cout<<n2<<" WINS\n";
                }
                break;
            }
            if(a[2][0]==a[2][1]&&a[2][0]==a[2][2])
            {
                if(a[2][0]=="*")
                {
                    c1++;
                    cout<<n1 <<" WINS\n";
                }
                else
                {
                    c2++;
                    cout<<n2<<" WINS\n";
                }
                break;
            }
            if(a[0][0]==a[1][0]&&a[0][0]==a[2][0])
            {
                if(a[0][0]=="*")
                {
                     c1++;
                     cout<<n1<<" WINS\n";
                }
                else
                {
                    c2++;
                    cout<<n2<<" WINS\n";
                }
                break;
            }
            if(a[0][1]==a[1][1]&&a[0][1]==a[2][1])
            {
                if(a[0][1]=="*")
                {
                     c1++;
                     cout<<n2<<" WINS\n";
                }
                else
                {
                    c2++;
                    cout<<n2<<" WINS\n";
                }
                break;
            }
            if(a[0][2]==a[1][2]&&a[0][2]==a[2][2])
            {
                if(a[0][2]=="*")
                {
                     c1++;
                     cout<<n1<<" WINS\n";
                }
                else
                {
                    c2++;
                    cout<<n2<<" WINS\n";
                }
                break;
            }
            if(a[0][0]==a[1][1]&&a[0][0]==a[2][2])
            {
                if(a[0][0]=="*")
                {
                    c1++;
                    cout<<n1<<" WINS\n";
                }
                else
                {
                    c2++;
                    cout<<n2<<" WINS\n";
                }
                break;
            }
            if(a[2][0]==a[1][1]&&a[2][0]==a[0][2])
            {
                if(a[2][0]=="*")
                {
                     c1++;
                     cout<<n1<<" WINS\n";
                }
                else
                {
                    c2++;
                    cout<<n2<<" WINS\n";
                }
                break;
            }
            if(t==10)
            {
                cout<<"DRAW";
                break;
            }
      }
            if(c1==3)
            {
               cout<<n1<<" is tournament's WINNER";
               break;
            }
            if(c2==3)
            {
               cout<<n2<<" is tournament's WINNER";
               break;
            }
        //code
        int p=2,j;
        for(i=0;i<3;i++)
        {
         for(j=0;j<3;j++)
         {
            a[i][j]=p+"";
            p=p+1;
         }
        }
        t=1;
        
        }
    
        
    }
