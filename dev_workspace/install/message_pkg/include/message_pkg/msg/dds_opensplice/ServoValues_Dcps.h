#ifndef _H_BF9D1B0B4A183B7AAC772492641F4056_ServoValues_DCPS_H_
#define _H_BF9D1B0B4A183B7AAC772492641F4056_ServoValues_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ServoValues_.h"


namespace message_pkg
{
    namespace msg
    {
        namespace dds_
        {
            class ServoValues_TypeSupportInterface;

            typedef ServoValues_TypeSupportInterface * ServoValues_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ServoValues_TypeSupportInterface> ServoValues_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ServoValues_TypeSupportInterface> ServoValues_TypeSupportInterface_out;


            class ServoValues_DataWriter;

            typedef ServoValues_DataWriter * ServoValues_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ServoValues_DataWriter> ServoValues_DataWriter_var;
            typedef DDS_DCPSInterface_out < ServoValues_DataWriter> ServoValues_DataWriter_out;


            class ServoValues_DataReader;

            typedef ServoValues_DataReader * ServoValues_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ServoValues_DataReader> ServoValues_DataReader_var;
            typedef DDS_DCPSInterface_out < ServoValues_DataReader> ServoValues_DataReader_out;


            class ServoValues_DataReaderView;

            typedef ServoValues_DataReaderView * ServoValues_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ServoValues_DataReaderView> ServoValues_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ServoValues_DataReaderView> ServoValues_DataReaderView_out;

            struct ServoValues_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < ServoValues_, struct ServoValues_Seq_uniq_> ServoValues_Seq;
            typedef DDS_DCPSSequence_var < ServoValues_Seq> ServoValues_Seq_var;
            typedef DDS_DCPSSequence_out < ServoValues_Seq> ServoValues_Seq_out;

            class  ServoValues_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ServoValues_TypeSupportInterface_ptr _ptr_type;
                typedef ServoValues_TypeSupportInterface_var _var_type;

                static ServoValues_TypeSupportInterface_ptr _duplicate (ServoValues_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ServoValues_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ServoValues_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ServoValues_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ServoValues_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ServoValues_TypeSupportInterface () {};
                ~ServoValues_TypeSupportInterface () {};
            private:
                ServoValues_TypeSupportInterface (const ServoValues_TypeSupportInterface &);
                ServoValues_TypeSupportInterface & operator = (const ServoValues_TypeSupportInterface &);
            };

            class  ServoValues_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ServoValues_DataWriter_ptr _ptr_type;
                typedef ServoValues_DataWriter_var _var_type;

                static ServoValues_DataWriter_ptr _duplicate (ServoValues_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ServoValues_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ServoValues_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ServoValues_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ServoValues_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ServoValues_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ServoValues_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ServoValues_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ServoValues_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ServoValues_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ServoValues_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ServoValues_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ServoValues_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ServoValues_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ServoValues_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ServoValues_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ServoValues_& instance_data) = 0;

            protected:
                ServoValues_DataWriter () {};
                ~ServoValues_DataWriter () {};
            private:
                ServoValues_DataWriter (const ServoValues_DataWriter &);
                ServoValues_DataWriter & operator = (const ServoValues_DataWriter &);
            };

            class  ServoValues_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ServoValues_DataReader_ptr _ptr_type;
                typedef ServoValues_DataReader_var _var_type;

                static ServoValues_DataReader_ptr _duplicate (ServoValues_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ServoValues_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ServoValues_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ServoValues_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ServoValues_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ServoValues_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ServoValues_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ServoValues_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ServoValues_& instance) = 0;

            protected:
                ServoValues_DataReader () {};
                ~ServoValues_DataReader () {};
            private:
                ServoValues_DataReader (const ServoValues_DataReader &);
                ServoValues_DataReader & operator = (const ServoValues_DataReader &);
            };

            class  ServoValues_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ServoValues_DataReaderView_ptr _ptr_type;
                typedef ServoValues_DataReaderView_var _var_type;

                static ServoValues_DataReaderView_ptr _duplicate (ServoValues_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ServoValues_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ServoValues_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ServoValues_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ServoValues_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ServoValues_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ServoValues_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ServoValues_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ServoValues_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ServoValues_& instance) = 0;

            protected:
                ServoValues_DataReaderView () {};
                ~ServoValues_DataReaderView () {};
            private:
                ServoValues_DataReaderView (const ServoValues_DataReaderView &);
                ServoValues_DataReaderView & operator = (const ServoValues_DataReaderView &);
            };
        }

    }

}

#endif
