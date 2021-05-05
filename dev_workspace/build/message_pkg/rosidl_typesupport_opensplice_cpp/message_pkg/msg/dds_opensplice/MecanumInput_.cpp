#include "MecanumInput_.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< ::message_pkg::msg::dds_::MecanumInput_::_inputvalue_, ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice, struct ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__uniq_>;
template class DDS_DCPS_Array_forany< ::message_pkg::msg::dds_::MecanumInput_::_inputvalue_, ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice, struct ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__uniq_>;
#endif

template <>
::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice* DDS_DCPS_ArrayHelper < ::message_pkg::msg::dds_::MecanumInput_::_inputvalue_, ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice, ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__uniq_>::alloc ()
{
    return ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < ::message_pkg::msg::dds_::MecanumInput_::_inputvalue_, ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice, ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__uniq_>::copy (::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice *to, const ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice* from)
{
    ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < ::message_pkg::msg::dds_::MecanumInput_::_inputvalue_, ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice, ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__uniq_>::free (::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice *ptr)
{
    ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__free(ptr);
}

::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice * ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__alloc ()
{
    ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice * ret = new ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice[3];
    return ret;
}

void ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__free (::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice * s)
{
    delete [] s;
}

void ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__copy(::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice * to, const ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice * from)
{
    for (DDS::ULong i0 = 0; i0 < 3; i0++) {
        to[i0] = from[i0];
    }
}

::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice * ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__dup(const ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice * from)
{
    ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__slice * to = ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__alloc ();
    ::message_pkg::msg::dds_::MecanumInput_::_inputvalue__copy (to, from);
    return to;
}

