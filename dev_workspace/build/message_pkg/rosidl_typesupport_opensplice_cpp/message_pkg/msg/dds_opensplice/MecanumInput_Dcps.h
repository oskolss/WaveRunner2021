#ifndef _H_782F2995A4B52F391CA3CB9A193249C1_MecanumInput_DCPS_H_
#define _H_782F2995A4B52F391CA3CB9A193249C1_MecanumInput_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "MecanumInput_.h"


namespace message_pkg
{
    namespace msg
    {
        namespace dds_
        {
            class MecanumInput_TypeSupportInterface;

            typedef MecanumInput_TypeSupportInterface * MecanumInput_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MecanumInput_TypeSupportInterface> MecanumInput_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MecanumInput_TypeSupportInterface> MecanumInput_TypeSupportInterface_out;


            class MecanumInput_DataWriter;

            typedef MecanumInput_DataWriter * MecanumInput_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MecanumInput_DataWriter> MecanumInput_DataWriter_var;
            typedef DDS_DCPSInterface_out < MecanumInput_DataWriter> MecanumInput_DataWriter_out;


            class MecanumInput_DataReader;

            typedef MecanumInput_DataReader * MecanumInput_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MecanumInput_DataReader> MecanumInput_DataReader_var;
            typedef DDS_DCPSInterface_out < MecanumInput_DataReader> MecanumInput_DataReader_out;


            class MecanumInput_DataReaderView;

            typedef MecanumInput_DataReaderView * MecanumInput_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MecanumInput_DataReaderView> MecanumInput_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MecanumInput_DataReaderView> MecanumInput_DataReaderView_out;

            struct MecanumInput_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < MecanumInput_, struct MecanumInput_Seq_uniq_> MecanumInput_Seq;
            typedef DDS_DCPSSequence_var < MecanumInput_Seq> MecanumInput_Seq_var;
            typedef DDS_DCPSSequence_out < MecanumInput_Seq> MecanumInput_Seq_out;

            class  MecanumInput_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MecanumInput_TypeSupportInterface_ptr _ptr_type;
                typedef MecanumInput_TypeSupportInterface_var _var_type;

                static MecanumInput_TypeSupportInterface_ptr _duplicate (MecanumInput_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MecanumInput_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MecanumInput_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MecanumInput_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MecanumInput_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MecanumInput_TypeSupportInterface () {};
                ~MecanumInput_TypeSupportInterface () {};
            private:
                MecanumInput_TypeSupportInterface (const MecanumInput_TypeSupportInterface &);
                MecanumInput_TypeSupportInterface & operator = (const MecanumInput_TypeSupportInterface &);
            };

            class  MecanumInput_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MecanumInput_DataWriter_ptr _ptr_type;
                typedef MecanumInput_DataWriter_var _var_type;

                static MecanumInput_DataWriter_ptr _duplicate (MecanumInput_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MecanumInput_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MecanumInput_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MecanumInput_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MecanumInput_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MecanumInput_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MecanumInput_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MecanumInput_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MecanumInput_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MecanumInput_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MecanumInput_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MecanumInput_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MecanumInput_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MecanumInput_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MecanumInput_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MecanumInput_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MecanumInput_& instance_data) = 0;

            protected:
                MecanumInput_DataWriter () {};
                ~MecanumInput_DataWriter () {};
            private:
                MecanumInput_DataWriter (const MecanumInput_DataWriter &);
                MecanumInput_DataWriter & operator = (const MecanumInput_DataWriter &);
            };

            class  MecanumInput_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MecanumInput_DataReader_ptr _ptr_type;
                typedef MecanumInput_DataReader_var _var_type;

                static MecanumInput_DataReader_ptr _duplicate (MecanumInput_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MecanumInput_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MecanumInput_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MecanumInput_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MecanumInput_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MecanumInput_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MecanumInput_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MecanumInput_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MecanumInput_& instance) = 0;

            protected:
                MecanumInput_DataReader () {};
                ~MecanumInput_DataReader () {};
            private:
                MecanumInput_DataReader (const MecanumInput_DataReader &);
                MecanumInput_DataReader & operator = (const MecanumInput_DataReader &);
            };

            class  MecanumInput_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MecanumInput_DataReaderView_ptr _ptr_type;
                typedef MecanumInput_DataReaderView_var _var_type;

                static MecanumInput_DataReaderView_ptr _duplicate (MecanumInput_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MecanumInput_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MecanumInput_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MecanumInput_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MecanumInput_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MecanumInput_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MecanumInput_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MecanumInput_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MecanumInput_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MecanumInput_& instance) = 0;

            protected:
                MecanumInput_DataReaderView () {};
                ~MecanumInput_DataReaderView () {};
            private:
                MecanumInput_DataReaderView (const MecanumInput_DataReaderView &);
                MecanumInput_DataReaderView & operator = (const MecanumInput_DataReaderView &);
            };
        }

    }

}

#endif
