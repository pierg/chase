/**
 * @author      <a href="mailto:michele.lora@univr.it">Michele Lora</a>
 * @date        2015-2016
 * @copyright   Copyright (c) 2015-2018 by University of California, Berkeley.\n
 *              Copyright (c) 2015-2018 by University of Verona.\n
 *              Copyright (c) 2015-2018 by International Business Machines Corporation.\n
 *              Copyright (c) 2016-2018 by University of Southern California.\n
 *              All rights reserved.\n
 *              This project is released under the 3-Clause BSD License.
 *
 * @file	chase/src/AST/BaseObject.cc
 * @brief
 */



/// @author <a href="mailto:michele.lora@univr.it">Michele Lora </a>
/// @version 1.0


#include "AST/BaseObject.hh"


using namespace chase;

BaseObject::BaseObject() :
    _parent(nullptr)
{
}

BaseObject::~BaseObject()
{
}

BaseObject::BaseObject( const BaseObject & o ) :
    _parent( o._parent )
{
}

BaseObject & BaseObject::operator=( const BaseObject & )
{
    return *this;
}

BaseObject * BaseObject::getParent()
{
    return _parent;
}

void BaseObject::setParent( BaseObject * p )
{
    _parent = p;
}




