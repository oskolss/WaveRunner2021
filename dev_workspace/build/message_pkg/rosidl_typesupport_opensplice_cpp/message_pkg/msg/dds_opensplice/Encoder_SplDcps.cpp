#include "Encoder_SplDcps.h"
#include "ccpp_Encoder_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__message_pkg_msg_dds__Encoder___copyIn(
    c_base base,
    const struct ::message_pkg::msg::dds_::Encoder_ *from,
    struct _message_pkg_msg_dds__Encoder_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->fl_ = (c_longlong)from->fl_;
    to->fr_ = (c_longlong)from->fr_;
    to->rl_ = (c_longlong)from->rl_;
    to->rr_ = (c_longlong)from->rr_;
    return result;
}

void
__message_pkg_msg_dds__Encoder___copyOut(
    const void *_from,
    void *_to)
{
    const struct _message_pkg_msg_dds__Encoder_ *from = (const struct _message_pkg_msg_dds__Encoder_ *)_from;
    struct ::message_pkg::msg::dds_::Encoder_ *to = (struct ::message_pkg::msg::dds_::Encoder_ *)_to;
    to->fl_ = (::DDS::LongLong)from->fl_;
    to->fr_ = (::DDS::LongLong)from->fr_;
    to->rl_ = (::DDS::LongLong)from->rl_;
    to->rr_ = (::DDS::LongLong)from->rr_;
}

