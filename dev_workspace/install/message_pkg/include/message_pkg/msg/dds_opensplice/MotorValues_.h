#ifndef _H_6C6D2373F49BA3968B3D192B55C6778B_MotorValues__H_
#define _H_6C6D2373F49BA3968B3D192B55C6778B_MotorValues__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace message_pkg
{
    namespace msg
    {
        namespace dds_
        {
            struct  MotorValues_
            {
                struct _motorvalue__uniq_{};
                typedef ::DDS::Long _motorvalue__slice;
                typedef ::DDS::Long _motorvalue_[4];
                typedef DDS_DCPS_FArray_var< _motorvalue_, _motorvalue__slice, struct _motorvalue__uniq_ > _motorvalue__var;
                typedef _motorvalue_ _motorvalue__out;
                typedef DDS_DCPS_Array_forany< _motorvalue_, _motorvalue__slice, struct _motorvalue__uniq_ > _motorvalue__forany;
                static _motorvalue__slice *_motorvalue__alloc();
                static void _motorvalue__free(_motorvalue__slice *);
                static void _motorvalue__copy(_motorvalue__slice *to, const _motorvalue__slice *from);
                static _motorvalue__slice *_motorvalue__dup(const _motorvalue__slice *from);
                _motorvalue_ motorvalue_;
            };

            typedef DDS_DCPSStruct_var<MotorValues_> MotorValues__var;
            typedef MotorValues_& MotorValues__out;

        }

    }

}

#endif /* _H_6C6D2373F49BA3968B3D192B55C6778B_MotorValues__H_ */
