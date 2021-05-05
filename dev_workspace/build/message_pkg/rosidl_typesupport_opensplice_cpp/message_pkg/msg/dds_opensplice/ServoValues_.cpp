#include "ServoValues_.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< ::message_pkg::msg::dds_::ServoValues_::_servovalue_, ::message_pkg::msg::dds_::ServoValues_::_servovalue__slice, struct ::message_pkg::msg::dds_::ServoValues_::_servovalue__uniq_>;
template class DDS_DCPS_Array_forany< ::message_pkg::msg::dds_::ServoValues_::_servovalue_, ::message_pkg::msg::dds_::ServoValues_::_servovalue__slice, struct ::message_pkg::msg::dds_::ServoValues_::_servovalue__uniq_>;
#endif

template <>
::message_pkg::msg::dds_::ServoValues_::_servovalue__slice* DDS_DCPS_ArrayHelper < ::message_pkg::msg::dds_::ServoValues_::_servovalue_, ::message_pkg::msg::dds_::ServoValues_::_servovalue__slice, ::message_pkg::msg::dds_::ServoValues_::_servovalue__uniq_>::alloc ()
{
    return ::message_pkg::msg::dds_::ServoValues_::_servovalue__alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < ::message_pkg::msg::dds_::ServoValues_::_servovalue_, ::message_pkg::msg::dds_::ServoValues_::_servovalue__slice, ::message_pkg::msg::dds_::ServoValues_::_servovalue__uniq_>::copy (::message_pkg::msg::dds_::ServoValues_::_servovalue__slice *to, const ::message_pkg::msg::dds_::ServoValues_::_servovalue__slice* from)
{
    ::message_pkg::msg::dds_::ServoValues_::_servovalue__copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < ::message_pkg::msg::dds_::ServoValues_::_servovalue_, ::message_pkg::msg::dds_::ServoValues_::_servovalue__slice, ::message_pkg::msg::dds_::ServoValues_::_servovalue__uniq_>::free (::message_pkg::msg::dds_::ServoValues_::_servovalue__slice *ptr)
{
    ::message_pkg::msg::dds_::ServoValues_::_servovalue__free(ptr);
}

::message_pkg::msg::dds_::ServoValues_::_servovalue__slice * ::message_pkg::msg::dds_::ServoValues_::_servovalue__alloc ()
{
    ::message_pkg::msg::dds_::ServoValues_::_servovalue__slice * ret = new ::message_pkg::msg::dds_::ServoValues_::_servovalue__slice[6];
    return ret;
}

void ::message_pkg::msg::dds_::ServoValues_::_servovalue__free (::message_pkg::msg::dds_::ServoValues_::_servovalue__slice * s)
{
    delete [] s;
}

void ::message_pkg::msg::dds_::ServoValues_::_servovalue__copy(::message_pkg::msg::dds_::ServoValues_::_servovalue__slice * to, const ::message_pkg::msg::dds_::ServoValues_::_servovalue__slice * from)
{
    for (DDS::ULong i0 = 0; i0 < 6; i0++) {
        to[i0] = from[i0];
    }
}

::message_pkg::msg::dds_::ServoValues_::_servovalue__slice * ::message_pkg::msg::dds_::ServoValues_::_servovalue__dup(const ::message_pkg::msg::dds_::ServoValues_::_servovalue__slice * from)
{
    ::message_pkg::msg::dds_::ServoValues_::_servovalue__slice * to = ::message_pkg::msg::dds_::ServoValues_::_servovalue__alloc ();
    ::message_pkg::msg::dds_::ServoValues_::_servovalue__copy (to, from);
    return to;
}

