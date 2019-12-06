//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSProtobufSchemaBuilder-Protocol.h>

@class NSMutableData;

@interface BSProtobufSchema : NSObject <BSProtobufSchemaBuilder>
{
    Class _rootClass;
    BSProtobufSchema *_superSchema;
    long long _fieldCount;
    long long _autotagIndex;
//     struct _BSProtobufFieldEntry _entries;
    NSMutableData *_memoryData;
    BOOL _respondsToDidFinishProtobufDecodingWithError;
    BOOL _respondsToInitForProtobufDecoding;
    BOOL _respondsToInitProtobufTranslatorForObject;
}

- (void)addRepeatingField:(const char )arg1 forTag:(long long)arg2 allowedClasses:(id)arg3;
- (void)addRepeatingField:(const char )arg1 containsClass:(Class)arg2 forTag:(long long)arg3;
- (void)addRepeatingField:(const char )arg1 containsClasses:(id)arg2;
- (void)addRepeatingField:(const char )arg1 containsClass:(Class)arg2;
- (void)addField:(const char )arg1 allowedClasses:(id)arg2;
- (void)_addSubclassesForField:(const char )arg1 allowedSubclasses:(id)arg2 assertSubclassRelationship:(BOOL)arg3;
- (void)addField:(const char )arg1 forTag:(long long)arg2;
- (void)addField:(const char )arg1;
// - (struct _BSProtobufFieldEntry )_appendFieldEntriesOfCount:(long long)arg1;
- (void)dealloc;
- (id)initWithRootClass:(Class)arg1;

@end

