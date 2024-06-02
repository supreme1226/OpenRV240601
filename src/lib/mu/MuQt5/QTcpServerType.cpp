//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#include <MuQt5/qtUtils.h>
#include <MuQt5/QTcpServerType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QtNetwork/QtNetwork>
#include <MuQt5/QWidgetType.h>
#include <MuQt5/QActionType.h>
#include <MuQt5/QIconType.h>
#include <Mu/BaseFunctions.h>
#include <Mu/Thread.h>
#include <Mu/Alias.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/ClassInstance.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/Exception.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>
#include <MuQt5/QTimerEventType.h>
#include <MuQt5/QTcpSocketType.h>
#include <MuQt5/QObjectType.h>
#include <MuQt5/QHostAddressType.h>
#include <MuQt5/QEventType.h>

//
//  NOTE: this file was automatically generated by qt2mu.py
//

namespace Mu {
using namespace std;

//----------------------------------------------------------------------
//  INHERITABLE TYPE IMPLEMENTATION

// destructor
MuQt_QTcpServer::~MuQt_QTcpServer()
{
    if (_obj)
    {
        *_obj->data<Pointer>() = Pointer(0);
        _obj->releaseExternal();
    }
    _obj = 0;
    _env = 0;
    _baseType = 0;
}

MuQt_QTcpServer::MuQt_QTcpServer(Pointer muobj, const CallEnvironment* ce, QObject * parent) 
 : QTcpServer(parent)
{
    _env = ce;
    _obj = reinterpret_cast<ClassInstance*>(muobj);
    _obj->retainExternal();
    MuLangContext* c = (MuLangContext*)_env->context();
    _baseType = c->findSymbolOfTypeByQualifiedName<QTcpServerType>(c->internName("qt.QTcpServer"));
}

bool MuQt_QTcpServer::hasPendingConnections() const
{
    if (!_env) return QTcpServer::hasPendingConnections();
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[0];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QTcpServer::hasPendingConnections();
    }
}

QTcpSocket * MuQt_QTcpServer::nextPendingConnection() 
{
    if (!_env) return QTcpServer::nextPendingConnection();
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[1];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
        return object<QTcpSocket>(rval._Pointer);
    }
    else
    {
        return QTcpServer::nextPendingConnection();
    }
}

bool MuQt_QTcpServer::event(QEvent * e) 
{
    if (!_env) return QTcpServer::event(e);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[2];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QEventType>(c,e,"qt.QEvent"));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QTcpServer::event(e);
    }
}

bool MuQt_QTcpServer::eventFilter(QObject * watched, QEvent * event) 
{
    if (!_env) return QTcpServer::eventFilter(watched, event);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[3];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(3);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeinstance<QObjectType>(c,watched,"qt.QObject"));
        args[2] = Value(makeqpointer<QEventType>(c,event,"qt.QEvent"));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QTcpServer::eventFilter(watched, event);
    }
}

void MuQt_QTcpServer::customEvent(QEvent * event) 
{
    if (!_env) { QTcpServer::customEvent(event); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[4];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QEventType>(c,event,"qt.QEvent"));
        Value rval = _env->call(F, args);
    }
    else
    {
        QTcpServer::customEvent(event);
    }
}

void MuQt_QTcpServer::timerEvent(QTimerEvent * event) 
{
    if (!_env) { QTcpServer::timerEvent(event); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[5];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QTimerEventType>(c,event,"qt.QTimerEvent"));
        Value rval = _env->call(F, args);
    }
    else
    {
        QTcpServer::timerEvent(event);
    }
}



//----------------------------------------------------------------------
//  Mu Type CONSTRUCTORS

QTcpServerType::QTcpServerType(Context* c, const char* name, Class* super, Class* super2)
: Class(c, name, vectorOf2(super, super2))
{
}

QTcpServerType::~QTcpServerType()
{
}

//----------------------------------------------------------------------
//  PRE-COMPILED FUNCTIONS

static Pointer
QTcpServer_QTcpServer_QObject(Thread& NODE_THREAD, Pointer obj)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    ClassInstance* widget = reinterpret_cast<ClassInstance*>(obj);

    if (!widget)
    {
        return 0;
    }
    else if (QTcpServer* w = object<QTcpServer>(widget))
    {
        QTcpServerType* type = 
            c->findSymbolOfTypeByQualifiedName<QTcpServerType>(c->internName("qt.QTcpServer"), false);
        ClassInstance* o = ClassInstance::allocate(type);
        setobject(o, w);
        return o;
    }
    else
    {
        throw BadCastException();
    }
}

