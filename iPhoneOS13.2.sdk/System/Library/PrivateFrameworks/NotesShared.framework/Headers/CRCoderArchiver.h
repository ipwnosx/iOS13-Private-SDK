//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/CRCoder.h>

@class NSMutableOrderedSet;

@interface CRCoderArchiver : CRCoder
{
//    struct vector<CRDT::Document_DocObject *, std::__1::allocator<CRDT::Document_DocObject *>> currentDocObjectEncodingStack;
    NSMutableOrderedSet *_uuidSet;
    NSMutableOrderedSet *_keySet;
    NSMutableOrderedSet *_encodedObjects;
   struct Document {
        /* void * CDUnknownFunctionPointerType  */;
        basic_string_a1f69cfb;
        unsigned int [1];
        int;
//        struct VectorTimestamp ;
//        struct VectorTimestamp ;
//        struct RepeatedPtrField<CRDT::Document_DocObject>;
//        struct RepeatedPtrField<std::__1::basic_string<char>>;
//        struct RepeatedPtrField<std::__1::basic_string<char>>;
//        struct RepeatedPtrField<std::__1::basic_string<char>>;
//        struct VectorTimestamp ;
    } _currentDocument;
}

+ (id)encodedDataWithDocument:(id)arg1;
+ (void)initialize;
// property(nonatomic) struct Document currentDocument; // @synthesize currentDocument=_currentDocument;
@property(retain, nonatomic) NSMutableOrderedSet *encodedObjects; // @synthesize encodedObjects=_encodedObjects;
@property(retain, nonatomic) NSMutableOrderedSet *keySet; // @synthesize keySet=_keySet;
@property(retain, nonatomic) NSMutableOrderedSet *uuidSet; // @synthesize uuidSet=_uuidSet;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (int)indexForKey:(id)arg1;
//  (struct Document_DocObject )currentDocumentObjectForEncoding;
//  (struct Document_CustomObject )currentCustomObjectForEncoding;
//  (struct ObjectID )mutableObjectIDForKey:(id)arg1;
- (NSUInteger)encodeUUIDIndexFromUUID:(id)arg1;
- (void)encodeUInt64:(NSUInteger)arg1 forKey:(id)arg2;
- (void)encodeUInt32:(unsigned int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeUUID:(id)arg1 forKey:(id)arg2;
- (void)encodeString:(id)arg1 forKey:(id)arg2;
//  (void)encodeObject:(id)arg1 forObjectID:(struct ObjectID )arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)setTypeIndexForCurrentCustomObjectIfNecessary:(id)arg1;
- (id)encodeDocument:(id)arg1;

@end

