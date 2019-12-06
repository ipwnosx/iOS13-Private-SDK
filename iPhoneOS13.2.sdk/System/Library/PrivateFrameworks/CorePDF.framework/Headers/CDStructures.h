//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CPInlineContainer {
    unsigned int _field1;
    id _field2;
    struct CPInlineContainer _field3;
};

struct CPListInfo {
    unsigned int _field1;
    unsigned int _field2;
    CGRect _field3;
    struct __CFString _field4;
    int _field5;
    unsigned int _field6;
    unsigned int _field7;
    int _field8;
    BOOL _field9;
    BOOL _field10;
    BOOL _field11;
    void _field12;
};

struct CPMultiUnicodes;

struct CPPDFChar {
    struct CPPDFObject _field1;
    unsigned short _field2;
    unsigned short _field3;
    CGPoint _field4;
    CGSize _field5;
    struct CPPDFStyle _field6;
    double _field7;
    int _field8;
    long long _field9;
};

struct CPPDFClipBuffer {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct CPPDFClipSequence _field4;
};

struct CPPDFClipSequence;

struct CPPDFContext {
    CGRect _field1;
    unsigned int _field2;
    struct CPPDFGraphicState _field3;
    struct CPPDFGraphicState _field4;
    CGPDFContentStream _field5[250];
    unsigned int _field6;
    struct PrimitiveBuffer _field7;
    struct PrimitiveBuffer _field8;
    struct PrimitiveBuffer _field9;
    struct CPPDFClipBuffer _field10;
    struct __CFDictionary _field11;
    struct __CFDictionary _field12;
    struct __CFDictionary _field13;
    struct CPPDFStyle _field14;
    int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    int _field19;
    CGPDFPage _field20;
    struct CPMultiUnicodes _field21;
    long long _field22;
    long long _field23;
    unsigned int _field24;
    CGPathRef_field25;
    BOOL _field26;
    CGPDFTaggedContext _field27;
};

struct CPPDFGraphicState;

struct CPPDFImage {
    struct CPPDFObject _field1;
    unsigned int _field2;
    CGPDFStream _field3;
    int _field4;
    CGImageRef_field5;
    CGAffineTransform _field6;
    CGPDFDictionary _field7;
    double _field8;
    CGColorRef_field9;
    long long _field10;
};

struct CPPDFObject {
    CGRect _field1;
    CGRect _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct CPPDFShape {
    struct CPPDFObject _field1;
    unsigned int _field2;
    struct CPPDFStyle _field3;
    int _field4;
    CGPathRef_field5;
    BOOL _field6;
    CGAffineTransform _field7;
    CGAffineTransform _field8;
    long long _field9;
};

struct CPPDFStyle {
    CGColorRef_field1;
    CGColorSpaceRef_field2;
    CGColorRef_field3;
    CGColorSpaceRef_field4;
    double _field5;
    double _field6;
    unsigned char _field7;
    unsigned char _field8;
    int _field9;
    double _field10;
    id _field11;
    double _field12;
    CGPDFObject _field13;
    CGPDFObject _field14;
    CGColorRef_field15;
    struct CPPDFStyle _field16;
};

struct PrimitiveBuffer {
    void _field1;
    void _field2;
    void _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    int _field8;
};

struct __CFDictionary;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_2a61e2ef;

typedef struct {
    NSUInteger _field1;
    id _field2;
    NSUInteger _field3;
    NSUInteger _field4[5];
} CDStruct_70511ce9;

typedef struct {
    double _field1;
    unsigned int _field2;
    double _field3;
    double _field4;
    unsigned int _field5;
    double _field6;
    double _field7;
    BOOL _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    BOOL _field20;
} CDStruct_1ec70fb1;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    long long location;
    long long length;
} CDStruct_627e0f85;

typedef struct CDStruct_183601bc;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    int _field5;
    int _field6;
    struct CPPDFStyle _field7;
} CDStruct_8db92b66;

typedef struct {
    CGPoint _field1;
    CGPoint _field2;
    CGPoint _field3;
    CGPoint _field4;
} CDStruct_f9662865;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    int _field3;
    int _field4;
    CGRect _field5;
} CDStruct_2e2afed4;

typedef struct {
    double fontStretch;
    double fontWeight;
    unsigned int flags;
    CGRect fontBBox;
    double italicAngle;
    double ascent;
    double descent;
    double leading;
    double capHeight;
    double xHeight;
    double stemV;
    double stemH;
    double avgWidth;
    double maxWidth;
    double missingWidth;
    double spaceWidth;
    double underlinePosition;
    double underlineThickness;
} CDStruct_05724ab2;