static NODE_IMPLEMENTATION(castFromObject, Pointer)
{
    NODE_RETURN( QTcpServer_QTcpServer_QObject(NODE_THREAD, NODE_ARG(0, Pointer)) );
}

Pointer qt_QTcpServer_QTcpServer_QTcpServer_QTcpServer_QObject(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_parent)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QObject * arg1 = object<QObject>(param_parent);
    setobject(param_this, new MuQt_QTcpServer(param_this, NODE_THREAD.process()->callEnv(), arg1));
    return param_this;
}

void qt_QTcpServer_close_void_QTcpServer(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    arg0->close();
}

Pointer qt_QTcpServer_errorString_string_QTcpServer(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    return makestring(c,arg0->errorString());
}

bool qt_QTcpServer_hasPendingConnections_bool_QTcpServer(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    return isMuQtObject(arg0) ? arg0->QTcpServer::hasPendingConnections() : arg0->hasPendingConnections();
}

bool qt_QTcpServer_isListening_bool_QTcpServer(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    return arg0->isListening();
}

int qt_QTcpServer_maxPendingConnections_int_QTcpServer(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    return arg0->maxPendingConnections();
}

Pointer qt_QTcpServer_nextPendingConnection_QTcpSocket_QTcpServer(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    return isMuQtObject(arg0) ? makeinstance<QTcpSocketType>(c, arg0->QTcpServer::nextPendingConnection(), "qt.QTcpSocket") : makeinstance<QTcpSocketType>(c, arg0->nextPendingConnection(), "qt.QTcpSocket");
}

void qt_QTcpServer_pauseAccepting_void_QTcpServer(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    arg0->pauseAccepting();
}

void qt_QTcpServer_resumeAccepting_void_QTcpServer(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    arg0->resumeAccepting();
}

Pointer qt_QTcpServer_serverAddress_QHostAddress_QTcpServer(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    return makeqtype<QHostAddressType>(c,arg0->serverAddress(),"qt.QHostAddress");
}

int qt_QTcpServer_serverError_int_QTcpServer(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    return int(arg0->serverError());
}

void qt_QTcpServer_setMaxPendingConnections_void_QTcpServer_int(Mu::Thread& NODE_THREAD, Pointer param_this, int param_numConnections)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    int arg1 = (int)(param_numConnections);
    arg0->setMaxPendingConnections(arg1);
}

void qt_QTcpServer_addPendingConnection_void_QTcpServer_QTcpSocket(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_socket)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    QTcpSocket * arg1 = object<QTcpSocket>(param_socket);
    ((MuQt_QTcpServer*)arg0)->addPendingConnection_pub(arg1);
}

bool qt_QTcpServer_event_bool_QTcpServer_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_e)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    QEvent * arg1 = getqpointer<QEventType>(param_e);
    return isMuQtObject(arg0) ? arg0->QTcpServer::event(arg1) : arg0->event(arg1);
}

bool qt_QTcpServer_eventFilter_bool_QTcpServer_QObject_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_watched, Pointer param_event)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    QObject * arg1 = object<QObject>(param_watched);
    QEvent * arg2 = getqpointer<QEventType>(param_event);
    return isMuQtObject(arg0) ? arg0->QTcpServer::eventFilter(arg1, arg2) : arg0->eventFilter(arg1, arg2);
}

void qt_QTcpServer_customEvent_void_QTcpServer_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_event)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    QEvent * arg1 = getqpointer<QEventType>(param_event);
    if (isMuQtObject(arg0)) ((MuQt_QTcpServer*)arg0)->customEvent_pub_parent(arg1);
    else ((MuQt_QTcpServer*)arg0)->customEvent_pub(arg1);
}

void qt_QTcpServer_timerEvent_void_QTcpServer_QTimerEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_event)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTcpServer* arg0 = object<QTcpServer>(param_this);
    QTimerEvent * arg1 = getqpointer<QTimerEventType>(param_event);
    if (isMuQtObject(arg0)) ((MuQt_QTcpServer*)arg0)->timerEvent_pub_parent(arg1);
    else ((MuQt_QTcpServer*)arg0)->timerEvent_pub(arg1);
}


