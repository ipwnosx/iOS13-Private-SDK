//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TSUManagedTemporaryDirectory;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPDataBookmarkContext : NSObject
{
    TSUManagedTemporaryDirectory *_temporaryDirectory;
    NSMutableDictionary *_bookmarkDataURLsForFilenames;
    NSMutableDictionary *_digestStringsForFilenames;
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (BOOL)isEncryptedDataStorate:(id)arg1;
- (BOOL)bookmarkDataNeedsWriteForData:(id)arg1;
- (id)makeBookmarkDataForData:(id)arg1 filename:(id)arg2 options:(NSUInteger)arg3 error:(out id )arg4;
- (id)init;

@end

