//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#include <MuQt5/qtUtils.h>
#include <MuQt5/QGuiApplicationType.h>
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
#include <MuQt5/QObjectType.h>
#include <MuQt5/QEventType.h>
#include <MuQt5/QCursorType.h>
#include <MuQt5/QPaletteType.h>
#include <MuQt5/QClipboardType.h>
#include <MuQt5/QFontType.h>

//
//  NOTE: this file was automatically generated by qt2mu.py
//

namespace Mu {
using namespace std;

//----------------------------------------------------------------------
//  INHERITABLE TYPE IMPLEMENTATION

// destructor
MuQt_QGuiApplication::~MuQt_QGuiApplication()
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

bool MuQt_QGuiApplication::notify(QObject * object, QEvent * event) 
{
    if (!_env) return QGuiApplication::notify(object, event);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[0];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(3);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeinstance<QObjectType>(c,object,"qt.QObject"));
        args[2] = Value(makeqpointer<QEventType>(c,event,"qt.QEvent"));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QGuiApplication::notify(object, event);
    }
}

bool MuQt_QGuiApplication::event(QEvent * e) 
{
    if (!_env) return QGuiApplication::event(e);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[1];
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
        return QGuiApplication::event(e);
    }
}



//----------------------------------------------------------------------
//  Mu Type CONSTRUCTORS

QGuiApplicationType::QGuiApplicationType(Context* c, const char* name, Class* super, Class* super2)
: Class(c, name, vectorOf2(super, super2))
{
}

QGuiApplicationType::~QGuiApplicationType()
{
}

//----------------------------------------------------------------------
//  PRE-COMPILED FUNCTIONS

static Pointer
QGuiApplication_QGuiApplication_QObject(Thread& NODE_THREAD, Pointer obj)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    ClassInstance* widget = reinterpret_cast<ClassInstance*>(obj);

    if (!widget)
    {
        return 0;
    }
    else if (QGuiApplication* w = object<QGuiApplication>(widget))
    {
        QGuiApplicationType* type = 
            c->findSymbolOfTypeByQualifiedName<QGuiApplicationType>(c->internName("qt.QGuiApplication"), false);
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
    NODE_RETURN( QGuiApplication_QGuiApplication_QObject(NODE_THREAD, NODE_ARG(0, Pointer)) );
}

double qt_QGuiApplication_devicePixelRatio_double_QGuiApplication(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QGuiApplication* arg0 = object<QGuiApplication>(param_this);
    return arg0->devicePixelRatio();
}

bool qt_QGuiApplication_isSavingSession_bool_QGuiApplication(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QGuiApplication* arg0 = object<QGuiApplication>(param_this);
    return arg0->isSavingSession();
}

bool qt_QGuiApplication_isSessionRestored_bool_QGuiApplication(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QGuiApplication* arg0 = object<QGuiApplication>(param_this);
    return arg0->isSessionRestored();
}

Pointer qt_QGuiApplication_sessionId_string_QGuiApplication(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QGuiApplication* arg0 = object<QGuiApplication>(param_this);
    return makestring(c,arg0->sessionId());
}

Pointer qt_QGuiApplication_sessionKey_string_QGuiApplication(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QGuiApplication* arg0 = object<QGuiApplication>(param_this);
    return makestring(c,arg0->sessionKey());
}

bool qt_QGuiApplication_notify_bool_QGuiApplication_QObject_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_object, Pointer param_event)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QGuiApplication* arg0 = object<QGuiApplication>(param_this);
    QObject * arg1 = object<QObject>(param_object);
    QEvent * arg2 = getqpointer<QEventType>(param_event);
    return isMuQtObject(arg0) ? arg0->QGuiApplication::notify(arg1, arg2) : arg0->notify(arg1, arg2);
}

bool qt_QGuiApplication_event_bool_QGuiApplication_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_e)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QGuiApplication* arg0 = object<QGuiApplication>(param_this);
    QEvent * arg1 = getqpointer<QEventType>(param_e);
    return isMuQtObject(arg0) ? ((MuQt_QGuiApplication*)arg0)->event_pub_parent(arg1) : ((MuQt_QGuiApplication*)arg0)->event_pub(arg1);
}

int qt_QGuiApplication_applicationState_int(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return int(QGuiApplication::applicationState());
}

void qt_QGuiApplication_changeOverrideCursor_void_QCursor(Mu::Thread& NODE_THREAD, Pointer param_cursor)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QCursor  arg0 = getqtype<QCursorType>(param_cursor);
    QGuiApplication::changeOverrideCursor(arg0);
}

Pointer qt_QGuiApplication_clipboard_QClipboard(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return makeinstance<QClipboardType>(c, QGuiApplication::clipboard(), "qt.QClipboard");
}

