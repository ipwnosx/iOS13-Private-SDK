//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct PKBarcodeQuietZone {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    BOOL _field1;
    BOOL _field2;
    NSUInteger _field3;
} CDStruct_0e648023;

typedef struct {
    BOOL foreground;
    BOOL foregroundActive;
} CDStruct_973bafd3;

typedef struct {
    BOOL _field1;
    long long _field2;
} CDStruct_8f3a66c8;

typedef struct {
    NSUInteger numberOfSections;
    NSUInteger indexToSection;
    NSUInteger sectionToIndex;
} CDStruct_826e8cf1;

typedef struct {
    double target;
    double position;
    double velocity;
    double positionThreshold;
    double velocityThreshold;
    BOOL running;
} CDStruct_f94998c4;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    BOOL _field7;
    double _field8;
    double _field9;
    BOOL _field10;
    double _field11;
    double _field12;
} CDStruct_9c0b9312;

typedef struct {
    double mass;
    double stiffness;
    double damping;
    double beta;
    double omega0;
    double scratch;
    BOOL dirty;
} CDStruct_5c14e0b2;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double cornerRadius;
    long long shape;
    long long style;
    long long highlightEffect;
    long long disabledEffect;
} CDStruct_e6a35582;

typedef struct {
    double _field1;
    double _field2;
    CGSize _field3;
    double _field4;
    double _field5;
    BOOL _field6;
} CDStruct_19e39b3b;

typedef struct {
    CDStruct_c3b9c2ee _field1;
    CDStruct_c3b9c2ee _field2;
} CDStruct_90e2a262;

typedef struct {
    CGSize preferredContentSize;
    double minimumNavigationHeight;
    BOOL isRoot;
} CDStruct_47050b7f;

typedef struct {
    CGSize _field1;
    CGSize _field2;
    double _field3;
} CDStruct_bc00259c;

typedef struct {
    CGRect _field1;
    CGRect _field2;
    double _field3;
} CDStruct_86e25f83;

typedef struct {
    CGSize boundingSize;
    struct {
        CGRect frame;
        BOOL widthConstrained;
    } textMetrics[4];
} CDStruct_c7197326;

// Ambiguous groups
typedef struct {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
} CDStruct_d8808cea;

