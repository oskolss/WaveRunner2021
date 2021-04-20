#ifndef _H_970FD2864E0792EFE496AB6E47B8800C_AddThreeInts__H_
#define _H_970FD2864E0792EFE496AB6E47B8800C_AddThreeInts__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace message_pkg
{
    namespace srv
    {
        namespace dds_
        {
            struct  AddThreeInts_Request_
            {
                ::DDS::LongLong a_;
                ::DDS::LongLong b_;
                ::DDS::LongLong c_;
            };

            typedef DDS_DCPSStruct_var<AddThreeInts_Request_> AddThreeInts_Request__var;
            typedef AddThreeInts_Request_& AddThreeInts_Request__out;

            struct  AddThreeInts_Response_
            {
                ::DDS::LongLong sum_;
            };

            typedef DDS_DCPSStruct_var<AddThreeInts_Response_> AddThreeInts_Response__var;
            typedef AddThreeInts_Response_& AddThreeInts_Response__out;

            struct  Sample_AddThreeInts_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::message_pkg::srv::dds_::AddThreeInts_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_AddThreeInts_Request_> Sample_AddThreeInts_Request__var;
            typedef Sample_AddThreeInts_Request_& Sample_AddThreeInts_Request__out;

            struct  Sample_AddThreeInts_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::message_pkg::srv::dds_::AddThreeInts_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_AddThreeInts_Response_> Sample_AddThreeInts_Response__var;
            typedef Sample_AddThreeInts_Response_& Sample_AddThreeInts_Response__out;

        }

    }

}

#endif /* _H_970FD2864E0792EFE496AB6E47B8800C_AddThreeInts__H_ */
