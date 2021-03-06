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
 * @file	chase/src/Behaviors/Logics/BinaryLogicCombination.cc
 * @brief
 */



#include "Behaviors/Logics/BinaryLogicCombination.hh"

using namespace Behaviors::Logics;

BinaryLogicCombination::BinaryLogicCombination( 
        logic_operators op,
        WellFormedFormula * op1,
        WellFormedFormula * op2 ) :
    BooleanFormula(op),
    BinaryFormula( op1, op2 )
{
}

BinaryLogicCombination::~BinaryLogicCombination()
{
}


std::string BinaryLogicCombination::print()
{
    std::string ret = "(";
    ret += _op1->print();
    ret += " ";
    ret += printOperator(_op);
    ret += " ";
    ret += _op2->print();
    ret += ")";
    return ret;
}

formula_type BinaryLogicCombination::getType()
{
    return std::max(_op1->getType(), _op2->getType());
}

int BinaryLogicCombination::accept_visitor( Manipulation::BaseVisitor & v )
{
    return v.visitBinaryLogicCombination(* this);
}

chase::BaseObject * BinaryLogicCombination::copy()
{
    logic_operators op = getOp();
    WellFormedFormula * op1 = 
        static_cast< WellFormedFormula * >( getOp1()->copy() );
    WellFormedFormula * op2 = 
        static_cast< WellFormedFormula * >( getOp2()->copy() );

    if( op1 == NULL || op2 == NULL )
    {
        std::cerr << "ERROR: odd configuration." << std::endl;
        exit(-1);
    }

    BinaryLogicCombination * ret = new BinaryLogicCombination( op, op1, op2 );
    return ret;
}


