//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Named Structures

struct CPMLAlgorithm {
    /* void * CDUnknownFunctionPointerType _field1 */;
    char _field2[32];
    void _field3;
    struct CPMLCDB _field4;
    struct CPMLDelegate _field5;
    struct CPMLDelegateEngine _field6;
    struct CPMLTunableData _field7;
    struct CPMLIterator _field8;
    struct CPMLSerialization _field9;
};

struct CPMLCDB {
    struct CPMLStatistics _field1;
    struct sqlite3 _field2;
    struct sqlite3 _field3;
    struct CPMLIterator _field4;
    struct CPMLRemapper _field5;
    struct CPMLTunableData _field6;
};

struct CPMLDelegate {
    void _field1;
    void _field2;
};

struct CPMLDelegateEngine {
    void _field1;
    void _field2;
};

struct CPMLFeatureVector {
    int _field1;
    struct VectorClass _field2;
    struct vector<VectorClass, std::__1::allocator<VectorClass>> _field3;
    double _field4;
    struct vector<VectorClass, std::__1::allocator<VectorClass>> _field5;
    struct vector<ProbIndex, std::__1::allocator<ProbIndex>> _field6;
};

struct CPMLIterator;

struct CPMLRemapper {
    BOOL _field1;
    BOOL _field2;
    BOOL _field3;
    struct sqlite3 _field4;
    struct CPMLStatistics _field5;
    vector_12bd641b _field6;
    vector_12bd641b _field7;
};

struct CPMLSerialization {
    /* void * CDUnknownFunctionPointerType _field1 */;
    BOOL _field2;
    int _field3;
    int _field4;
    void _field5;
    struct sqlite3 _field6;
};

struct CPMLStatistics {
    vector_12bd641b _field1;
    struct vector<double, std::__1::allocator<double>> _field2;
    vector_12bd641b _field3;
    vector_12bd641b _field4;
    vector_12bd641b _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    BOOL _field10;
    struct vector<double, std::__1::allocator<double>> _field11;
    struct vector<double, std::__1::allocator<double>> _field12;
    struct vector<double, std::__1::allocator<double>> _field13;
    struct vector<double, std::__1::allocator<double>> _field14;
    struct vector<double, std::__1::allocator<double>> _field15;
    void _field16;
};

struct CPMLTunableData {
    int _field1;
    void _field2;
    void _field3;
};

struct ProbIndex;

struct VectorClass {
    vector_12bd641b _field1;
    struct vector<double, std::__1::allocator<double>> _field2;
};

struct sqlite3;

struct vector<ProbIndex, std::__1::allocator<ProbIndex>> {
    struct ProbIndex _field1;
    struct ProbIndex _field2;
    struct __compressed_pair<ProbIndex *, std::__1::allocator<ProbIndex>> {
        struct ProbIndex _field1;
    } _field3;
};

struct vector<VectorClass, std::__1::allocator<VectorClass>> {
    struct VectorClass _field1;
    struct VectorClass _field2;
    struct __compressed_pair<VectorClass *, std::__1::allocator<VectorClass>> {
        struct VectorClass _field1;
    } _field3;
};

struct vector<double, std::__1::allocator<double>> {
    double _field1;
    double _field2;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double _field1;
    } _field3;
};

struct vector<int, std::__1::allocator<int>> {
    int __begin_;
    int __end_;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int __value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct vector<int, std::__1::allocator<int>> {
    int __begin_;
    int __end_;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int __value_;
    } __end_cap_;
} vector_12bd641b;

