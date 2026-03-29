//Print numberfrom 1 to 10using while loop
#include<iostream>
using namespace std;
int main(){
    /*int num = 0;
    while(num <= 10){
        cout<<num<<" ";
        num++;
    }*/
     //WRITE A PROGRAM TO CALCULATE THE SUM OF FIRST 10 NUMBERS
    /*int i=0,sum=0;
    while(i<=10){
        sum = sum + i;
        i = i + 1;
    }
    cout<<"Sum is :"<<sum;*/

    //WRITE A PROGRAM TO PRINT 20HORIZONTAL ASTERRISK(*)
    /*int i=0;
    while(i<=20){
        cout<<"*";
        i++;
    }*/

    //  WRITE A PROGRAM TO SUM NUMBER FROM M TO N;
        /*int n,m,sum=0;
        cout<<"Enter the numbers :";
        cin>>m>>n;
        while(m<=n){
            sum = sum + m;
            m++;

        }
        cout<<"SUM:"<<sum;*/
    /*for(int i=0;i<=10;i++){
        if(i==5)
            break;
            cout<<i;
        
    }
    for(int j=0;j<=10;j++){
        if(j==5)
            continue;
            cout<<"\n"<<j;
        
    }*/
    //NESTED LOOP 
    //SQUARE PATTERN
    /*int num;
    cout<<"Enter the entry :";
    cin>>num;
    for(int i=0;i<=num;i++){
        for(int j=0;j<=num;j++){
        cout<<" "<<"*";}                  
        cout<<endl;
        }*/
    
        //Right angle triangle pattern
        /*
            *
            **
            ***
            ****
            *****
        */
    /*int num;
    cout<<"Enter the number :";
    cin>>num;

    for(int i=0;i<=num;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }*/

    //Inverted triangle;
    /*
        *****
        ****
        ***
        **
        *
    */
    /*int num;
    cout<<"Enter the number:";
    cin>>num;
    for(int i=0;i<=num;i++){
        for(int j=num;j>=i;j--){
            cout<<" "<<"*";
        }
        cout<<endl;
    }*/
    
    //PYRAMID
    /*
          *
         * *
         * * *
         * * * * 
         * * * * *
    */
       /*int num;
       cout<<"Enter the number:";
       cin>>num;
       for(int i=1;i<=num;i++){
        //spaces
        for(int j=1;j<=num-i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
       } */

    /*int num;
    cout<<"Enter the number:";
    cin>>num;
    for(int i=1;i<=num;i++){
        //spaces
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=num-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }*/

    //DIAMOND PROBLEM
    int num;
    cout << "Enter number: ";
    cin >> num;

    // Upper part
    for(int i = 1; i <= num; i++) {

        // spaces
        for(int j = 1; j <= num - i; j++) {
            cout << " ";
        }

        // stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    // Lower part
    for(int i = 1; i <= num - 1; i++) {

        // spaces
        for(int j = 1; j <= i; j++) {
            cout << " ";
        }

        // stars
        for(int j = 1; j <= num - i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;


    return 0;
}