//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Transparency/GPBDictionaryInternalsProtocol-Protocol.h>

@class GPBMessage, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPBUInt32UInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

- (void)removeAll;
- (void)removeUInt64ForKey:(unsigned int)arg1;
- (void)setUInt64:(NSUInteger)arg1 forKey:(unsigned int)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (BOOL)getUInt64:(NSUInteger )arg1 forKey:(unsigned int)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setGPBGenericValue:(CDUnion_88782d86 )arg1 forGPBGenericValueKey:(CDUnion_88782d86 )arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (NSUInteger)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndUInt64sUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUInt64s:(const NSUInteger )arg1 forKeys:(const unsigned int )arg2 count:(NSUInteger)arg3;
- (id)init;

@end

