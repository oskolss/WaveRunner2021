#ifndef H_D92B605B9C88A20D60DF9EA7B81AF0F0_Encoder_SPLTYPES_H
#define H_D92B605B9C88A20D60DF9EA7B81AF0F0_Encoder_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Encoder_.h"


extern c_metaObject __Encoder__message_pkg__load (c_base base);

extern c_metaObject __Encoder__message_pkg_msg__load (c_base base);

extern c_metaObject __Encoder__message_pkg_msg_dds___load (c_base base);

extern const char *message_pkg_msg_dds__Encoder__metaDescriptor[];
extern const int message_pkg_msg_dds__Encoder__metaDescriptorArrLength;
extern const int message_pkg_msg_dds__Encoder__metaDescriptorLength;
extern c_metaObject __message_pkg_msg_dds__Encoder___load (c_base base);
struct _message_pkg_msg_dds__Encoder_ ;
extern  v_copyin_result __message_pkg_msg_dds__Encoder___copyIn(c_base base, const struct message_pkg::msg::dds_::Encoder_ *from, struct _message_pkg_msg_dds__Encoder_ *to);
extern  void __message_pkg_msg_dds__Encoder___copyOut(const void *_from, void *_to);
struct _message_pkg_msg_dds__Encoder_ {
    c_longlong fl_;
    c_longlong fr_;
    c_longlong rl_;
    c_longlong rr_;
};

#undef OS_API
#endif