static NODE_IMPLEMENTATION(_n_QTcpServer0, Pointer)
{
    NODE_RETURN(qt_QTcpServer_QTcpServer_QTcpServer_QTcpServer_QObject(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_close0, void)
{
    qt_QTcpServer_close_void_QTcpServer(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer));
}

static NODE_IMPLEMENTATION(_n_errorString0, Pointer)
{
    NODE_RETURN(qt_QTcpServer_errorString_string_QTcpServer(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_hasPendingConnections0, bool)
{
    NODE_RETURN(qt_QTcpServer_hasPendingConnections_bool_QTcpServer(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isListening0, bool)
{
    NODE_RETURN(qt_QTcpServer_isListening_bool_QTcpServer(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_maxPendingConnections0, int)
{
    NODE_RETURN(qt_QTcpServer_maxPendingConnections_int_QTcpServer(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_nextPendingConnection0, Pointer)
{
    NODE_RETURN(qt_QTcpServer_nextPendingConnection_QTcpSocket_QTcpServer(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_pauseAccepting0, void)
{
    qt_QTcpServer_pauseAccepting_void_QTcpServer(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer));
}

static NODE_IMPLEMENTATION(_n_resumeAccepting0, void)
{
    qt_QTcpServer_resumeAccepting_void_QTcpServer(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer));
}

static NODE_IMPLEMENTATION(_n_serverAddress0, Pointer)
{
    NODE_RETURN(qt_QTcpServer_serverAddress_QHostAddress_QTcpServer(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_serverError0, int)
{
    NODE_RETURN(qt_QTcpServer_serverError_int_QTcpServer(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_setMaxPendingConnections0, void)
{
    qt_QTcpServer_setMaxPendingConnections_void_QTcpServer_int(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int));
}

static NODE_IMPLEMENTATION(_n_addPendingConnection0, void)
{
    qt_QTcpServer_addPendingConnection_void_QTcpServer_QTcpSocket(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_event0, bool)
{
    NODE_RETURN(qt_QTcpServer_event_bool_QTcpServer_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_eventFilter0, bool)
{
    NODE_RETURN(qt_QTcpServer_eventFilter_bool_QTcpServer_QObject_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, Pointer)));
}

static NODE_IMPLEMENTATION(_n_customEvent0, void)
{
    qt_QTcpServer_customEvent_void_QTcpServer_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_timerEvent0, void)
{
    qt_QTcpServer_timerEvent_void_QTcpServer_QTimerEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}



void
QTcpServerType::load()
{
    USING_MU_FUNCTION_SYMBOLS;
    MuLangContext* c = static_cast<MuLangContext*>(context());
    Module* global = globalModule();
    
    const string typeName        = name();
    const string refTypeName     = typeName + "&";
    const string fullTypeName    = fullyQualifiedName();
    const string fullRefTypeName = fullTypeName + "&";
    const char*  tn              = typeName.c_str();
    const char*  ftn             = fullTypeName.c_str();
    const char*  rtn             = refTypeName.c_str();
    const char*  frtn            = fullRefTypeName.c_str();

    scope()->addSymbols(new ReferenceType(c, rtn, this),

                        new Function(c, tn, BaseFunctions::dereference, Cast,
                                     Return, ftn,
                                     Args, frtn, End),

                        EndArguments);
    
    addSymbols(new Function(c, "__allocate", BaseFunctions::classAllocate, None,
                            Return, ftn,
                            End),


               new Function(c, tn, castFromObject, Cast,
                            Compiled, QTcpServer_QTcpServer_QObject,
                            Return, ftn,
                            Parameters,
                            new Param(c, "object", "qt.QObject"),
                            End),

               EndArguments );

addSymbols(
    // enums
    // member functions
    new Function(c, "QTcpServer", _n_QTcpServer0, None, Compiled, qt_QTcpServer_QTcpServer_QTcpServer_QTcpServer_QObject, Return, "qt.QTcpServer", Parameters, new Param(c, "this", "qt.QTcpServer"), new Param(c, "parent", "qt.QObject"), End),
    new Function(c, "close", _n_close0, None, Compiled, qt_QTcpServer_close_void_QTcpServer, Return, "void", Parameters, new Param(c, "this", "qt.QTcpServer"), End),
    new Function(c, "errorString", _n_errorString0, None, Compiled, qt_QTcpServer_errorString_string_QTcpServer, Return, "string", Parameters, new Param(c, "this", "qt.QTcpServer"), End),
    _func[0] = new MemberFunction(c, "hasPendingConnections", _n_hasPendingConnections0, None, Compiled, qt_QTcpServer_hasPendingConnections_bool_QTcpServer, Return, "bool", Parameters, new Param(c, "this", "qt.QTcpServer"), End),
    new Function(c, "isListening", _n_isListening0, None, Compiled, qt_QTcpServer_isListening_bool_QTcpServer, Return, "bool", Parameters, new Param(c, "this", "qt.QTcpServer"), End),
    // MISSING: listen (bool; QTcpServer this, QHostAddress address, "quint16" port)
    new Function(c, "maxPendingConnections", _n_maxPendingConnections0, None, Compiled, qt_QTcpServer_maxPendingConnections_int_QTcpServer, Return, "int", Parameters, new Param(c, "this", "qt.QTcpServer"), End),
    _func[1] = new MemberFunction(c, "nextPendingConnection", _n_nextPendingConnection0, None, Compiled, qt_QTcpServer_nextPendingConnection_QTcpSocket_QTcpServer, Return, "qt.QTcpSocket", Parameters, new Param(c, "this", "qt.QTcpServer"), End),
    new Function(c, "pauseAccepting", _n_pauseAccepting0, None, Compiled, qt_QTcpServer_pauseAccepting_void_QTcpServer, Return, "void", Parameters, new Param(c, "this", "qt.QTcpServer"), End),
    // MISSING: proxy ("QNetworkProxy"; QTcpServer this)
    new Function(c, "resumeAccepting", _n_resumeAccepting0, None, Compiled, qt_QTcpServer_resumeAccepting_void_QTcpServer, Return, "void", Parameters, new Param(c, "this", "qt.QTcpServer"), End),
    new Function(c, "serverAddress", _n_serverAddress0, None, Compiled, qt_QTcpServer_serverAddress_QHostAddress_QTcpServer, Return, "qt.QHostAddress", Parameters, new Param(c, "this", "qt.QTcpServer"), End),
    new Function(c, "serverError", _n_serverError0, None, Compiled, qt_QTcpServer_serverError_int_QTcpServer, Return, "int", Parameters, new Param(c, "this", "qt.QTcpServer"), End),
    // MISSING: serverPort ("quint16"; QTcpServer this)
    new Function(c, "setMaxPendingConnections", _n_setMaxPendingConnections0, None, Compiled, qt_QTcpServer_setMaxPendingConnections_void_QTcpServer_int, Return, "void", Parameters, new Param(c, "this", "qt.QTcpServer"), new Param(c, "numConnections", "int"), End),
    // MISSING: setProxy (void; QTcpServer this, "const QNetworkProxy &" networkProxy)
    // MISSING: setSocketDescriptor (bool; QTcpServer this, "qintptr" socketDescriptor)
    // MISSING: socketDescriptor ("qintptr"; QTcpServer this)
    // MISSING: waitForNewConnection (bool; QTcpServer this, int msec, "bool *" timedOut)
    new Function(c, "addPendingConnection", _n_addPendingConnection0, None, Compiled, qt_QTcpServer_addPendingConnection_void_QTcpServer_QTcpSocket, Return, "void", Parameters, new Param(c, "this", "qt.QTcpServer"), new Param(c, "socket", "qt.QTcpSocket"), End),
    // MISSING: incomingConnection (void; QTcpServer this, "qintptr" socketDescriptor) // protected
    _func[2] = new MemberFunction(c, "event", _n_event0, None, Compiled, qt_QTcpServer_event_bool_QTcpServer_QEvent, Return, "bool", Parameters, new Param(c, "this", "qt.QTcpServer"), new Param(c, "e", "qt.QEvent"), End),
    _func[3] = new MemberFunction(c, "eventFilter", _n_eventFilter0, None, Compiled, qt_QTcpServer_eventFilter_bool_QTcpServer_QObject_QEvent, Return, "bool", Parameters, new Param(c, "this", "qt.QTcpServer"), new Param(c, "watched", "qt.QObject"), new Param(c, "event", "qt.QEvent"), End),
    // MISSING: metaObject ("const QMetaObject *"; QTcpServer this)
    // MISSING: childEvent (void; QTcpServer this, "QChildEvent *" event) // protected
    // MISSING: connectNotify (void; QTcpServer this, "const QMetaMethod &" signal) // protected
    _func[4] = new MemberFunction(c, "customEvent", _n_customEvent0, None, Compiled, qt_QTcpServer_customEvent_void_QTcpServer_QEvent, Return, "void", Parameters, new Param(c, "this", "qt.QTcpServer"), new Param(c, "event", "qt.QEvent"), End),
    // MISSING: disconnectNotify (void; QTcpServer this, "const QMetaMethod &" signal) // protected
    _func[5] = new MemberFunction(c, "timerEvent", _n_timerEvent0, None, Compiled, qt_QTcpServer_timerEvent_void_QTcpServer_QTimerEvent, Return, "void", Parameters, new Param(c, "this", "qt.QTcpServer"), new Param(c, "event", "qt.QTimerEvent"), End),
    // static functions
    EndArguments);
globalScope()->addSymbols(
    EndArguments);
scope()->addSymbols(
    EndArguments);


    const char** propExclusions = 0;

    populate(this, QTcpServer::staticMetaObject, propExclusions);
}

} // Mu
