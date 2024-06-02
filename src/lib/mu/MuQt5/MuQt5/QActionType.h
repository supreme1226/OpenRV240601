//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QActionType__h__
#define __MuQt5__QActionType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngine/QtWebEngine>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <MuQt5/Bridge.h>

namespace Mu {
class MuQt_QAction;

//
//  NOTE: file generated by qt2mu.py
//

class QActionType : public Class
{
  public:

    typedef MuQt_QAction MuQtType;
    typedef QAction QtType;

    //
    //  Constructors
    //

    QActionType(Context* context, 
           const char* name,
           Class* superClass = 0,
           Class* superClass2 = 0);

    virtual ~QActionType();

    static bool isInheritable() { return true; }
    static inline ClassInstance* cachedInstance(const MuQtType*);

    //
    //  Class API
    //

    virtual void load();

    MemberFunction* _func[4];
};

// Inheritable object

class MuQt_QAction : public QAction
{
  public:
    virtual ~MuQt_QAction();
    MuQt_QAction(Pointer muobj, const CallEnvironment*, QObject * parent) ;
    MuQt_QAction(Pointer muobj, const CallEnvironment*, const QString & text, QObject * parent) ;
    MuQt_QAction(Pointer muobj, const CallEnvironment*, const QIcon & icon, const QString & text, QObject * parent) ;
  protected:
    virtual bool event(QEvent * e) ;
  public:
    virtual bool eventFilter(QObject * watched, QEvent * event) ;
  protected:
    virtual void customEvent(QEvent * event) ;
    virtual void timerEvent(QTimerEvent * event) ;
  public:
    bool event_pub(QEvent * e)  { return event(e); }
    bool event_pub_parent(QEvent * e)  { return QAction::event(e); }
    void customEvent_pub(QEvent * event)  { customEvent(event); }
    void customEvent_pub_parent(QEvent * event)  { QAction::customEvent(event); }
    void timerEvent_pub(QTimerEvent * event)  { timerEvent(event); }
    void timerEvent_pub_parent(QTimerEvent * event)  { QAction::timerEvent(event); }
  public:
    const QActionType* _baseType;
    ClassInstance* _obj;
    const CallEnvironment* _env;
};

inline ClassInstance* QActionType::cachedInstance(const QActionType::MuQtType* obj) { return obj->_obj; }

} // Mu

#endif // __MuQt__QActionType__h__