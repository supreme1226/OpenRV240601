//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#include <MuQt5/qtUtils.h>
#include <MuQt5/QFileInfoType.h>
#include <MuQt5/QActionType.h>
#include <MuQt5/QWidgetType.h>
#include <Mu/Alias.h>
#include <Mu/BaseFunctions.h>
#include <Mu/ClassInstance.h>
#include <Mu/Exception.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/Thread.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QtNetwork/QtNetwork>
#include <MuQt5/QDirType.h>
#include <MuQt5/QFileType.h>
#include <MuQt5/QDateTimeType.h>
#include <MuQt5/QDirType.h>
#include <TwkUtil/File.h>
#include <TwkQtCoreUtil/QtConvert.h>

//
//  NOTE: this file was automatically generated by qt2mu.py
//

namespace Mu {
using namespace std;

QFileInfoType::Instance::Instance(const Class* c) : ClassInstance(c)
{
}

QFileInfoType::QFileInfoType(Context* c, const char* name, Class* super)
    : Class(c, name, super)
{
}

QFileInfoType::~QFileInfoType()
{
}

static NODE_IMPLEMENTATION(__allocate, Pointer)
{
    QFileInfoType::Instance* i = new QFileInfoType::Instance((Class*)NODE_THIS.type());
    QFileInfoType::registerFinalizer(i);
    NODE_RETURN(i);
}

void 
QFileInfoType::registerFinalizer (void* o)
{
    GC_register_finalizer(o, QFileInfoType::finalizer, 0, 0, 0);
}

void 
QFileInfoType::finalizer (void* obj, void* data)
{
    QFileInfoType::Instance* i = reinterpret_cast<QFileInfoType::Instance*>(obj);
    delete i;
}

//----------------------------------------------------------------------
//  PRE-COMPILED FUNCTIONS

Pointer qt_QFileInfo_QFileInfo_QFileInfo_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    setqtype<QFileInfoType>(param_this,QFileInfo());
    return param_this;
}

Pointer qt_QFileInfo_QFileInfo_QFileInfo_QFileInfo_string(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_file)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QString  arg1 = qstring(param_file);
    setqtype<QFileInfoType>(param_this,QFileInfo(arg1));
    return param_this;
}

Pointer qt_QFileInfo_QFileInfo_QFileInfo_QFileInfo_QDir_string(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_dir, Pointer param_file)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QDir  arg1 = getqtype<QDirType>(param_dir);
    const QString  arg2 = qstring(param_file);
    setqtype<QFileInfoType>(param_this,QFileInfo(arg1, arg2));
    return param_this;
}

Pointer qt_QFileInfo_absoluteDir_QDir_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makeqtype<QDirType>(c,arg0.absoluteDir(),"qt.QDir");
}

Pointer qt_QFileInfo_absoluteFilePath_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.absoluteFilePath());
}

Pointer qt_QFileInfo_absolutePath_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.absolutePath());
}

Pointer qt_QFileInfo_baseName_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.baseName());
}

Pointer qt_QFileInfo_bundleName_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.bundleName());
}

bool qt_QFileInfo_caching_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.caching();
}

Pointer qt_QFileInfo_canonicalFilePath_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.canonicalFilePath());
}

Pointer qt_QFileInfo_canonicalPath_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.canonicalPath());
}

Pointer qt_QFileInfo_completeBaseName_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.completeBaseName());
}

Pointer qt_QFileInfo_completeSuffix_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.completeSuffix());
}

Pointer qt_QFileInfo_created_QDateTime_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makeqtype<QDateTimeType>(c,arg0.created(),"qt.QDateTime");
}

Pointer qt_QFileInfo_dir_QDir_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makeqtype<QDirType>(c,arg0.dir(),"qt.QDir");
}

bool qt_QFileInfo_exists_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.exists();
}

Pointer qt_QFileInfo_fileName_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.fileName());
}

Pointer qt_QFileInfo_filePath_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.filePath());
}

