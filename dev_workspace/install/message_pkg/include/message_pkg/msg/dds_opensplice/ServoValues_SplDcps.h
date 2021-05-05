#ifndef H_BF9D1B0B4A183B7AAC772492641F4056_ServoValues_SPLTYPES_H
#define H_BF9D1B0B4A183B7AAC772492641F4056_ServoValues_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ServoValues_.h"


extern c_metaObject __ServoValues__message_pkg__load (c_base base);

extern c_metaObject __ServoValues__message_pkg_msg__load (c_base base);

extern c_metaObject __ServoValues__message_pkg_msg_dds___load (c_base base);

extern const char *message_pkg_msg_dds__ServoValues__metaDescriptor[];
extern const int message_pkg_msg_dds__ServoValues__metaDescriptorArrLength;
extern const int message_pkg_msg_dds__ServoValues__metaDescriptorLength;
extern c_metaObject __message_pkg_msg_dds__ServoValues___load (c_base base);
struct _message_pkg_msg_dds__ServoValues_ ;
extern  v_copyin_result __message_pkg_msg_dds__ServoValues___copyIn(c_base base, const struct message_pkg::msg::dds_::ServoValues_ *from, struct _message_pkg_msg_dds__ServoValues_ *to);
extern  void __message_pkg_msg_dds__ServoValues___copyOut(const void *_from, void *_to);
struct _message_pkg_msg_dds__ServoValues_ {
    c_long servovalue_[6];
};

#undef OS_API
#endif
