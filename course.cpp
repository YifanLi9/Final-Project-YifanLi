#include <sstream>
#include <iostream>
#include "CourseList.h"

using namespace std;


Course::Course(string lineContent){
    stringstream line(lineContent);
    line>>ClassID;
    line >>CourseNum;
    line>>className;
    line>>TeacherName;
    line>>Place;
    line >>time;
    line >>level;
    line >>rate;
    line >>recom;
}