Pointer qt_QFileInfo_group_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.group());
}

int qt_QFileInfo_groupId_int_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.groupId();
}

bool qt_QFileInfo_isAbsolute_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.isAbsolute();
}

bool qt_QFileInfo_isBundle_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.isBundle();
}

bool qt_QFileInfo_isDir_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.isDir();
}

bool qt_QFileInfo_isExecutable_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.isExecutable();
}

bool qt_QFileInfo_isFile_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.isFile();
}

bool qt_QFileInfo_isHidden_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.isHidden();
}

bool qt_QFileInfo_isNativePath_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.isNativePath();
}

bool qt_QFileInfo_isReadable_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return TwkUtil::isReadable(TwkQtCoreUtil::UTF8::qconvert(arg0.filePath()).c_str());
}

bool qt_QFileInfo_isRelative_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.isRelative();
}

bool qt_QFileInfo_isRoot_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.isRoot();
}

bool qt_QFileInfo_isSymLink_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.isSymLink();
}

bool qt_QFileInfo_isWritable_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return TwkUtil::isWritable(TwkQtCoreUtil::UTF8::qconvert(arg0.filePath()).c_str());
}

Pointer qt_QFileInfo_lastModified_QDateTime_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makeqtype<QDateTimeType>(c,arg0.lastModified(),"qt.QDateTime");
}

Pointer qt_QFileInfo_lastRead_QDateTime_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makeqtype<QDateTimeType>(c,arg0.lastRead(),"qt.QDateTime");
}

bool qt_QFileInfo_makeAbsolute_bool_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.makeAbsolute();
}

Pointer qt_QFileInfo_owner_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.owner());
}

int qt_QFileInfo_ownerId_int_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.ownerId();
}

Pointer qt_QFileInfo_path_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.path());
}

bool qt_QFileInfo_permission_bool_QFileInfo_int(Mu::Thread& NODE_THREAD, Pointer param_this, int param_permissions)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    QFile::Permissions arg1 = (QFile::Permissions)(param_permissions);
    return arg0.permission(arg1);
}

int qt_QFileInfo_permissions_int_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return int(arg0.permissions());
}

void qt_QFileInfo_refresh_void_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    arg0.refresh();
    setqtype<QFileInfoType>(param_this,arg0);
}

void qt_QFileInfo_setCaching_void_QFileInfo_bool(Mu::Thread& NODE_THREAD, Pointer param_this, bool param_enable)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    bool arg1 = (bool)(param_enable);
    arg0.setCaching(arg1);
    setqtype<QFileInfoType>(param_this,arg0);
}

void qt_QFileInfo_setFile_void_QFileInfo_string(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_file)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    const QString  arg1 = qstring(param_file);
    arg0.setFile(arg1);
    setqtype<QFileInfoType>(param_this,arg0);
}

void qt_QFileInfo_setFile_void_QFileInfo_QDir_string(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_dir, Pointer param_file)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    const QDir  arg1 = getqtype<QDirType>(param_dir);
    const QString  arg2 = qstring(param_file);
    arg0.setFile(arg1, arg2);
    setqtype<QFileInfoType>(param_this,arg0);
}

int64 qt_QFileInfo_size_int64_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return arg0.size();
}

Pointer qt_QFileInfo_suffix_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.suffix());
}

void qt_QFileInfo_swap_void_QFileInfo_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_other)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    QFileInfo  arg1 = getqtype<QFileInfoType>(param_other);
    arg0.swap(arg1);
    setqtype<QFileInfoType>(param_this,arg0);
}

Pointer qt_QFileInfo_symLinkTarget_string_QFileInfo(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QFileInfo& arg0 = getqtype<QFileInfoType>(param_this);
    return makestring(c,arg0.symLinkTarget());
}

bool qt_QFileInfo_exists_bool_string(Mu::Thread& NODE_THREAD, Pointer param_file)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QString  arg0 = qstring(param_file);
    return QFileInfo::exists(arg0);
}


