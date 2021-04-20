#ifndef _H_D92B605B9C88A20D60DF9EA7B81AF0F0_Encoder_DCPS_H_
#define _H_D92B605B9C88A20D60DF9EA7B81AF0F0_Encoder_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Encoder_.h"


namespace message_pkg
{
    namespace msg
    {
        namespace dds_
        {
            class Encoder_TypeSupportInterface;

            typedef Encoder_TypeSupportInterface * Encoder_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Encoder_TypeSupportInterface> Encoder_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Encoder_TypeSupportInterface> Encoder_TypeSupportInterface_out;


            class Encoder_DataWriter;

            typedef Encoder_DataWriter * Encoder_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Encoder_DataWriter> Encoder_DataWriter_var;
            typedef DDS_DCPSInterface_out < Encoder_DataWriter> Encoder_DataWriter_out;


            class Encoder_DataReader;

            typedef Encoder_DataReader * Encoder_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Encoder_DataReader> Encoder_DataReader_var;
            typedef DDS_DCPSInterface_out < Encoder_DataReader> Encoder_DataReader_out;


            class Encoder_DataReaderView;

            typedef Encoder_DataReaderView * Encoder_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Encoder_DataReaderView> Encoder_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Encoder_DataReaderView> Encoder_DataReaderView_out;

            struct Encoder_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Encoder_, struct Encoder_Seq_uniq_> Encoder_Seq;
            typedef DDS_DCPSSequence_var < Encoder_Seq> Encoder_Seq_var;
            typedef DDS_DCPSSequence_out < Encoder_Seq> Encoder_Seq_out;

            class  Encoder_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Encoder_TypeSupportInterface_ptr _ptr_type;
                typedef Encoder_TypeSupportInterface_var _var_type;

                static Encoder_TypeSupportInterface_ptr _duplicate (Encoder_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Encoder_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Encoder_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Encoder_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Encoder_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Encoder_TypeSupportInterface () {};
                ~Encoder_TypeSupportInterface () {};
            private:
                Encoder_TypeSupportInterface (const Encoder_TypeSupportInterface &);
                Encoder_TypeSupportInterface & operator = (const Encoder_TypeSupportInterface &);
            };

            class  Encoder_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Encoder_DataWriter_ptr _ptr_type;
                typedef Encoder_DataWriter_var _var_type;

                static Encoder_DataWriter_ptr _duplicate (Encoder_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Encoder_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Encoder_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Encoder_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Encoder_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Encoder_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Encoder_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Encoder_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Encoder_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Encoder_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Encoder_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Encoder_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Encoder_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Encoder_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Encoder_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Encoder_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Encoder_& instance_data) = 0;

            protected:
                Encoder_DataWriter () {};
                ~Encoder_DataWriter () {};
            private:
                Encoder_DataWriter (const Encoder_DataWriter &);
                Encoder_DataWriter & operator = (const Encoder_DataWriter &);
            };

            class  Encoder_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Encoder_DataReader_ptr _ptr_type;
                typedef Encoder_DataReader_var _var_type;

                static Encoder_DataReader_ptr _duplicate (Encoder_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Encoder_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Encoder_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Encoder_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Encoder_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Encoder_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Encoder_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Encoder_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Encoder_& instance) = 0;

            protected:
                Encoder_DataReader () {};
                ~Encoder_DataReader () {};
            private:
                Encoder_DataReader (const Encoder_DataReader &);
                Encoder_DataReader & operator = (const Encoder_DataReader &);
            };

            class  Encoder_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Encoder_DataReaderView_ptr _ptr_type;
                typedef Encoder_DataReaderView_var _var_type;

                static Encoder_DataReaderView_ptr _duplicate (Encoder_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Encoder_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Encoder_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Encoder_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Encoder_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Encoder_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Encoder_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Encoder_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Encoder_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Encoder_& instance) = 0;

            protected:
                Encoder_DataReaderView () {};
                ~Encoder_DataReaderView () {};
            private:
                Encoder_DataReaderView (const Encoder_DataReaderView &);
                Encoder_DataReaderView & operator = (const Encoder_DataReaderView &);
            };
        }

    }

}

#endif
