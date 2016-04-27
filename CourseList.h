//
//  CourseList.h
//  Final Project
//
//  Created by Yifan Li on 4/24/16.
//  Copyright © 2016 Yifan Li. All rights reserved.
//

#ifndef CourseList_h
#define CourseList_h
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <sstream>
using namespace std;
//#include "Course.h"
//#include "CourseList.cpp"

class Course{
    
public:
    std::string ClassID;
    std::string className;
    std::string TeacherName;
    std::string Place;
    std::string level;
    int CourseNum;
    std::string time;
    std::string rate;
    std::string recom;
    Course(string);
};

class CourseList{
public:
    CourseList(std::string filepath);
    Course getPath();
    std::vector<Course> courses;
    std::vector<Course> shoppingCart;
    void searchName(std::string);
    void searchNum(int);
    void searchplace(std::string);
    void searchTeacher(std::string);
    void printClassinfo(Course);
    void searchLevel(std::string);
    void searchRate(std::string);
    void searchRecom(std::string);
    void Menu();
    void newMenu();

 
private:
    
   
    
    
};
#endif /* CourseList_h */
