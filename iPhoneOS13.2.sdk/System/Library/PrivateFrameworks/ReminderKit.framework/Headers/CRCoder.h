//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableOrderedSet, NSOrderedSet;

@interface CRCoder : NSObject
{
    NSMutableOrderedSet *_encodedObjects;
    struct Document {
        /* void * CDUnknownFunctionPointerType  */;
        basic_string_a1f69cfb;
        unsigned int [1];
        int;
//         struct VectorTimestamp ;
//         struct VectorTimestamp ;
//         struct RepeatedPtrField<CRDT::Document_DocObject>;
//         struct RepeatedPtrField<std::__1::basic_string<char>>;
//         struct RepeatedPtrField<std::__1::basic_string<char>>;
//         struct RepeatedPtrField<std::__1::basic_string<char>>;
//         struct VectorTimestamp ;
    } _currentDocument;
    NSOrderedSet *_clusterTypeSet;
}

+ (void)_registerClass:(Class)arg1 forType:(id)arg2 cluster:(BOOL)arg3;
+ (void)registerClass:(Class)arg1 forType:(id)arg2;
+ (void)registerCRClasses;
@property(readonly, nonatomic) NSOrderedSet *clusterTypeSet; // @synthesize clusterTypeSet=_clusterTypeSet;
// @property(nonatomic) struct Document currentDocument; // @synthesize currentDocument=_currentDocument;
@property(retain, nonatomic) NSMutableOrderedSet *encodedObjects; // @synthesize encodedObjects=_encodedObjects;
// - (void).cxx_destruct;
- (NSUInteger)typeIndexForClass:(Class)arg1;
@property(readonly, nonatomic) NSDictionary *typeToClassDict;
@property(readonly, nonatomic) NSOrderedSet *typeSet;

@end

