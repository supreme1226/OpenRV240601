//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QWebEngineSettingsType__h__
#define __MuQt5__QWebEngineSettingsType__h__
#include <iostream>
#include <Mu/Class.h>

namespace Mu {

//
//  NOTE: file generated by qt2mu.py
//

class QWebEngineSettingsType : public Class
{
  public:
    //
    //  Types
    //

    typedef QWebEngineSettings ValueType;

    struct Struct
    {
        QWebEngineSettings* object;
    };

    //
    //  Constructors
    //

    QWebEngineSettingsType(Context* context, const char* name, Class* superClass = 0);
    virtual ~QWebEngineSettingsType();

    //
    //  Class API
    //

    virtual void load();
};

} // Mu

#endif // __MuQt5__QWebEngineSettingsType__h__
