//
//  main.cpp
//  Final Project
//
//  Created by Yifan Li on 4/24/16.
//  Copyright © 2016 Yifan Li. All rights reserved.
//

#include <iostream>

//#include "CourseList.cpp"
#include "CourseList.h"

using namespace std;

void printcourse(Course course){
    cout<<"Course Name: "<<course.ClassID<<endl;
    cout<<"Course Number: "<<course.CourseNum<<endl;
    cout<<"Class name: "<<course.className<<endl;
    cout<<"Teacher Name: "<<course.TeacherName<<endl;
    cout<<"Place: "<<course.Place<<endl;
    cout<<"Time: "<<course.time<<endl;
    cout<<"Level: "<<course.level<<endl;
    cout<<"Rate: "<<course.rate<<endl;
    cout<<"Suggestion: "<<course.recom<<endl;
    cout<<endl;
    
}


void Menu(){
    cout << "======Main Menu======" << endl;
    cout << "1. Show all classes" << endl;
    cout << "2. Search for class" << endl;
    cout << "3. Quit" << endl;
}

void newMenu(){
    cout<<endl;
    cout << "1. Searching by Class name? " << endl;
    cout << "2.Searching by Course Number? "<<endl;
    cout << "3. Searching by place?  "<<endl;
    cout << "4. searching by class level? "<<endl;
    cout << "5. searching by rate? "<<endl;
    cout << "6. searching by suggestion? "<<endl;
}

void shoppingCart(){
    cout <<endl;
    cout << "Would you like to insert this class to your shoppingcart?  "<<endl;
    cout << "--1. YES--- "<<endl;
    cout << "--2. NO--- "<<endl;
}

int main(int argc, const char * argv[]) {
    int a = 0;
    string inputClass;
    int w=0;
    string name;
    int courseNumber;
    string place;
    //int option;
    string level;
    string r;
    string s;
    
    CourseList list(argv[1]);

    while(a>=0){
        Menu();
        cin>>a;
        while (a>=0){
            if(a>2){
                break;
            }
            if(a == 1){
                for(int i=0; i<list.courses.size()-1; i++) {
                    list.printClassinfo(list.courses[i]);
                }
                break;
            }
            if (a ==2 ){
                while (w>=0){
                    newMenu();
                    cin>>w;
                        if (w == 1){
                            cout<<"Enter a class name: ";
                            cin>>name;
                            list.searchName(name);
                            break;
                        }
                        else if (w == 2){
                            cout<<"Enter a course number: ";
                            cin>>courseNumber;
                            list.searchNum(courseNumber);
                            break;
                        }
                        else if (w == 3){
                            cout << "Enter a place: ";
                            cin >> place;
                            list.searchplace(place);
                            //break;
                        }
                        else if (w == 4){
                            cout<<"Enter a class level: ";
                            cin >> level;
                            list.searchLevel(level);
                            break;
                            }
                    
                        else if (w == 5){
                            cout<<"Enter a class rate: ";
                            cin >> r;
                            list.searchRate(r);
                            break;
                        }
                        else if (w == 6){
                            cout<<"Enter a class suggestion: ";
                            cin >> s;
                            list.searchRecom(s);
                            break;
                        }
                    
                            /*
                            shoppingCart();
                            cin>>option;
                            if (option == 1){
                                for(int i = 0; i < list.courses.size(); i++){
                                    if(place == list.courses[i].Place){
                                        CourseList.printClassinfo(list.courses[i]);
                                        Course s(CourseList(printClassinfo(list.courses[i])));
                                    }
                             */
                                 
                        }
                
                break;
            }
                if (a == 3){
                    cout<<"Good Bye"<<endl;
                    return 0;
                }
            
        }
   
}
}



