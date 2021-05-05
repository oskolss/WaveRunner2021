#include "MotorValues_.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_FArray_var< ::message_pkg::msg::dds_::MotorValues_::_motorvalue_, ::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice, struct ::message_pkg::msg::dds_::MotorValues_::_motorvalue__uniq_>;
template class DDS_DCPS_Array_forany< ::message_pkg::msg::dds_::MotorValues_::_motorvalue_, ::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice, struct ::message_pkg::msg::dds_::MotorValues_::_motorvalue__uniq_>;
#endif

template <>
::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice* DDS_DCPS_ArrayHelper < ::message_pkg::msg::dds_::MotorValues_::_motorvalue_, ::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice, ::message_pkg::msg::dds_::MotorValues_::_motorvalue__uniq_>::alloc ()
{
    return ::message_pkg::msg::dds_::MotorValues_::_motorvalue__alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < ::message_pkg::msg::dds_::MotorValues_::_motorvalue_, ::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice, ::message_pkg::msg::dds_::MotorValues_::_motorvalue__uniq_>::copy (::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice *to, const ::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice* from)
{
    ::message_pkg::msg::dds_::MotorValues_::_motorvalue__copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < ::message_pkg::msg::dds_::MotorValues_::_motorvalue_, ::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice, ::message_pkg::msg::dds_::MotorValues_::_motorvalue__uniq_>::free (::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice *ptr)
{
    ::message_pkg::msg::dds_::MotorValues_::_motorvalue__free(ptr);
}

::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice * ::message_pkg::msg::dds_::MotorValues_::_motorvalue__alloc ()
{
    ::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice * ret = new ::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice[4];
    return ret;
}

void ::message_pkg::msg::dds_::MotorValues_::_motorvalue__free (::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice * s)
{
    delete [] s;
}

void ::message_pkg::msg::dds_::MotorValues_::_motorvalue__copy(::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice * to, const ::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice * from)
{
    for (DDS::ULong i0 = 0; i0 < 4; i0++) {
        to[i0] = from[i0];
    }
}

::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice * ::message_pkg::msg::dds_::MotorValues_::_motorvalue__dup(const ::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice * from)
{
    ::message_pkg::msg::dds_::MotorValues_::_motorvalue__slice * to = ::message_pkg::msg::dds_::MotorValues_::_motorvalue__alloc ();
    ::message_pkg::msg::dds_::MotorValues_::_motorvalue__copy (to, from);
    return to;
}

