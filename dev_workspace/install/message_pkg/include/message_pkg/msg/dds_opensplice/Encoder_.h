#ifndef _H_D92B605B9C88A20D60DF9EA7B81AF0F0_Encoder__H_
#define _H_D92B605B9C88A20D60DF9EA7B81AF0F0_Encoder__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace message_pkg
{
    namespace msg
    {
        namespace dds_
        {
            struct  Encoder_
            {
                ::DDS::LongLong fl_;
                ::DDS::LongLong fr_;
                ::DDS::LongLong rl_;
                ::DDS::LongLong rr_;
            };

            typedef DDS_DCPSStruct_var<Encoder_> Encoder__var;
            typedef Encoder_& Encoder__out;

        }

    }

}

#endif /* _H_D92B605B9C88A20D60DF9EA7B81AF0F0_Encoder__H_ */
