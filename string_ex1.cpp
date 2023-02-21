#include<iostream>
using namespace std;

bool valids(char validchar[])
{
    for (int i = 0; validchar[i]!='\0'; i++)
    {
        if ((validchar[i]>=65 && validchar[i]<=90) && (validchar[i]>=97 && validchar[i]<=122) 
        && (validchar[i]>=48 && validchar[i]<=57))
            return true;  
    }
    return false;
}


int main()
{
    char s[] = "welcome";
    int i;
    for(i = 0; s[i]!='\0';i++)
    {
    }
    cout<<"Length of string "<<i<<endl;

    //Upper case
    for (i = 0; s[i]!='\0'; i++)
    {
        s[i] -= 32;
        cout<<s[i];
    }
    //printf("%s",s);

    // mix of upper and lower case
    char A[] = "WelCoMe";
    cout<<endl;
    for ( i = 0; A[i]!='\0'; i++)
    {
        if (A[i] >= 65 && A[i] <= 90)
        {
            A[i] += 32;
        }
        else if (A[i] >= 97 && A[i] <= 122)
        {
            A[i] -= 32;
        }
        cout<<A[i];
    }
    
    // count vowels and consonents
    char W[] = "how  are you guys";
    int vowel_count = 0, cons_count = 0, no_of_words = 1;
    cout<<endl;
    for (i = 0; W[i]!='\0'; i++)
    {
        if((W[i]=='a'|| W[i]=='e' || W[i]=='i' || W[i]=='o' || W[i]=='u') || 
        (W[i]=='A'|| W[i]=='E' || W[i]=='I' || W[i]=='O' || W[i]=='U'))
        vowel_count++;

        else if((W[i] >= 65 && W[i]<=90) || (W[i] >=97 && W[i] <= 122))
        cons_count++;

        else if (W[i] == ' ' && W[i-1]!=' ') // 2nd condition is for white space(i.e morethan 1 space)
        no_of_words++;
    }
    cout<<"No of vowels = "<<vowel_count<<endl;
    cout<<"No of consonents = "<<cons_count<<endl;
    cout<<"No of words = "<<no_of_words<<endl;

    // Validate string - only char and number...No special characters
    char validchar[] = "Suresh";
    //char validchar[] = "Sure$h2022";
   
    if (valids(validchar) == true)
    {
        cout<<"The string is valid";
    }
    else if (valids(validchar) == false)
    {
        cout<<"The string isInvalid";
    }
    
    // Reverse String
    // char M[] = "python";
    // char N[7];
    // int m,n;
    // for (m = 0; M[m] !='\0'; m++)
    // {
    // }
    // // int length = i - 1; //  length of string 
    // for (n =0; m >=0 ; m--,n++)
    // {
    //     N[n] = M[m];
    // }
    // N[n] = '\0';
    // printf("%s",N);

    // Comparing Two string

    char P[] = "paint";
    char Q[] = "painting";

    int p,q;
    for (p = 0,q = 0; P[p] != '\0' ; p++,q++)
    {
        if (P[p] != Q[q])
        {
            break;
        }
    }
    cout<<endl;
    if (P[p] == Q[q])
    {
        cout<<"String are same"<<endl;
    }
    else
    {
        cout<<"String are not equal"<<endl;    
    }


    return 0;
}

