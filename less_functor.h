//
//  less_functor.h
//  ProgrammingAssignment5
//
//  Created by Alexander Flaska on 5/4/16.
//  Copyright © 2016 Alexander Flaska. All rights reserved.
//

#ifndef less_functor_h
#define less_functor_h

#include <cstring>
// git test comment.
namespace CS2312
{
    
    template <typename T>
    class less
    {
    public:
        bool operator() (const T &left, const T &right)
        {
            return (left < right);
        }
    };
    
    template <>
    class less<const char*>
    {
    public:
        bool operator() (const char *left, const char *right)
        {
            return (strcmp(left, right) < 0);
        }
    };
}

    template <>
    class less<std::string>
    {
    public:
        bool operator() (const std::string &left, const std::string &right)
        {
            return (left < right);
        }
    };
    
    


#endif /* less_functor_h */


