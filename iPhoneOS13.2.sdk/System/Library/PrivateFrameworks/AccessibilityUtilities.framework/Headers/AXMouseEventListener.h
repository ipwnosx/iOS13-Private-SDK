//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXDeviceMonitorDelegate-Protocol.h>

@class AXDeviceMonitor, AXEventProcessor, NSArray;
@protocol AXMouseEventListenerDelegate;

@interface AXMouseEventListener : NSObject <AXDeviceMonitorDelegate>
{
    AXDeviceMonitor *_deviceMonitor;
    AXEventProcessor *_eventProcessor;
    NSArray *_cachedMouseDevices;
    id <AXMouseEventListenerDelegate> _delegate;
}

+ (id)sharedInstance;
+ (id)_mouseMatching;
@property(nonatomic) __weak id <AXMouseEventListenerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_handleMouseButtonEvent:(id)arg1;
- (void)deviceMonitorDidDetectDeviceEvent:(id)arg1;
- (void)endFilteringEvents;
- (void)beginFilteringEvents;
- (id)discoveredMouseDevices;
- (void)dealloc;
- (id)init;

@end

