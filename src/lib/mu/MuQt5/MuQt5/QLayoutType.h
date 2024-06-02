//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QLayoutType__h__
#define __MuQt5__QLayoutType__h__
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
class MuQt_QLayout;

//
//  NOTE: file generated by qt2mu.py
//

class QLayoutType : public Class
{
  public:

    typedef MuQt_QLayout MuQtType;
    typedef QLayout QtType;

    //
    //  Constructors
    //

    QLayoutType(Context* context, 
           const char* name,
           Class* superClass = 0,
           Class* superClass2 = 0);

    virtual ~QLayoutType();

    static bool isInheritable() { return true; }
    static inline ClassInstance* cachedInstance(const MuQtType*);

    //
    //  Class API
    //

    virtual void load();

    MemberFunction* _func[23];
};

// Inheritable object

class MuQt_QLayout : public QLayout
{
  public:
    MuQt_QLayout(Pointer muobj, const CallEnvironment*, QWidget * parent) ;
    MuQt_QLayout(Pointer muobj, const CallEnvironment*) ;
    virtual void addItem(QLayoutItem * item) ;
    virtual int count() const ;
    virtual int indexOf(QWidget * widget) const;
    virtual QLayoutItem * itemAt(int index) const ;
    virtual QLayoutItem * takeAt(int index) ;
    virtual QSizePolicy::ControlTypes controlTypes() const;
    virtual Qt::Orientations expandingDirections() const;
    virtual QRect geometry() const;
    virtual void invalidate() ;
    virtual bool isEmpty() const;
    virtual QLayout * layout() ;
    virtual QSize maximumSize() const;
    virtual QSize minimumSize() const;
    virtual void setGeometry(const QRect & r) ;
    virtual bool event(QEvent * e) ;
    virtual bool eventFilter(QObject * watched, QEvent * event) ;
  protected:
    virtual void customEvent(QEvent * event) ;
    virtual void timerEvent(QTimerEvent * event) ;
  public:
    virtual bool hasHeightForWidth() const;
    virtual int heightForWidth(int w) const;
    virtual int minimumHeightForWidth(int w) const;
    virtual QSize sizeHint() const ;
    virtual QWidget * widget() ;
  public:
    void addChildLayout_pub(QLayout * l)  { addChildLayout(l); }
    void addChildLayout_pub_parent(QLayout * l)  { QLayout::addChildLayout(l); }
    void addChildWidget_pub(QWidget * w)  { addChildWidget(w); }
    void addChildWidget_pub_parent(QWidget * w)  { QLayout::addChildWidget(w); }
    QRect alignmentRect_pub(const QRect & r) const { return alignmentRect(r); }
    QRect alignmentRect_pub_parent(const QRect & r) const { return QLayout::alignmentRect(r); }
    void customEvent_pub(QEvent * event)  { customEvent(event); }
    void customEvent_pub_parent(QEvent * event)  { QLayout::customEvent(event); }
    void timerEvent_pub(QTimerEvent * event)  { timerEvent(event); }
    void timerEvent_pub_parent(QTimerEvent * event)  { QLayout::timerEvent(event); }
  public:
    const QLayoutType* _baseType;
    ClassInstance* _obj;
    const CallEnvironment* _env;
};

inline ClassInstance* QLayoutType::cachedInstance(const QLayoutType::MuQtType* obj) { return obj->_obj; }

} // Mu

#endif // __MuQt__QLayoutType__h__
