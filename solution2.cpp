   
/**
 
 * Please write your code in this editor. 
 * Operational instructions
 * 1) Press F5 If you don't see your saved code
 * 2) You can change the font, background, foreground of this editor by clicking on the right hand side bottom
 * 4) Prefer Google Chrome (version 25 or above) or Firefox (version 21 or above)
 */
       
       
#include<iostream>

int main()
{
    int results[250];

    char characters[]="DJJGKHG HBMBEBIBFBF HBMBQDK HBMBTDH HBMBEBIBFBF HBNGKHG";
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