bool qt_QGuiApplication_desktopSettingsAware_bool(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return QGuiApplication::desktopSettingsAware();
}

int qt_QGuiApplication_exec_int(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return QGuiApplication::exec();
}

Pointer qt_QGuiApplication_focusObject_QObject(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return makeinstance<QObjectType>(c, QGuiApplication::focusObject(), "qt.QObject");
}

Pointer qt_QGuiApplication_font_QFont(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return makeqtype<QFontType>(c,QGuiApplication::font(),"qt.QFont");
}

bool qt_QGuiApplication_isFallbackSessionManagementEnabled_bool(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return QGuiApplication::isFallbackSessionManagementEnabled();
}

bool qt_QGuiApplication_isLeftToRight_bool(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return QGuiApplication::isLeftToRight();
}

bool qt_QGuiApplication_isRightToLeft_bool(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return QGuiApplication::isRightToLeft();
}

int qt_QGuiApplication_keyboardModifiers_int(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return int(QGuiApplication::keyboardModifiers());
}

int qt_QGuiApplication_mouseButtons_int(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return int(QGuiApplication::mouseButtons());
}

Pointer qt_QGuiApplication_palette_QPalette(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return makeqtype<QPaletteType>(c,QGuiApplication::palette(),"qt.QPalette");
}

int qt_QGuiApplication_queryKeyboardModifiers_int(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return int(QGuiApplication::queryKeyboardModifiers());
}

void qt_QGuiApplication_restoreOverrideCursor_void(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QGuiApplication::restoreOverrideCursor();
}

void qt_QGuiApplication_setDesktopSettingsAware_void_bool(Mu::Thread& NODE_THREAD, bool param_on)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    bool arg0 = (bool)(param_on);
    QGuiApplication::setDesktopSettingsAware(arg0);
}

void qt_QGuiApplication_setFallbackSessionManagementEnabled_void_bool(Mu::Thread& NODE_THREAD, bool param_enabled)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    bool arg0 = (bool)(param_enabled);
    QGuiApplication::setFallbackSessionManagementEnabled(arg0);
}

void qt_QGuiApplication_setFont_void_QFont(Mu::Thread& NODE_THREAD, Pointer param_font)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFont  arg0 = getqtype<QFontType>(param_font);
    QGuiApplication::setFont(arg0);
}

void qt_QGuiApplication_setOverrideCursor_void_QCursor(Mu::Thread& NODE_THREAD, Pointer param_cursor)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QCursor  arg0 = getqtype<QCursorType>(param_cursor);
    QGuiApplication::setOverrideCursor(arg0);
}

void qt_QGuiApplication_setPalette_void_QPalette(Mu::Thread& NODE_THREAD, Pointer param_pal)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QPalette  arg0 = getqtype<QPaletteType>(param_pal);
    QGuiApplication::setPalette(arg0);
}

void qt_QGuiApplication_sync_void(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QGuiApplication::sync();
}


