//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

#import <RelevanceEngine/REPipedLocationDonor-Protocol.h>

@class CLLocation, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface REPipedLocationReceiver : RESingleton <REPipedLocationDonor>
{
    NSXPCConnection *_connection;
    CLLocation *_location;
    long long _connectionWindowRetainCount;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)_queue_clearConnection;
- (void)_queue_setupConnection;
@property(copy, nonatomic) CLLocation *location;
- (void)_queue_setLocation:(id)arg1;
- (void)dealloc;
- (id)_init;

@end

