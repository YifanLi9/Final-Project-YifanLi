#include "CourseList.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

CourseList::CourseList(string filepath){
    ifstream courseFile(filepath);
    string lineContents;
    if(courseFile.is_open())
    while (!courseFile.eof()){
        getline(courseFile,lineContents);
        courses.push_back(Course(lineContents));
        //courses.push_back(s);
    }

    courseFile.close();
    
}

/*CourseList::searchClass(){
    string search;
    string line;
    int offset;
    ifstream infile;
    infile.open("/Users/yifanli/Desktop/CourseList\ copy.txt");
    cout << "Type the class name that you would like to search": <<endl;
    cin >> search;
    if (infile.is_open()){
        while (!infile.eof()) {
            getline(infile, line);
            if((offset=line.find(search,0)!= string::npos){
                cout<<"The class has been founded: "<<search<<endl;
            }
            infile.close();
            else{
                cour<<"The class cannot be founded: "<<search<<endl;
            }
        }
    }
    
    
}*/

void CourseList::searchName(std::string title){
    //search by class name
    bool found = false;
    for(int i = 0; i < courses.size(); i++){
        if(title == courses[i].className){
            printClassinfo(courses[i]);
            found = true;
        }
    }
    if(!found)
        cout<<"Course not found"<<endl;
}

void CourseList::searchNum(int number){
    bool found = false;
    for(int i = 0; i < courses.size(); i++){
        if(number ==courses[i].CourseNum){
            printClassinfo(courses[i]);
            found = true;
        }
    }
    if(!found)
        cout<<"Course not found"<<endl;
}

void CourseList::searchplace(string place){
    bool found = false;
    for(int i = 0; i < courses.size(); i++){
        if(place == courses[i].Place){
            printClassinfo(courses[i]);
            found = true;
            }
    }
    if (!found){
        cout<<"Course not found"<<endl;
    }
}

void CourseList::searchLevel(string level){
    bool found = false;
    for(int i = 0; i < courses.size(); i++){
        if(level == courses[i].level){
            printClassinfo(courses[i]);
            found = true;
        }
    }
    if (!found){
        cout<<"Course not found"<<endl;
    }
}

void CourseList::searchRate(string rate){
    bool found = false;
    for(int i = 0; i < courses.size(); i++){
        if(rate == courses[i].rate){
            printClassinfo(courses[i]);
            found = true;
        }
    }
    if (!found){
        cout<<"Course not found"<<endl;
    }
}


void CourseList::searchRecom(string recom){
    bool found = false;
    for(int i = 0; i < courses.size(); i++){
        if(recom == courses[i].recom){
            printClassinfo(courses[i]);
            found = true;
        }
    }
    if (!found){
        cout<<"Course not found"<<endl;
    }
}




void CourseList::printClassinfo(Course course){
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

void CourseList::Menu(){
    cout << "======Main Menu======" << endl;
    cout << "1. Show all classes" << endl;
    cout << "2. Search for class" << endl;
    cout << "3. My shopping cart" << endl;
    cout << "4. Quit" << endl;
}

void CourseList::newMenu(){
    cout<<endl;
    cout << "1. Searching by Class name? " << endl;
    cout << "2.Searching by Course Number? "<<endl;
    cout << "3. Searching by place?  "<<endl;
    cout << "4. searching by class level? "<<endl;
    cout << "5. searching by rate? "<<endl;
    cout << "6. searching by suggestion? "<<endl;
}
/*
void CourseList::shoppingCart(){
    cout <<endl;
    cout << "Would you like to insert this class to your shoppingcart?  "<<endl;
    cout << "--1. YES--- "<<endl;
    cout << "--2. NO--- "<<endl;
}
 */
