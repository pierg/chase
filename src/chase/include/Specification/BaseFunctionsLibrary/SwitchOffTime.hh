/**
 * @author      <a href="mailto:michele.lora@univr.it">Michele Lora</a>
 * @date        2015-2016
 * @copyright   Copyright (c) 2015-2017 by University of California, Berkeley.\n
 *              Copyright (c) 2015-2017 by University of Verona.\n
 *              Copyright (c) 2015-2017 by International Business Machines Corporation.\n
 *              Copyright (c) 2016-2017 by University of Southern California.\n
 *              All rights reserved.\n
 *              This project is released under the 3-Clause BSD License.
 *
 * @file	chase/include/Specification/BaseFunctionsLibrary/SwitchOffTime.hh
 * @brief
 */



#ifndef SPECIFICATION_REQUIREMENT_FUNCTION_BASE_LIBRARY_SWITCH_OFF_TIME_HH
#define SPECIFICATION_REQUIREMENT_FUNCTION_BASE_LIBRARY_SWITCH_OFF_TIME_HH

#include "Specification/RequirementFunction.hh"
#include "Manipulation/findComponents.hh"
#include "Behaviors/Timing/Timing.hh"

namespace Specification
{
    class SwitchOffTime : public RequirementFunction
    {
        protected:
            
            SwitchOffTime( const SwitchOffTime & );
            SwitchOffTime & operator=(const SwitchOffTime &);

        public:

            SwitchOffTime();
            ~SwitchOffTime();

            void resolve( Requirement * req, Problem * problem );
            std::list< Behaviors::Timing::chase_time > * 
                getTiming( Requirement * req ); 

    };
}


#endif // SPECIFICATION_REQUIREMENT_FUNCTION_BASE_LIBRARY_SWITCH_OFF_TIME_HH
