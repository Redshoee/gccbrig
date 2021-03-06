
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_Poa_LocalServerRequest__
#define __gnu_CORBA_Poa_LocalServerRequest__

#pragma interface

#include <org/omg/CORBA/ServerRequest.h>
extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace Poa
      {
          class LocalRequest;
          class LocalServerRequest;
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class Context;
          class NVList;
      }
    }
  }
}

class gnu::CORBA::Poa::LocalServerRequest : public ::org::omg::CORBA::ServerRequest
{

public:
  LocalServerRequest(::gnu::CORBA::Poa::LocalRequest *);
  virtual void params(::org::omg::CORBA::NVList *);
  virtual ::org::omg::CORBA::Context * ctx();
  virtual ::java::lang::String * operation();
  virtual void arguments(::org::omg::CORBA::NVList *);
  virtual void set_result(::org::omg::CORBA::Any *);
  virtual ::java::lang::String * op_name();
  virtual void set_exception(::org::omg::CORBA::Any *);
  virtual void result(::org::omg::CORBA::Any *);
  virtual void except(::org::omg::CORBA::Any *);
public: // actually package-private
  ::gnu::CORBA::Poa::LocalRequest * __attribute__((aligned(__alignof__( ::org::omg::CORBA::ServerRequest)))) request;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_Poa_LocalServerRequest__
