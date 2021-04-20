#include "Num_SplDcps.h"
#include "ccpp_Num_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__message_pkg_msg_dds__Num___copyIn(
    c_base base,
    const struct ::message_pkg::msg::dds_::Num_ *from,
    struct _message_pkg_msg_dds__Num_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->num_ = (c_longlong)from->num_;
    return result;
}

void
__message_pkg_msg_dds__Num___copyOut(
    const void *_from,
    void *_to)
{
    const struct _message_pkg_msg_dds__Num_ *from = (const struct _message_pkg_msg_dds__Num_ *)_from;
    struct ::message_pkg::msg::dds_::Num_ *to = (struct ::message_pkg::msg::dds_::Num_ *)_to;
    to->num_ = (::DDS::LongLong)from->num_;
}

