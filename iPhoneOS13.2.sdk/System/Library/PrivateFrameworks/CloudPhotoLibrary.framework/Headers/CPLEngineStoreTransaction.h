//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSThread;

@interface CPLEngineStoreTransaction : NSObject
{
    NSThread *_currentThread;
    BOOL _forWrite;
    NSError *_error;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
- (id)redactedDescription;
- (id)description;
- (BOOL)canRead;
- (BOOL)canWrite;
- (void)_transactionDidFinish;
- (void)_transactionWillBeginOnThread:(id)arg1;
- (BOOL)do:(CDUnknownBlockType)arg1;
- (BOOL)_forWrite;
- (id)initForWrite:(BOOL)arg1;

@end

