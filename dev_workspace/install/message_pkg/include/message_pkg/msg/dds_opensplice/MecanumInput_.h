#ifndef _H_782F2995A4B52F391CA3CB9A193249C1_MecanumInput__H_
#define _H_782F2995A4B52F391CA3CB9A193249C1_MecanumInput__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace message_pkg
{
    namespace msg
    {
        namespace dds_
        {
            struct  MecanumInput_
            {
                struct _inputvalue__uniq_{};
                typedef ::DDS::Double _inputvalue__slice;
                typedef ::DDS::Double _inputvalue_[3];
                typedef DDS_DCPS_FArray_var< _inputvalue_, _inputvalue__slice, struct _inputvalue__uniq_ > _inputvalue__var;
                typedef _inputvalue_ _inputvalue__out;
                typedef DDS_DCPS_Array_forany< _inputvalue_, _inputvalue__slice, struct _inputvalue__uniq_ > _inputvalue__forany;
                static _inputvalue__slice *_inputvalue__alloc();
                static void _inputvalue__free(_inputvalue__slice *);
                static void _inputvalue__copy(_inputvalue__slice *to, const _inputvalue__slice *from);
                static _inputvalue__slice *_inputvalue__dup(const _inputvalue__slice *from);
                _inputvalue_ inputvalue_;
            };

            typedef DDS_DCPSStruct_var<MecanumInput_> MecanumInput__var;
            typedef MecanumInput_& MecanumInput__out;

        }

    }

}

#endif /* _H_782F2995A4B52F391CA3CB9A193249C1_MecanumInput__H_ */
