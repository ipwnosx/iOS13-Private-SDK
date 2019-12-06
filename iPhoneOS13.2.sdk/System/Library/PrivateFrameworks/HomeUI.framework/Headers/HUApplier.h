//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HUApplier : NSObject
{
    NSMutableArray *_applierBlocks;
    NSMutableArray *_completionBlocks;
    NSUInteger _state;
    double _progress;
}

+ (void)unregisterStandaloneApplier:(id)arg1;
+ (void)registerStandaloneApplier:(id)arg1;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSUInteger state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (BOOL)complete:(BOOL)arg1;
- (BOOL)_hasCompleted;
- (BOOL)cancel;
- (void)updateProgress:(double)arg1;
- (BOOL)start;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addApplierBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isInteractive) BOOL interactive;
- (id)init;

@end

