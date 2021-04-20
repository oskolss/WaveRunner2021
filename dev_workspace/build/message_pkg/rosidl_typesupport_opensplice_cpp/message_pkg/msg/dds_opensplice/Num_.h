#ifndef _H_5BBB65DD0B440A4D6777762CCFAEC209_Num__H_
#define _H_5BBB65DD0B440A4D6777762CCFAEC209_Num__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace message_pkg
{
    namespace msg
    {
        namespace dds_
        {
            struct  Num_
            {
                ::DDS::LongLong num_;
            };

            typedef DDS_DCPSStruct_var<Num_> Num__var;
            typedef Num_& Num__out;

        }

    }

}

#endif /* _H_5BBB65DD0B440A4D6777762CCFAEC209_Num__H_ */
