#ifndef H_5BBB65DD0B440A4D6777762CCFAEC209_Num_SPLTYPES_H
#define H_5BBB65DD0B440A4D6777762CCFAEC209_Num_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Num_.h"


extern c_metaObject __Num__message_pkg__load (c_base base);

extern c_metaObject __Num__message_pkg_msg__load (c_base base);

extern c_metaObject __Num__message_pkg_msg_dds___load (c_base base);

extern const char *message_pkg_msg_dds__Num__metaDescriptor[];
extern const int message_pkg_msg_dds__Num__metaDescriptorArrLength;
extern const int message_pkg_msg_dds__Num__metaDescriptorLength;
extern c_metaObject __message_pkg_msg_dds__Num___load (c_base base);
struct _message_pkg_msg_dds__Num_ ;
extern  v_copyin_result __message_pkg_msg_dds__Num___copyIn(c_base base, const struct message_pkg::msg::dds_::Num_ *from, struct _message_pkg_msg_dds__Num_ *to);
extern  void __message_pkg_msg_dds__Num___copyOut(const void *_from, void *_to);
struct _message_pkg_msg_dds__Num_ {
    c_longlong num_;
};

#undef OS_API
#endif
