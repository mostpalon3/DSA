//CPP Basics 
#include<bits/stdc++.h>
// #include<string>
//this include every library of cpp , but take a bit more time from normal but it is negligible 
// #include <iostream>//this is a library
// #include<math.h>//if we need to use mathematical fuction
#include<string>//for strings
using namespace std;

// int main(){
    // std::cout<<"hey sumit"<<"\n";
    // std::cout << "hey nsut!\n";
    // std::cout << "Hello world "<<std::endl;
    // return 0;
    //but we can use common std that is namespace std
    
    // cout<<"hey sumit"<<"\n";
    // cout << "hey nsut!\n";
    // cout << "Hello world "<<endl;
    // return 0;

    // int x, y ;
    // cin >> x >> y ;
    // cout << "Value of x :" << x << " and y :" << y << endl;
    // return 0;

    //Datatypes

    // int x = 10; //the place of x should be any character except any singular no. or the character shouldnt start with number 
    // //int has some limitation to store the the number value , which is 4 bytes , so we use datatypes like long or long long etc.
    // //long 
    // long z = 586846;
    // long long y = 128478245897532798;

    //float, double , long double 
    // float x = 5.6;
    // float y = 7.88;
    // double i = 6.77488;
    // cout<< i <<endl;

    //string and getline
    // string s1;
    // string s2 ;
    // cout<< "Enter the first string:\n";
    // cin>>s1 ,cout << "Now enter another string:\n" ,cin>>s2;
    // cout<< s1 << " " << s2 << endl;

    //here we have to give two times to print both the string so to print entire string in one time we use getline 
    // string str;
    // cout << "Enter your string value :\n";
    // getline(cin, str);
    // cout << str;
    //for less character or alternative for string with less space is char 
    // char ch ;
    // char ch1 = 't';
    // cin >> ch ;
    // cout << " The character entered is , " << ch << endl<< "and " << ch1;

    //we use the datatypes that is required accordingly not to use a bigger size datattype for small data 

    //Write a program that takes an input of age and prints out if you are an adult or not //

    // int age ;
    // cout << "Enter your age :\n";
    // cin >> age ; 

    // if ( age >= 18 ){
    //     cout << " Yes! You are an adult \n";
    // }
    // else {
    //     cout << " No ! You are not yet an adult\n ";
    // }

    /*
    A school has following rules for grading system :
    a. Below 25 - F
    b. 25 to 44 - E 
    c. 45 to 49 - D 
    d. 50 to 59 - C
    e .60 to 79 - B
    f. 80 to 100 - A
    Ask user to enter marks and print the corresponding grade 
    */

   //solution:
//    int marks ;
//    cout << "Enter your marks to analyse your grade: \n";
//    cin >> marks ;

//    if (marks < 25)
//    {
//     cout << " The grade for the entered marks is : F";
//    }
//    //else if is to save time since if will be excecuted for every if even we have met the answer
//     else if (marks>=25 && marks<= 44)//here I used && to show its use to pair up the condition
//    {
//     cout << " The grade for the entered marks is : E";
//    }
//     else if ( marks<=49 )
//    {
//     cout << " The grade for the entered marks is : D";
//    }
//     else if  (marks<=59 )
//    {
//     cout << " The grade for the entered marks is : C";
//    }
//     else if (marks<=79 )
//    {
//     cout << " The grade for the entered marks is : B";
//    }
//     else if (marks<=100)
//     {
//         cout << "The grade for the entered marks is A:";
//     }
//     else {
//         cout << " INVALID INPUT ! TRY AGAIN!";
//     }

/*Take the age from the user and then decide accoridngly 
1. If age < 18 ,
     print -> not eligible for the job 
2. If age >= 18,
    print-> eligible for the job 
3. If age >= 55 and age <= 57 , 
    print -> eligible for job , but retirement soon 
4. If age > 57 
     print -> retirement time 
*/

    // int age ;
    // cout << " Enter your age to check your eligibility :\n";
    // cin >> age ;
    // if (age < 18 )
    // {
    //     cout << " Sorry ! You are not eligible for the job ";
    // }
    // else if (age <= 57)
    // {
    //     cout << " Congratulations ! You are eligible for the job ";
    //     if (age >= 55)// this is called nested if else statement 
    //     {
    //         cout << ", but retirement soon";
    //     }
        
    // }
    // // else if (age <= 57 )
    // // {
    // //     cout << " You are eligible but the retirement will be soon";
    // // }//we can neglect this and in place we can use the above 
    // else if (age <= 100 && age > 57)
    // {
    //     cout << "Retirememnt time ";

    // } 
    // else{
    //     cout << "Enter a valid age ";
    // }
    
    /*
    Take the day no and print the corresponding day 
    for 1 print Monday , 
    for 2 print Tuesday and so on for & print Sunday .
    */
