//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GPBExtensionDescriptor, GPBFieldDescriptor, GPBUnknownFieldSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPBMessage : NSObject <NSSecureCoding, NSCopying>
{
    GPBUnknownFieldSet *unknownFields_;
    NSMutableDictionary *extensionMap_;
    NSMutableDictionary *autocreatedExtensionMap_;
    GPBMessage *autocreator_;
    GPBFieldDescriptor *autocreatorField_;
    GPBExtensionDescriptor *autocreatorExtension_;
    _Atomic id readOnlySemaphore_;
//     struct GPBMessage_Storage messageStorage_;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)supportsSecureCoding;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id )arg3;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id )arg3;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2 error:(id )arg3;
+ (id)parseFromData:(id)arg1 error:(id )arg2;
+ (id)message;
+ (id)descriptor;
+ (id)alloc;
+ (id)allocWithZone:(_NSZone )arg1;
+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)serializedSize;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addUnknownMapEntry:(int)arg1 value:(id)arg2;
- (BOOL)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(unsigned int)arg3;
- (void)parseMessageSet:(id)arg1 extensionRegistry:(id)arg2;
@property(copy, nonatomic) GPBUnknownFieldSet *unknownFields;
- (void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2;
- (void)clearExtension:(id)arg1;
- (void)setExtension:(id)arg1 index:(NSUInteger)arg2 value:(id)arg3;
- (void)addExtension:(id)arg1 value:(id)arg2;
- (void)setExtension:(id)arg1 value:(id)arg2;
// - (void)writeExtensionsToCodedOutputStream:(id)arg1 range:(struct GPBExtensionRange)arg2;
- (id)extensionsCurrentlySet;
- (BOOL)hasExtension:(id)arg1;
- (id)getExistingExtension:(id)arg1;
- (id)getExtension:(id)arg1;
- (void)writeField:(id)arg1 toCodedOutputStream:(id)arg2;
- (void)writeDelimitedToCodedOutputStream:(id)arg1;
- (void)writeDelimitedToOutputStream:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1;
- (void)writeToOutputStream:(id)arg1;
- (id)delimitedData;
- (id)data;
- (id)descriptor;
@property(readonly, nonatomic, getter=isInitialized) BOOL initialized;
- (void)internalClear:(BOOL)arg1;
- (void)clear;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyFieldsInto:(id)arg1 zone:(_NSZone )arg2 descriptor:(id)arg3;
- (void)dealloc;
- (id)initWithCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id )arg3;
- (id)initWithData:(id)arg1 extensionRegistry:(id)arg2 error:(id )arg3;
- (id)initWithData:(id)arg1 error:(id )arg2;
- (id)init;

@end

