//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUnfairLock;

@interface FCOnce : NSObject
{
    BOOL _finished;
    NFUnfairLock *_lock;
}

@property(retain, nonatomic) NFUnfairLock *lock; // @synthesize lock=_lock;
@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
// - (void).cxx_destruct;
- (BOOL)hasBeenTriggered;
- (BOOL)trigger;
- (void)executeOnce:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(NSUInteger)arg1;
- (id)init;

@end

