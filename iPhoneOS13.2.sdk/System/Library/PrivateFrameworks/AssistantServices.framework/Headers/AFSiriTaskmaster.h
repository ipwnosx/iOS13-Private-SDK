//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriRequestFailureHandling-Protocol.h>
#import <AssistantServices/AFSiriRequestHandling-Protocol.h>
#import <AssistantServices/AFSiriUsageResultHandling-Protocol.h>

@class NSMapTable, NSString, NSXPCListener;
@protocol AFSiriTaskDelivering, AFSiriTaskmasterDelegate, OS_dispatch_queue;

@interface AFSiriTaskmaster : NSObject <AFSiriUsageResultHandling, NSXPCListenerDelegate, AFSiriRequestHandling, AFSiriRequestFailureHandling>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <AFSiriTaskDelivering> _taskDeliverer;
    NSXPCListener *_usageResultListener;
    NSMapTable *_executorForRequest;
    id <AFSiriTaskmasterDelegate> _delegate;
}

+ (id)taskmasterForUIApplicationWithBundleIdentifier:(id)arg1;
+ (id)taskmasterForMachServiceForAppWithBundleIdentifier:(id)arg1;
+ (id)taskmasterForMachServiceWithName:(id)arg1;
@property(nonatomic) __weak id <AFSiriTaskmasterDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)handleSiriTaskUsageResult:(id)arg1 fromRequest:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)handleSiriRequest:(id)arg1 deliveryHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSString *description;
- (void)handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(NSUInteger)arg3;
- (void)_handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(NSUInteger)arg3;
- (void)dealloc;
- (id)initWithTaskDeliverer:(id)arg1;

@end

