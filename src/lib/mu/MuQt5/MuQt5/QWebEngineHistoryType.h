//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QWebEngineHistoryType__h__
#define __MuQt5__QWebEngineHistoryType__h__
#include <iostream>
#include <Mu/Class.h>

namespace Mu {

//
//  NOTE: file generated by qt2mu.py
//

class QWebEngineHistoryType : public Class
{
  public:
    //
    //  Types
    //

    typedef QWebEngineHistory ValueType;

    struct Struct
    {
        QWebEngineHistory* object;
    };

    //
    //  Constructors
    //

    QWebEngineHistoryType(Context* context, const char* name, Class* superClass = 0);
    virtual ~QWebEngineHistoryType();

    //
    //  Class API
    //

    virtual void load();
};

} // Mu

#endif // __MuQt5__QWebEngineHistoryType__h__
