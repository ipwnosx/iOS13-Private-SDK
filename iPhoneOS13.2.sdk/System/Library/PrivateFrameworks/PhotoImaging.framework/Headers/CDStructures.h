//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MISSING_TYPE;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CatmullRom<double __attribute__((ext_vector_type(2)))> {
    struct map<double, double __attribute__((ext_vector_type(2))), std::__1::less<double>, std::__1::allocator<std::__1::pair<const double, double __attribute__((ext_vector_type(2)))>>> _field1;
};

struct FigLivePhotoDetectedFaceV1Struct {
    long long _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    int _field6;
    short _field7;
    unsigned short _field8;
};

struct FigLivePhotoMetadata {
    unsigned int _field1;
    struct FigLivePhotoMetadataV1Struct _field2;
};

struct FigLivePhotoMetadataV1Struct {
    float _field1;
    long long _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    char _field9;
    char _field10;
    unsigned short _field11;
    unsigned int _field12;
    struct FigLivePhotoDetectedFaceV1Struct _field13[0];
};

struct Session {
    /* void * CDUnknownFunctionPointerType _field1 */;
    CDStruct_1b6d18a9 _field2;
    CDStruct_1b6d18a9 _field3;
    id /* CDUnknownBlockType */ _field4;
    struct unordered_map<long, std::__1::shared_ptr<VRFTrack>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, std::__1::shared_ptr<VRFTrack>>>> _field5;
    struct CatmullRom<double __attribute__((ext_vector_type(2)))> _field6;
};

struct VRFSession;

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, void *>*> _field1;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> _field1;
};

struct map<double, double __attribute__((ext_vector_type(2))), std::__1::less<double>, std::__1::allocator<std::__1::pair<const double, double __attribute__((ext_vector_type(2)))>>> {
    struct __tree<std::__1::__value_type<double, double __attribute__((ext_vector_type(2)))>, std::__1::__map_value_compare<double, std::__1::__value_type<double, double __attribute__((ext_vector_type(2)))>, std::__1::less<double>, true>, std::__1::allocator<std::__1::__value_type<double, double __attribute__((ext_vector_type(2)))>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<double, double __attribute__((ext_vector_type(2)))>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<double, std::__1::__value_type<double, double __attribute__((ext_vector_type(2)))>, std::__1::less<double>, true>> {
            NSUInteger _field1;
        } _field3;
    } _field1;
};

struct shared_ptr<VRFSession> {
    struct VRFSession __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, void *>*> _field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, void *>*>*>> {
                NSUInteger _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<long, std::__1::shared_ptr<VRFTrack>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, std::__1::shared_ptr<VRFTrack>>>> {
    struct __hash_table<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, std::__1::hash<long>, true>> {
            NSUInteger _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, std::__1::shared_ptr<VRFTrack>>, std::__1::equal_to<long>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<float, std::__1::allocator<float>> {
    float _field1;
    float _field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float _field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    MISSING_TYPE *columns[3];
} CDStruct_8e0628e6;

typedef struct {
    double _field1[4];
} CDStruct_145c54d4;

typedef struct {
    double sat;
    double contrast;
    double cast;
} CDStruct_7982ab34;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    int major;
    int minor;
} CDStruct_6ed351db;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_145c54d4 _field1;
    CDStruct_145c54d4 _field2;
    double _field3;
} CDStruct_92960315;

typedef struct {
    struct {
        long long x;
        long long y;
    } origin;
    CDStruct_d58201db size;
} CDStruct_996ac03c;

// Ambiguous groups
typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    long long width;
    long long height;
} CDStruct_d58201db;

typedef struct vector<float, std::__1::allocator<float>> {
    float _field1;
    float _field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float _field1;
    } _field3;
} vector_f9ed6fc8;

#pragma mark Named Unions

union CenteredRect {
    struct {
        double x;
        double y;
        double w;
        double h;
    } ;
    struct {
        MISSING_TYPE *xy__wh;
    } ;
    MISSING_TYPE *xywh;
};

#pragma mark Typedef'd Unions

typedef union {
    CDStruct_c3b9c2ee _field1;
    struct {
        CDStruct_6ed351db _field1;
        CDStruct_6ed351db _field2;
    } _field2;
} CDUnion_b42e088f;

