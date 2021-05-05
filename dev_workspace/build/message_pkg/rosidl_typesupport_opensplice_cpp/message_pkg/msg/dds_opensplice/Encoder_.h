#ifndef _H_644F7DC3DAA2A8A20CB04B8D67C2BA53_Encoder__H_
#define _H_644F7DC3DAA2A8A20CB04B8D67C2BA53_Encoder__H_

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
                struct _encodervalue__uniq_{};
                typedef ::DDS::Long _encodervalue__slice;
                typedef ::DDS::Long _encodervalue_[4];
                typedef DDS_DCPS_FArray_var< _encodervalue_, _encodervalue__slice, struct _encodervalue__uniq_ > _encodervalue__var;
                typedef _encodervalue_ _encodervalue__out;
                typedef DDS_DCPS_Array_forany< _encodervalue_, _encodervalue__slice, struct _encodervalue__uniq_ > _encodervalue__forany;
                static _encodervalue__slice *_encodervalue__alloc();
                static void _encodervalue__free(_encodervalue__slice *);
                static void _encodervalue__copy(_encodervalue__slice *to, const _encodervalue__slice *from);
                static _encodervalue__slice *_encodervalue__dup(const _encodervalue__slice *from);
                _encodervalue_ encodervalue_;
            };

            typedef DDS_DCPSStruct_var<Encoder_> Encoder__var;
            typedef Encoder_& Encoder__out;

        }

    }

}

#endif /* _H_644F7DC3DAA2A8A20CB04B8D67C2BA53_Encoder__H_ */
