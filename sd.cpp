#include <iostream>
using namespace std;
int main()
{

    int d = 0, sum = 0, s = 0, b = 0;
   // for (int i = 0; i < n; i++) 
   int i=0;
   int n=5;
   int p[]={1,5,3,8,12};
    fanp:
       
        if (i== n - 1)
        {
           

        
            if (s == 0)
            {
                cout<<0;;
            }
            else
            {
                sum = sum + (s - b);
               cout<<sum;
               
        }
        }

        else if ((p[i] < p[i + 1]) && (d == 0))
        {
            b = p[i];
         
            d == 1;
            i++;
            goto fanp;
            
        }
          else if ((p[i] > p[i + 1]) && (d == 1))
        {
            s == p[i];
            sum = sum + (s - b);
            d == 0;
           i++;
            goto fanp;
        }
        else if ((p[i] < p[i + 1]) && (d == 1))
        {
            s = p[i + 1];
            i++;
            goto fanp;
        }
      
        else if ((p[i] > p[i + 1]) && (d == 0))
        {
            b = p[i + 1];
            i++;
            goto fanp;
        }
   
}