//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CRCarKitServiceClient : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)serviceQueue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)performServiceBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_serviceQueuePerformBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)performSynchronousServiceBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)_setupConnection;
- (id)init;

@end

