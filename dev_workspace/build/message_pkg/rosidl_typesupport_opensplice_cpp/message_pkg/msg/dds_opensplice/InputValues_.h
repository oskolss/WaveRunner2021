#ifndef _H_E5E2E2CD0819A1C9C62005273F2D3B91_InputValues__H_
#define _H_E5E2E2CD0819A1C9C62005273F2D3B91_InputValues__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace message_pkg
{
    namespace msg
    {
        namespace dds_
        {
            struct  InputValues_
            {
                struct _inputvalues__uniq_{};
                typedef ::DDS::Double _inputvalues__slice;
                typedef ::DDS::Double _inputvalues_[6];
                typedef DDS_DCPS_FArray_var< _inputvalues_, _inputvalues__slice, struct _inputvalues__uniq_ > _inputvalues__var;
                typedef _inputvalues_ _inputvalues__out;
                typedef DDS_DCPS_Array_forany< _inputvalues_, _inputvalues__slice, struct _inputvalues__uniq_ > _inputvalues__forany;
                static _inputvalues__slice *_inputvalues__alloc();
                static void _inputvalues__free(_inputvalues__slice *);
                static void _inputvalues__copy(_inputvalues__slice *to, const _inputvalues__slice *from);
                static _inputvalues__slice *_inputvalues__dup(const _inputvalues__slice *from);
                _inputvalues_ inputvalues_;
            };

            typedef DDS_DCPSStruct_var<InputValues_> InputValues__var;
            typedef InputValues_& InputValues__out;

        }

    }

}

#endif /* _H_E5E2E2CD0819A1C9C62005273F2D3B91_InputValues__H_ */
