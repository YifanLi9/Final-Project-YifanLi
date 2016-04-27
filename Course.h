//
//  Course.h
//  Final Project
//
//  Created by Yifan Li on 4/24/16.
//  Copyright © 2016 Yifan Li. All rights reserved.
//

#ifndef Course_h
#define Course_h


#include <string>
#include <sstream>
#include "CourseList.h"


class Course{
public:
    Course(std::string coursinfomation);
    std::string getClassID();
    std::string getClassName();
    std::string getTeacherName();
    std::string getPlace();
    int getPlaceNum();
    int getCourseNum();
    void Menu();
private:
    std::string ClassID;
    std::string className;
    std::string TeacherName;
    std::string Place;
    int CourseNum;
    
    
};
#endif /* Course_h */
