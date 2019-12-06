//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct FCEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct FCShallowCopyPair {
    Class _field1;
    id _field2;
    id _field3;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>*> __next_;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void _field3;
    void _field4;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>*> __value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>*>*>> {
                NSUInteger __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>, std::__1::hash<int>, std::__1::equal_to<NTPBKeyValuePair_ValueType>, std::__1::allocator<std::__1::pair<const NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>> {
    struct __hash_table<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::__1::__unordered_map_hasher<NTPBKeyValuePair_ValueType, std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<NTPBKeyValuePair_ValueType, std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::__1::equal_to<NTPBKeyValuePair_ValueType>, true>, std::__1::allocator<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NTPBKeyValuePair_ValueType, std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::__1::hash<int>, true>> {
            NSUInteger __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<NTPBKeyValuePair_ValueType, std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::__1::equal_to<NTPBKeyValuePair_ValueType>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

// Ambiguous groups
typedef struct {
    unsigned int type:1;
} CDStruct_f953fb60;

