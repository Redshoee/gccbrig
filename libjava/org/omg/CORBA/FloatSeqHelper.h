
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_FloatSeqHelper__
#define __org_omg_CORBA_FloatSeqHelper__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class FloatSeqHelper;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
    }
  }
}

class org::omg::CORBA::FloatSeqHelper : public ::java::lang::Object
{

public:
  FloatSeqHelper();
  static JArray< jfloat > * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static void insert(::org::omg::CORBA::Any *, JArray< jfloat > *);
  static JArray< jfloat > * read(::org::omg::CORBA::portable::InputStream *);
  static ::org::omg::CORBA::TypeCode * type();
  static void write(::org::omg::CORBA::portable::OutputStream *, JArray< jfloat > *);
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_FloatSeqHelper__
