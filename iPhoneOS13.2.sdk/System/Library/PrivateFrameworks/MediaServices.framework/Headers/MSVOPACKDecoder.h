//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <MediaServices/MSVSegmentedSubDecoder-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableArray;

@interface MSVOPACKDecoder : NSCoder <MSVSegmentedSubDecoder>
{
    NSArray *_objects;
    NSMapTable *_objectLookupTable;
    NSMutableArray *_wrapperStack;
    NSDictionary *_userInfo;
}

+ (id)decodedObjectOfClasses:(id)arg1 fromData:(id)arg2 userInfo:(id)arg3 error:(id )arg4;
+ (id)decodedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id )arg3;
+ (id)decodedObjectOfClass:(Class)arg1 fromData:(id)arg2 userInfo:(id)arg3 error:(id )arg4;
+ (id)decodedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id )arg3;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSMutableArray *wrapperStack; // @synthesize wrapperStack=_wrapperStack;
@property(readonly, nonatomic) NSMapTable *objectLookupTable; // @synthesize objectLookupTable=_objectLookupTable;
@property(readonly, nonatomic) NSArray *objects; // @synthesize objects=_objects;
// - (void).cxx_destruct;
- (id)_decodeNumberForKey:(id)arg1;
- (void)msv_setUserInfo:(id)arg1;
- (id)msv_userInfo;
- (void)finishDecodingPartialTopLevelObject;
- (void)beginDecodingPartialTopLevelObjectOfClasses:(id)arg1;
- (const char )decodeBytesForKey:(id)arg1 returnedLength:(NSUInteger )arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)_decodeOPACKObject:(id)arg1 ofClasses:(id)arg2;
- (void)_validateClass:(Class)arg1 fromSupportedClasses:(id)arg2;
- (id)decodeRootObjectOfClasses:(id)arg1 error:(id )arg2;
- (BOOL)containsValueForKey:(id)arg1;
- (BOOL)allowsKeyedCoding;
- (BOOL)requiresSecureCoding;
- (id)initForReadingFromData:(id)arg1 userInfo:(id)arg2 error:(id )arg3;
- (id)initForReadingFromData:(id)arg1 error:(id )arg2;

@end

