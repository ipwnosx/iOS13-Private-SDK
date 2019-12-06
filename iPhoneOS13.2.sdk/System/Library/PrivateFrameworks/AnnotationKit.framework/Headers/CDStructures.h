//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AKQuadrilateral {
    CGPoint _field1;
    CGPoint _field2;
    CGPoint _field3;
    CGPoint _field4;
};

struct PATHSEGMENT {
    unsigned int :4;
    unsigned int :60;
    CGPoint _field1;
};

struct _xmlDoc {
    void _field1;
    int _field2;
    char _field3;
    struct _xmlNode _field4;
    struct _xmlNode _field5;
    struct _xmlNode _field6;
    struct _xmlNode _field7;
    struct _xmlNode _field8;
    struct _xmlDoc _field9;
    int _field10;
    int _field11;
    struct _xmlDtd _field12;
    struct _xmlDtd _field13;
    struct _xmlNs _field14;
    char _field15;
    char _field16;
    void _field17;
    void _field18;
    char _field19;
    int _field20;
    struct _xmlDict _field21;
    void _field22;
    int _field23;
    int _field24;
};

struct _xmlDtd;

struct _xmlNode;

struct potrace_bitmap_s {
    int _field1;
    int _field2;
    int _field3;
    NSUInteger _field4;
};

struct potrace_curve_s {
    int _field1;
    int _field2;
    struct potrace_dpoint_s (_field3)[3];
};

struct potrace_dpoint_s;

struct potrace_param_s {
    int _field1;
    int _field2;
    double _field3;
    int _field4;
    double _field5;
    struct potrace_progress_s _field6;
};

struct potrace_path_s {
    int _field1;
    int _field2;
    struct potrace_curve_s _field3;
    struct potrace_path_s _field4;
    struct potrace_path_s _field5;
    struct potrace_path_s _field6;
    struct potrace_privpath_s _field7;
};

struct potrace_privpath_s;

struct potrace_progress_s {
    /* void * CDUnknownFunctionPointerType _field1 */;
    void _field2;
    double _field3;
    double _field4;
    double _field5;
};

struct vImage_Buffer {
    void _field1;
    NSUInteger _field2;
    NSUInteger _field3;
    NSUInteger _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    BOOL _field1;
    double _field2;
    BOOL _field3;
    double _field4;
} CDStruct_425ba859;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

