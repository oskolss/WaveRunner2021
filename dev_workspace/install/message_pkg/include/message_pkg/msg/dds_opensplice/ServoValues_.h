#ifndef _H_BF9D1B0B4A183B7AAC772492641F4056_ServoValues__H_
#define _H_BF9D1B0B4A183B7AAC772492641F4056_ServoValues__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace message_pkg
{
    namespace msg
    {
        namespace dds_
        {
            struct  ServoValues_
            {
                struct _servovalue__uniq_{};
                typedef ::DDS::Long _servovalue__slice;
                typedef ::DDS::Long _servovalue_[6];
                typedef DDS_DCPS_FArray_var< _servovalue_, _servovalue__slice, struct _servovalue__uniq_ > _servovalue__var;
                typedef _servovalue_ _servovalue__out;
                typedef DDS_DCPS_Array_forany< _servovalue_, _servovalue__slice, struct _servovalue__uniq_ > _servovalue__forany;
                static _servovalue__slice *_servovalue__alloc();
                static void _servovalue__free(_servovalue__slice *);
                static void _servovalue__copy(_servovalue__slice *to, const _servovalue__slice *from);
                static _servovalue__slice *_servovalue__dup(const _servovalue__slice *from);
                _servovalue_ servovalue_;
            };

            typedef DDS_DCPSStruct_var<ServoValues_> ServoValues__var;
            typedef ServoValues_& ServoValues__out;

        }

    }

}

#endif /* _H_BF9D1B0B4A183B7AAC772492641F4056_ServoValues__H_ */
