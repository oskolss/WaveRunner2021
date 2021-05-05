#include "InputValues_.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< ::message_pkg::msg::dds_::InputValues_::_inputvalues_, ::message_pkg::msg::dds_::InputValues_::_inputvalues__slice, struct ::message_pkg::msg::dds_::InputValues_::_inputvalues__uniq_>;
template class DDS_DCPS_Array_forany< ::message_pkg::msg::dds_::InputValues_::_inputvalues_, ::message_pkg::msg::dds_::InputValues_::_inputvalues__slice, struct ::message_pkg::msg::dds_::InputValues_::_inputvalues__uniq_>;
#endif

template <>
::message_pkg::msg::dds_::InputValues_::_inputvalues__slice* DDS_DCPS_ArrayHelper < ::message_pkg::msg::dds_::InputValues_::_inputvalues_, ::message_pkg::msg::dds_::InputValues_::_inputvalues__slice, ::message_pkg::msg::dds_::InputValues_::_inputvalues__uniq_>::alloc ()
{
    return ::message_pkg::msg::dds_::InputValues_::_inputvalues__alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < ::message_pkg::msg::dds_::InputValues_::_inputvalues_, ::message_pkg::msg::dds_::InputValues_::_inputvalues__slice, ::message_pkg::msg::dds_::InputValues_::_inputvalues__uniq_>::copy (::message_pkg::msg::dds_::InputValues_::_inputvalues__slice *to, const ::message_pkg::msg::dds_::InputValues_::_inputvalues__slice* from)
{
    ::message_pkg::msg::dds_::InputValues_::_inputvalues__copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < ::message_pkg::msg::dds_::InputValues_::_inputvalues_, ::message_pkg::msg::dds_::InputValues_::_inputvalues__slice, ::message_pkg::msg::dds_::InputValues_::_inputvalues__uniq_>::free (::message_pkg::msg::dds_::InputValues_::_inputvalues__slice *ptr)
{
    ::message_pkg::msg::dds_::InputValues_::_inputvalues__free(ptr);
}

::message_pkg::msg::dds_::InputValues_::_inputvalues__slice * ::message_pkg::msg::dds_::InputValues_::_inputvalues__alloc ()
{
    ::message_pkg::msg::dds_::InputValues_::_inputvalues__slice * ret = new ::message_pkg::msg::dds_::InputValues_::_inputvalues__slice[6];
    return ret;
}

void ::message_pkg::msg::dds_::InputValues_::_inputvalues__free (::message_pkg::msg::dds_::InputValues_::_inputvalues__slice * s)
{
    delete [] s;
}

void ::message_pkg::msg::dds_::InputValues_::_inputvalues__copy(::message_pkg::msg::dds_::InputValues_::_inputvalues__slice * to, const ::message_pkg::msg::dds_::InputValues_::_inputvalues__slice * from)
{
    for (DDS::ULong i0 = 0; i0 < 6; i0++) {
        to[i0] = from[i0];
    }
}

::message_pkg::msg::dds_::InputValues_::_inputvalues__slice * ::message_pkg::msg::dds_::InputValues_::_inputvalues__dup(const ::message_pkg::msg::dds_::InputValues_::_inputvalues__slice * from)
{
    ::message_pkg::msg::dds_::InputValues_::_inputvalues__slice * to = ::message_pkg::msg::dds_::InputValues_::_inputvalues__alloc ();
    ::message_pkg::msg::dds_::InputValues_::_inputvalues__copy (to, from);
    return to;
}

