//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, Protocol;

__attribute__((visibility("hidden")))
@interface TSCEDistributor : NSObject
{
    NSMutableArray *_receivers;
}

@property(readonly, nonatomic) NSArray *receivers; // @synthesize receivers=_receivers;
// - (void).cxx_destruct;
- (void)suspendDuringBlock:(CDUnknownBlockType)arg1;
- (void)distributeBlock:(CDUnknownBlockType)arg1;
- (void)disconnect;
- (void)dropAllTargets;
- (BOOL)hasReceiver:(id)arg1;
- (void)removeReceiver:(id)arg1;
- (void)addReceiverIfMissing:(id)arg1;
- (void)addReceiver:(id)arg1;
@property(readonly, nonatomic) Protocol *protocol;
- (id)init;

@end

