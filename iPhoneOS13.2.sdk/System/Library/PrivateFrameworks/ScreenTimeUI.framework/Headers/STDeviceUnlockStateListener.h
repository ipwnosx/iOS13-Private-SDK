//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface STDeviceUnlockStateListener : NSObject
{
    int _notifyToken;
    id /* CDUnknownBlockType */ _lockStateChangeHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ lockStateChangeHandler; // @synthesize lockStateChangeHandler=_lockStateChangeHandler;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL deviceIsLocked;
- (void)dealloc;
- (id)init;

@end

