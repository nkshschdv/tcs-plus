   
#include<iostream>

int main()
{
    int results[250];

   char characters[]="DJJGKHG HBMBEBIBFBF HBMBQDK HBMBTDH HBMBEBIBFBF HBNGKHG YFZ YFZ YFZ YFZ JdK JdK JdK YFZ YFZ YFZ YFZ YFZ";
    int i;
    for( i=0 ; characters[i]!= '\0'; i++)
    {
        int j=i;
        if(characters[i]==' ')
        {
            while(characters[j]!= '\0')
            {
                characters[j]=characters[j+1];
                j++;
            }
        }
        results[i] = characters[i];
        results[i]-=64;
    }
    
    int j=1;
    int totalc=0;
    int toggle=1;


    while(characters[j-1]!='\0')   
    {
        totalc+=results[j-1];
        if(toggle == 0)
        {
            // its even
            for(int c=0; c< results[j-1];c++)
            {
            std::cout<<"!";
            }
            toggle = 1;
        }
        else
        {   
            for(int c=0; c< results[j-1];c++)
            {
            std::cout<<"0";
            }
            toggle = 0;
        }
        j++;

        if(totalc == 57)
        {
            std::cout<<std::endl;
            totalc = 0;
            toggle = 1;
        }
    }

    return 0;
}