static NODE_IMPLEMENTATION(_n_QFileInfo0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_QFileInfo_QFileInfo_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_QFileInfo1, Pointer)
{
    NODE_RETURN(qt_QFileInfo_QFileInfo_QFileInfo_QFileInfo_string(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_QFileInfo2, Pointer)
{
    NODE_RETURN(qt_QFileInfo_QFileInfo_QFileInfo_QFileInfo_QDir_string(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, Pointer)));
}

static NODE_IMPLEMENTATION(_n_absoluteDir0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_absoluteDir_QDir_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_absoluteFilePath0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_absoluteFilePath_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_absolutePath0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_absolutePath_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_baseName0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_baseName_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_bundleName0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_bundleName_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_caching0, bool)
{
    NODE_RETURN(qt_QFileInfo_caching_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_canonicalFilePath0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_canonicalFilePath_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_canonicalPath0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_canonicalPath_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_completeBaseName0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_completeBaseName_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_completeSuffix0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_completeSuffix_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_created0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_created_QDateTime_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_dir0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_dir_QDir_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_exists0, bool)
{
    NODE_RETURN(qt_QFileInfo_exists_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_fileName0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_fileName_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_filePath0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_filePath_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_group0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_group_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_groupId0, int)
{
    NODE_RETURN(qt_QFileInfo_groupId_int_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isAbsolute0, bool)
{
    NODE_RETURN(qt_QFileInfo_isAbsolute_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isBundle0, bool)
{
    NODE_RETURN(qt_QFileInfo_isBundle_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isDir0, bool)
{
    NODE_RETURN(qt_QFileInfo_isDir_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isExecutable0, bool)
{
    NODE_RETURN(qt_QFileInfo_isExecutable_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isFile0, bool)
{
    NODE_RETURN(qt_QFileInfo_isFile_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isHidden0, bool)
{
    NODE_RETURN(qt_QFileInfo_isHidden_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isNativePath0, bool)
{
    NODE_RETURN(qt_QFileInfo_isNativePath_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isReadable0, bool)
{
    NODE_RETURN(qt_QFileInfo_isReadable_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isRelative0, bool)
{
    NODE_RETURN(qt_QFileInfo_isRelative_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isRoot0, bool)
{
    NODE_RETURN(qt_QFileInfo_isRoot_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isSymLink0, bool)
{
    NODE_RETURN(qt_QFileInfo_isSymLink_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_isWritable0, bool)
{
    NODE_RETURN(qt_QFileInfo_isWritable_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_lastModified0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_lastModified_QDateTime_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_lastRead0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_lastRead_QDateTime_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_makeAbsolute0, bool)
{
    NODE_RETURN(qt_QFileInfo_makeAbsolute_bool_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_owner0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_owner_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_ownerId0, int)
{
    NODE_RETURN(qt_QFileInfo_ownerId_int_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_path0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_path_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_permission0, bool)
{
    NODE_RETURN(qt_QFileInfo_permission_bool_QFileInfo_int(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
}

static NODE_IMPLEMENTATION(_n_permissions0, int)
{
    NODE_RETURN(qt_QFileInfo_permissions_int_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_refresh0, void)
{
    qt_QFileInfo_refresh_void_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer));
}

static NODE_IMPLEMENTATION(_n_setCaching0, void)
{
    qt_QFileInfo_setCaching_void_QFileInfo_bool(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, bool));
}

static NODE_IMPLEMENTATION(_n_setFile0, void)
{
    qt_QFileInfo_setFile_void_QFileInfo_string(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_setFile1, void)
{
    qt_QFileInfo_setFile_void_QFileInfo_QDir_string(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, Pointer));
}

static NODE_IMPLEMENTATION(_n_size0, int64)
{
    NODE_RETURN(qt_QFileInfo_size_int64_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_suffix0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_suffix_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_swap0, void)
{
    qt_QFileInfo_swap_void_QFileInfo_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_symLinkTarget0, Pointer)
{
    NODE_RETURN(qt_QFileInfo_symLinkTarget_string_QFileInfo(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_exists1, bool)
{
    NODE_RETURN(qt_QFileInfo_exists_bool_string(NODE_THREAD, NODE_ARG(0, Pointer)));
}



void
QFileInfoType::load()
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
    
    addSymbols(new Function(c, "__allocate", __allocate, None,
                            Return, ftn,
                            End),

               EndArguments );

addSymbols(
    EndArguments);

addSymbols(
    // enums
    // member functions
    new Function(c, "QFileInfo", _n_QFileInfo0, None, Compiled, qt_QFileInfo_QFileInfo_QFileInfo_QFileInfo, Return, "qt.QFileInfo", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "QFileInfo", _n_QFileInfo1, None, Compiled, qt_QFileInfo_QFileInfo_QFileInfo_QFileInfo_string, Return, "qt.QFileInfo", Parameters, new Param(c, "this", "qt.QFileInfo"), new Param(c, "file", "string"), End),
    new Function(c, "QFileInfo", _n_QFileInfo2, None, Compiled, qt_QFileInfo_QFileInfo_QFileInfo_QFileInfo_QDir_string, Return, "qt.QFileInfo", Parameters, new Param(c, "this", "qt.QFileInfo"), new Param(c, "dir", "qt.QDir"), new Param(c, "file", "string"), End),
    // MISSING: QFileInfo (QFileInfo; QFileInfo this, QFileInfo fileinfo)
    new Function(c, "absoluteDir", _n_absoluteDir0, None, Compiled, qt_QFileInfo_absoluteDir_QDir_QFileInfo, Return, "qt.QDir", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "absoluteFilePath", _n_absoluteFilePath0, None, Compiled, qt_QFileInfo_absoluteFilePath_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "absolutePath", _n_absolutePath0, None, Compiled, qt_QFileInfo_absolutePath_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "baseName", _n_baseName0, None, Compiled, qt_QFileInfo_baseName_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "bundleName", _n_bundleName0, None, Compiled, qt_QFileInfo_bundleName_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "caching", _n_caching0, None, Compiled, qt_QFileInfo_caching_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "canonicalFilePath", _n_canonicalFilePath0, None, Compiled, qt_QFileInfo_canonicalFilePath_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "canonicalPath", _n_canonicalPath0, None, Compiled, qt_QFileInfo_canonicalPath_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "completeBaseName", _n_completeBaseName0, None, Compiled, qt_QFileInfo_completeBaseName_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "completeSuffix", _n_completeSuffix0, None, Compiled, qt_QFileInfo_completeSuffix_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "created", _n_created0, None, Compiled, qt_QFileInfo_created_QDateTime_QFileInfo, Return, "qt.QDateTime", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "dir", _n_dir0, None, Compiled, qt_QFileInfo_dir_QDir_QFileInfo, Return, "qt.QDir", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "exists", _n_exists0, None, Compiled, qt_QFileInfo_exists_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "fileName", _n_fileName0, None, Compiled, qt_QFileInfo_fileName_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "filePath", _n_filePath0, None, Compiled, qt_QFileInfo_filePath_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "group", _n_group0, None, Compiled, qt_QFileInfo_group_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "groupId", _n_groupId0, None, Compiled, qt_QFileInfo_groupId_int_QFileInfo, Return, "int", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "isAbsolute", _n_isAbsolute0, None, Compiled, qt_QFileInfo_isAbsolute_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "isBundle", _n_isBundle0, None, Compiled, qt_QFileInfo_isBundle_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "isDir", _n_isDir0, None, Compiled, qt_QFileInfo_isDir_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "isExecutable", _n_isExecutable0, None, Compiled, qt_QFileInfo_isExecutable_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "isFile", _n_isFile0, None, Compiled, qt_QFileInfo_isFile_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "isHidden", _n_isHidden0, None, Compiled, qt_QFileInfo_isHidden_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "isNativePath", _n_isNativePath0, None, Compiled, qt_QFileInfo_isNativePath_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "isReadable", _n_isReadable0, None, Compiled, qt_QFileInfo_isReadable_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "isRelative", _n_isRelative0, None, Compiled, qt_QFileInfo_isRelative_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "isRoot", _n_isRoot0, None, Compiled, qt_QFileInfo_isRoot_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "isSymLink", _n_isSymLink0, None, Compiled, qt_QFileInfo_isSymLink_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "isWritable", _n_isWritable0, None, Compiled, qt_QFileInfo_isWritable_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "lastModified", _n_lastModified0, None, Compiled, qt_QFileInfo_lastModified_QDateTime_QFileInfo, Return, "qt.QDateTime", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "lastRead", _n_lastRead0, None, Compiled, qt_QFileInfo_lastRead_QDateTime_QFileInfo, Return, "qt.QDateTime", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "makeAbsolute", _n_makeAbsolute0, None, Compiled, qt_QFileInfo_makeAbsolute_bool_QFileInfo, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "owner", _n_owner0, None, Compiled, qt_QFileInfo_owner_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "ownerId", _n_ownerId0, None, Compiled, qt_QFileInfo_ownerId_int_QFileInfo, Return, "int", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "path", _n_path0, None, Compiled, qt_QFileInfo_path_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "permission", _n_permission0, None, Compiled, qt_QFileInfo_permission_bool_QFileInfo_int, Return, "bool", Parameters, new Param(c, "this", "qt.QFileInfo"), new Param(c, "permissions", "int"), End),
    new Function(c, "permissions", _n_permissions0, None, Compiled, qt_QFileInfo_permissions_int_QFileInfo, Return, "int", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "refresh", _n_refresh0, None, Compiled, qt_QFileInfo_refresh_void_QFileInfo, Return, "void", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "setCaching", _n_setCaching0, None, Compiled, qt_QFileInfo_setCaching_void_QFileInfo_bool, Return, "void", Parameters, new Param(c, "this", "qt.QFileInfo"), new Param(c, "enable", "bool"), End),
    new Function(c, "setFile", _n_setFile0, None, Compiled, qt_QFileInfo_setFile_void_QFileInfo_string, Return, "void", Parameters, new Param(c, "this", "qt.QFileInfo"), new Param(c, "file", "string"), End),
    new Function(c, "setFile", _n_setFile1, None, Compiled, qt_QFileInfo_setFile_void_QFileInfo_QDir_string, Return, "void", Parameters, new Param(c, "this", "qt.QFileInfo"), new Param(c, "dir", "qt.QDir"), new Param(c, "file", "string"), End),
    new Function(c, "size", _n_size0, None, Compiled, qt_QFileInfo_size_int64_QFileInfo, Return, "int64", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "suffix", _n_suffix0, None, Compiled, qt_QFileInfo_suffix_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    new Function(c, "swap", _n_swap0, None, Compiled, qt_QFileInfo_swap_void_QFileInfo_QFileInfo, Return, "void", Parameters, new Param(c, "this", "qt.QFileInfo"), new Param(c, "other", "qt.QFileInfo"), End),
    new Function(c, "symLinkTarget", _n_symLinkTarget0, None, Compiled, qt_QFileInfo_symLinkTarget_string_QFileInfo, Return, "string", Parameters, new Param(c, "this", "qt.QFileInfo"), End),
    // static functions
    new Function(c, "exists", _n_exists1, None, Compiled, qt_QFileInfo_exists_bool_string, Return, "bool", Parameters, new Param(c, "file", "string"), End),
    EndArguments);
globalScope()->addSymbols(
    // MISSING: = (QFileInfo; QFileInfo this, QFileInfo fileinfo)
    // MISSING: = (QFileInfo; QFileInfo this, QFileInfo other)
    EndArguments);
scope()->addSymbols(
    EndArguments);


c->arrayType(this, 1, 0);

                        
}

} // Mu
