/* Automatically generated nanopb header */
/* Generated by nanopb-0.2.5 at Fri Jan 17 14:02:23 2014. */

#ifndef _PB_OPENXC_PB_H_
#define _PB_OPENXC_PB_H_
#include <pb.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _openxc_VehicleMessage_Type {
    openxc_VehicleMessage_Type_RAW = 1,
    openxc_VehicleMessage_Type_TRANSLATED = 2
} openxc_VehicleMessage_Type;

typedef enum _openxc_TranslatedMessage_Type {
    openxc_TranslatedMessage_Type_STRING = 1,
    openxc_TranslatedMessage_Type_NUM = 2,
    openxc_TranslatedMessage_Type_BOOL = 3,
    openxc_TranslatedMessage_Type_EVENTED_STRING = 4,
    openxc_TranslatedMessage_Type_EVENTED_NUM = 5,
    openxc_TranslatedMessage_Type_EVENTED_BOOL = 6
} openxc_TranslatedMessage_Type;

/* Struct definitions */
typedef struct _openxc_RawMessage {
    bool has_bus;
    int32_t bus;
    bool has_message_id;
    uint32_t message_id;
    bool has_data;
    uint64_t data;
} openxc_RawMessage;

typedef struct _openxc_TranslatedMessage {
    bool has_type;
    openxc_TranslatedMessage_Type type;
    bool has_name;
    char name[100];
    bool has_string_value;
    char string_value[100];
    bool has_numeric_value;
    double numeric_value;
    bool has_boolean_value;
    bool boolean_value;
    bool has_string_event;
    char string_event[100];
    bool has_numeric_event;
    double numeric_event;
    bool has_boolean_event;
    bool boolean_event;
} openxc_TranslatedMessage;

typedef struct _openxc_VehicleMessage {
    bool has_type;
    openxc_VehicleMessage_Type type;
    bool has_raw_message;
    openxc_RawMessage raw_message;
    bool has_translated_message;
    openxc_TranslatedMessage translated_message;
} openxc_VehicleMessage;

/* Default values for struct fields */

/* Field tags (for use in manual encoding/decoding) */
#define openxc_RawMessage_bus_tag                1
#define openxc_RawMessage_message_id_tag         2
#define openxc_RawMessage_data_tag               3
#define openxc_TranslatedMessage_type_tag        1
#define openxc_TranslatedMessage_name_tag        2
#define openxc_TranslatedMessage_string_value_tag 3
#define openxc_TranslatedMessage_numeric_value_tag 4
#define openxc_TranslatedMessage_boolean_value_tag 5
#define openxc_TranslatedMessage_string_event_tag 6
#define openxc_TranslatedMessage_numeric_event_tag 7
#define openxc_TranslatedMessage_boolean_event_tag 8
#define openxc_VehicleMessage_type_tag           1
#define openxc_VehicleMessage_raw_message_tag    2
#define openxc_VehicleMessage_translated_message_tag 3

/* Struct field encoding specification for nanopb */
extern const pb_field_t openxc_VehicleMessage_fields[4];
extern const pb_field_t openxc_RawMessage_fields[4];
extern const pb_field_t openxc_TranslatedMessage_fields[9];

/* Maximum encoded size of messages (where known) */
#define openxc_VehicleMessage_size               373
#define openxc_RawMessage_size                   28
#define openxc_TranslatedMessage_size            334

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
