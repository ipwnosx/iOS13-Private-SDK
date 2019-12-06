//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFoundation/NFLocking-Protocol.h>

@interface NFUnfairLock : NSObject <NFLocking>
{
//    struct os_unfair_lock_s _unfairLock;
    unsigned int _unfairLockOptions;
}

@property(nonatomic) unsigned int unfairLockOptions; // @synthesize unfairLockOptions=_unfairLockOptions;
// property(nonatomic) struct os_unfair_lock_s unfairLock; // @synthesize unfairLock=_unfairLock;
- (void)unlock;
- (void)lock;
- (void)performWithLockSync:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithOptions:(long long)arg1;

@end

