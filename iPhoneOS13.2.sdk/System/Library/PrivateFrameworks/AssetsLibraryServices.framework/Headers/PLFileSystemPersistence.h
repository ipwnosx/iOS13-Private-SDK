//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PLFileSystemPersistence : NSObject
{
    NSObject<OS_dispatch_queue> *_writerQueue;
}

+ (void)performBlockOnWriterQueue:(CDUnknownBlockType)arg1;
+ (void)persistMetadata:(id)arg1 fileURL:(id)arg2;
+ (void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)persistUInt16:(unsigned short)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)persistUUIDString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)clearAllAttributesForFileAtUrl:(id)arg1;
+ (id)persistedAttributesForFileAtURL:(id)arg1 exists:(BOOL )arg2 includeUnknownAttributes:(BOOL)arg3;
+ (id)persistedAttributesForFileAtURL:(id)arg1;
+ (void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (id)filesystemPersistenceBatchItemForFileAtURL:(id)arg1;
+ (id)sharedInstance;
+ (id)persistenceKeyTypes;
// - (void).cxx_destruct;
- (void)_performOnWriterQueueWithIdentifier:(const char )arg1 block:(CDUnknownBlockType)arg2;
- (void)_backgroundWriteData:(id)arg1 toFileAtURL:(id)arg2;
- (id)init;

@end

