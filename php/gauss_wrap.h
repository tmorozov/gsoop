/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.5
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_GAUSS_WRAP_H_
#define SWIG_GAUSS_WRAP_H_

class SwigDirector_IGEProgramOutput : public IGEProgramOutput, public Swig::Director {

public:
    SwigDirector_IGEProgramOutput(zval *self TSRMLS_DC);
    virtual void invoke(std::string const &message);
    virtual ~SwigDirector_IGEProgramOutput();
};
class SwigDirector_IGEProgramFlushOutput : public IGEProgramFlushOutput, public Swig::Director {

public:
    SwigDirector_IGEProgramFlushOutput(zval *self TSRMLS_DC);
    virtual void invoke();
    virtual ~SwigDirector_IGEProgramFlushOutput();
};
class SwigDirector_IGEProgramInputString : public IGEProgramInputString, public Swig::Director {

public:
    SwigDirector_IGEProgramInputString(zval *self TSRMLS_DC);
    virtual void invoke(int length);
    virtual ~SwigDirector_IGEProgramInputString();
};
class SwigDirector_IGEProgramInputChar : public IGEProgramInputChar, public Swig::Director {

public:
    SwigDirector_IGEProgramInputChar(zval *self TSRMLS_DC);
    virtual int invoke();
    virtual ~SwigDirector_IGEProgramInputChar();
};
class SwigDirector_IGEProgramInputCheck : public IGEProgramInputCheck, public Swig::Director {

public:
    SwigDirector_IGEProgramInputCheck(zval *self TSRMLS_DC);
    virtual bool invoke();
    virtual ~SwigDirector_IGEProgramInputCheck();
};

#endif
