#ifndef H_782F2995A4B52F391CA3CB9A193249C1_MecanumInput_SPLTYPES_H
#define H_782F2995A4B52F391CA3CB9A193249C1_MecanumInput_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_MecanumInput_.h"


extern c_metaObject __MecanumInput__message_pkg__load (c_base base);

extern c_metaObject __MecanumInput__message_pkg_msg__load (c_base base);

extern c_metaObject __MecanumInput__message_pkg_msg_dds___load (c_base base);

extern const char *message_pkg_msg_dds__MecanumInput__metaDescriptor[];
extern const int message_pkg_msg_dds__MecanumInput__metaDescriptorArrLength;
extern const int message_pkg_msg_dds__MecanumInput__metaDescriptorLength;
extern c_metaObject __message_pkg_msg_dds__MecanumInput___load (c_base base);
struct _message_pkg_msg_dds__MecanumInput_ ;
extern  v_copyin_result __message_pkg_msg_dds__MecanumInput___copyIn(c_base base, const struct message_pkg::msg::dds_::MecanumInput_ *from, struct _message_pkg_msg_dds__MecanumInput_ *to);
extern  void __message_pkg_msg_dds__MecanumInput___copyOut(const void *_from, void *_to);
struct _message_pkg_msg_dds__MecanumInput_ {
    c_double inputvalue_[3];
};

#undef OS_API
#endif