//    int day ;
//    cin >> day;
   //What happens in the switch is case is executed after the condition is given , sand it excecutes every case after that so thats why we have to break the statement after every 
//    switch (day){
//     case 1 :
//         cout << "Monday";
//         break;
//     case 2 :
//         cout << " Tuesday ";
//         break;
//     case 3 :
//         cout << " Wedenesday ";
//         break;
//     case 4 :
//         cout << "Thursday";
//         break;
//     case 5 :
//         cout << "Friday ";
//         break;
//     case 6 :
//         cout << "Saturday";
//         break;
//     case 7 :
//         cout << "Sunday";
//         break;
//     default:
//         cout<< "Invalid";
//    } 
//ARRAYS
    //1D Array
    // double arr[5];//any datatype can be assigned
    // cin >> arr[0]>> arr[1] >>arr[2]>> arr[3]>>arr[4];
    // // arr[3] += 10;
    // // arr[3] = 16;
    // cout << arr[3];

    // //2D Array
    // int arr[3][5];
    // arr[1][2] = 69;
    // cout << arr[1][2]<< endl;
    // cout << arr[2][3];//This will return the garbage value - random value assigned by the system is we dont assign this location any value 

//Strings
    // string s = "Naruto Uzumaki";
    // // cout << s[2];//here to the print the third character of the the string , since the counting is started from 0 , every character is stored as the index and the first index is the zero index 
    // // to find the length 
    // int len = s.size();
    // // to change the value of the string 
    // s[len - 1] = 'I';//here I is character so assign it as a character 
    // cout << s[len - 1];//to print the last letter , we used len - 1 since indexing here starts from 0
//For loops 
    // //the value of I will get updated everytime the last time it updates to 6 here zoro wont be printed since it aint meeting the conditions , so to confirm it we'll assign the i value outside the for loop and print the last updated value inside the for loop 
    // int i ;
    // for (int i = 1; i<=5; i = i + 1){
    //     cout << "Zoro"<< endl;
    // }
    // //if i is declared inside the loop , then the scope is limited to that 
    // cout << i << endl ;//the i will print the value where the loop got truncated 
    // //nested for loop can be used to print pattern 

//While loop 
    // int i= 1;
    // while(i <= 5){
    //     cout << "Sumit "<< i <<endl;
    //     i = i + 1;
    // }
    // int i= 2;//If the codition given is false and you want to execute the the codition for minimum one time we use 'do'
    // int a = 1;
    // while (a<= 1)
    // {
    //     cout <<a <<endl;
    //     a = a + 1;
    // }
    // do {
    //     cout << "Sumit "<< i <<endl;
    //     i = i + 1;
    // } while(i <= 1);//condition here is false 
    // cout << i << endl;//so it will print for the last type after passing the while loop
    // return 0;



// }
//from here I am commneting out the int main at the top
    //Functions
    /*
    functions are set of code which perform something for you
    Function are used to modularize the code 
    Functions are used to increase redeabality 
    functions are used to use the same code multiple times 
    4 kinds of functions 
    *void - which doesnt return anything 
    *return - 
    *parameterised
    *non parameterised
    */
   //void will do something but wont return anything 

// void printName(){
//     //nothing inside paranthesis means it doesnt carries any parameter , here printName is the name of the function 
//    cout<< "Hey Sumit!"<<endl;;//it is outside the intmain so no execution will happen 
//    //this is not parameterised
// }
// void pName(string name){
//     cout<<"hey"<< name << endl;
//     //this is parameterised
// }
// int main(){
//     printName();
//     //it will enter in the int main and the printName will be executed 

//     string name ;
//     cout << "enter the name ";
//     cin>> name ;
//     pName(name);
//    return 0;

// }
    
//Q. Take two numbers and print its sum  
    
int main (){
    int num1 , num2 ;
    cin>>num1>>num2 ;
    int num3 = num1 + num2;
    cout << num3;

    return 0;

}