static NODE_IMPLEMENTATION(_n_devicePixelRatio0, double)
{
    NODE_RETURN(qt_QGuiApplication_devicePixelRatio_double_QGuiApplication(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isSavingSession0, bool)
{
    NODE_RETURN(qt_QGuiApplication_isSavingSession_bool_QGuiApplication(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isSessionRestored0, bool)
{
    NODE_RETURN(qt_QGuiApplication_isSessionRestored_bool_QGuiApplication(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_sessionId0, Pointer)
{
    NODE_RETURN(qt_QGuiApplication_sessionId_string_QGuiApplication(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_sessionKey0, Pointer)
{
    NODE_RETURN(qt_QGuiApplication_sessionKey_string_QGuiApplication(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_notify0, bool)
{
    NODE_RETURN(qt_QGuiApplication_notify_bool_QGuiApplication_QObject_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, Pointer)));
}

static NODE_IMPLEMENTATION(_n_event0, bool)
{
    NODE_RETURN(qt_QGuiApplication_event_bool_QGuiApplication_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_applicationState0, int)
{
    NODE_RETURN(qt_QGuiApplication_applicationState_int(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_changeOverrideCursor0, void)
{
    qt_QGuiApplication_changeOverrideCursor_void_QCursor(NODE_THREAD, NODE_ARG(0, Pointer));
}

static NODE_IMPLEMENTATION(_n_clipboard0, Pointer)
{
    NODE_RETURN(qt_QGuiApplication_clipboard_QClipboard(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_desktopSettingsAware0, bool)
{
    NODE_RETURN(qt_QGuiApplication_desktopSettingsAware_bool(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_exec0, int)
{
    NODE_RETURN(qt_QGuiApplication_exec_int(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_focusObject0, Pointer)
{
    NODE_RETURN(qt_QGuiApplication_focusObject_QObject(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_font0, Pointer)
{
    NODE_RETURN(qt_QGuiApplication_font_QFont(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_isFallbackSessionManagementEnabled0, bool)
{
    NODE_RETURN(qt_QGuiApplication_isFallbackSessionManagementEnabled_bool(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_isLeftToRight0, bool)
{
    NODE_RETURN(qt_QGuiApplication_isLeftToRight_bool(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_isRightToLeft0, bool)
{
    NODE_RETURN(qt_QGuiApplication_isRightToLeft_bool(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_keyboardModifiers0, int)
{
    NODE_RETURN(qt_QGuiApplication_keyboardModifiers_int(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_mouseButtons0, int)
{
    NODE_RETURN(qt_QGuiApplication_mouseButtons_int(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_palette0, Pointer)
{
    NODE_RETURN(qt_QGuiApplication_palette_QPalette(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_queryKeyboardModifiers0, int)
{
    NODE_RETURN(qt_QGuiApplication_queryKeyboardModifiers_int(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_restoreOverrideCursor0, void)
{
    qt_QGuiApplication_restoreOverrideCursor_void(NODE_THREAD);
}

static NODE_IMPLEMENTATION(_n_setDesktopSettingsAware0, void)
{
    qt_QGuiApplication_setDesktopSettingsAware_void_bool(NODE_THREAD, NODE_ARG(0, bool));
}

static NODE_IMPLEMENTATION(_n_setFallbackSessionManagementEnabled0, void)
{
    qt_QGuiApplication_setFallbackSessionManagementEnabled_void_bool(NODE_THREAD, NODE_ARG(0, bool));
}

static NODE_IMPLEMENTATION(_n_setFont0, void)
{
    qt_QGuiApplication_setFont_void_QFont(NODE_THREAD, NODE_ARG(0, Pointer));
}

static NODE_IMPLEMENTATION(_n_setOverrideCursor0, void)
{
    qt_QGuiApplication_setOverrideCursor_void_QCursor(NODE_THREAD, NODE_ARG(0, Pointer));
}

static NODE_IMPLEMENTATION(_n_setPalette0, void)
{
    qt_QGuiApplication_setPalette_void_QPalette(NODE_THREAD, NODE_ARG(0, Pointer));
}

static NODE_IMPLEMENTATION(_n_sync0, void)
{
    qt_QGuiApplication_sync_void(NODE_THREAD);
}



void
QGuiApplicationType::load()
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
                            Compiled, QGuiApplication_QGuiApplication_QObject,
                            Return, ftn,
                            Parameters,
                            new Param(c, "object", "qt.QObject"),
                            End),

               EndArguments );

addSymbols(
    // enums
    // member functions
    // MISSING: QGuiApplication (QGuiApplication; QGuiApplication this, "int &" argc, "char * *" argv)
    new Function(c, "devicePixelRatio", _n_devicePixelRatio0, None, Compiled, qt_QGuiApplication_devicePixelRatio_double_QGuiApplication, Return, "double", Parameters, new Param(c, "this", "qt.QGuiApplication"), End),
    new Function(c, "isSavingSession", _n_isSavingSession0, None, Compiled, qt_QGuiApplication_isSavingSession_bool_QGuiApplication, Return, "bool", Parameters, new Param(c, "this", "qt.QGuiApplication"), End),
    new Function(c, "isSessionRestored", _n_isSessionRestored0, None, Compiled, qt_QGuiApplication_isSessionRestored_bool_QGuiApplication, Return, "bool", Parameters, new Param(c, "this", "qt.QGuiApplication"), End),
    new Function(c, "sessionId", _n_sessionId0, None, Compiled, qt_QGuiApplication_sessionId_string_QGuiApplication, Return, "string", Parameters, new Param(c, "this", "qt.QGuiApplication"), End),
    new Function(c, "sessionKey", _n_sessionKey0, None, Compiled, qt_QGuiApplication_sessionKey_string_QGuiApplication, Return, "string", Parameters, new Param(c, "this", "qt.QGuiApplication"), End),
    _func[0] = new MemberFunction(c, "notify", _n_notify0, None, Compiled, qt_QGuiApplication_notify_bool_QGuiApplication_QObject_QEvent, Return, "bool", Parameters, new Param(c, "this", "qt.QGuiApplication"), new Param(c, "object", "qt.QObject"), new Param(c, "event", "qt.QEvent"), End),
    _func[1] = new MemberFunction(c, "event", _n_event0, None, Compiled, qt_QGuiApplication_event_bool_QGuiApplication_QEvent, Return, "bool", Parameters, new Param(c, "this", "qt.QGuiApplication"), new Param(c, "e", "qt.QEvent"), End),
    // static functions
    // MISSING: allWindows ("QWindowList"; )
    new Function(c, "applicationState", _n_applicationState0, None, Compiled, qt_QGuiApplication_applicationState_int, Return, "int", End),
    new Function(c, "changeOverrideCursor", _n_changeOverrideCursor0, None, Compiled, qt_QGuiApplication_changeOverrideCursor_void_QCursor, Return, "void", Parameters, new Param(c, "cursor", "qt.QCursor"), End),
    new Function(c, "clipboard", _n_clipboard0, None, Compiled, qt_QGuiApplication_clipboard_QClipboard, Return, "qt.QClipboard", End),
    new Function(c, "desktopSettingsAware", _n_desktopSettingsAware0, None, Compiled, qt_QGuiApplication_desktopSettingsAware_bool, Return, "bool", End),
    new Function(c, "exec", _n_exec0, None, Compiled, qt_QGuiApplication_exec_int, Return, "int", End),
    new Function(c, "focusObject", _n_focusObject0, None, Compiled, qt_QGuiApplication_focusObject_QObject, Return, "qt.QObject", End),
    // MISSING: focusWindow ("QWindow *"; )
    new Function(c, "font", _n_font0, None, Compiled, qt_QGuiApplication_font_QFont, Return, "qt.QFont", End),
    // MISSING: inputMethod ("QInputMethod *"; )
    new Function(c, "isFallbackSessionManagementEnabled", _n_isFallbackSessionManagementEnabled0, None, Compiled, qt_QGuiApplication_isFallbackSessionManagementEnabled_bool, Return, "bool", End),
    new Function(c, "isLeftToRight", _n_isLeftToRight0, None, Compiled, qt_QGuiApplication_isLeftToRight_bool, Return, "bool", End),
    new Function(c, "isRightToLeft", _n_isRightToLeft0, None, Compiled, qt_QGuiApplication_isRightToLeft_bool, Return, "bool", End),
    new Function(c, "keyboardModifiers", _n_keyboardModifiers0, None, Compiled, qt_QGuiApplication_keyboardModifiers_int, Return, "int", End),
    // MISSING: modalWindow ("QWindow *"; )
    new Function(c, "mouseButtons", _n_mouseButtons0, None, Compiled, qt_QGuiApplication_mouseButtons_int, Return, "int", End),
    new Function(c, "palette", _n_palette0, None, Compiled, qt_QGuiApplication_palette_QPalette, Return, "qt.QPalette", End),
    // MISSING: platformFunction ("QFunctionPointer"; QByteArray function)
    // MISSING: platformNativeInterface ("QPlatformNativeInterface *"; )
    // MISSING: primaryScreen ("QScreen *"; )
    new Function(c, "queryKeyboardModifiers", _n_queryKeyboardModifiers0, None, Compiled, qt_QGuiApplication_queryKeyboardModifiers_int, Return, "int", End),
    new Function(c, "restoreOverrideCursor", _n_restoreOverrideCursor0, None, Compiled, qt_QGuiApplication_restoreOverrideCursor_void, Return, "void", End),
    // MISSING: screens ("QList<QScreen * >"; )
    new Function(c, "setDesktopSettingsAware", _n_setDesktopSettingsAware0, None, Compiled, qt_QGuiApplication_setDesktopSettingsAware_void_bool, Return, "void", Parameters, new Param(c, "on", "bool"), End),
    new Function(c, "setFallbackSessionManagementEnabled", _n_setFallbackSessionManagementEnabled0, None, Compiled, qt_QGuiApplication_setFallbackSessionManagementEnabled_void_bool, Return, "void", Parameters, new Param(c, "enabled", "bool"), End),
    new Function(c, "setFont", _n_setFont0, None, Compiled, qt_QGuiApplication_setFont_void_QFont, Return, "void", Parameters, new Param(c, "font", "qt.QFont"), End),
    new Function(c, "setOverrideCursor", _n_setOverrideCursor0, None, Compiled, qt_QGuiApplication_setOverrideCursor_void_QCursor, Return, "void", Parameters, new Param(c, "cursor", "qt.QCursor"), End),
    new Function(c, "setPalette", _n_setPalette0, None, Compiled, qt_QGuiApplication_setPalette_void_QPalette, Return, "void", Parameters, new Param(c, "pal", "qt.QPalette"), End),
    // MISSING: styleHints ("QStyleHints *"; )
    new Function(c, "sync", _n_sync0, None, Compiled, qt_QGuiApplication_sync_void, Return, "void", End),
    // MISSING: topLevelAt ("QWindow *"; QPoint pos)
    // MISSING: topLevelWindows ("QWindowList"; )
    EndArguments);
globalScope()->addSymbols(
    EndArguments);
scope()->addSymbols(
    EndArguments);


    const char** propExclusions = 0;

    populate(this, QGuiApplication::staticMetaObject, propExclusions);
}

} // Mu
