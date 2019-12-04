//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSRemoteControlClientDelegate, OS_dispatch_queue;

@interface CSRemoteControlClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CSRemoteControlClientDelegate> _delegate;
}

@property(nonatomic) __weak id <CSRemoteControlClientDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isConnected;
- (_Bool)waitingForConnection:(double)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end
