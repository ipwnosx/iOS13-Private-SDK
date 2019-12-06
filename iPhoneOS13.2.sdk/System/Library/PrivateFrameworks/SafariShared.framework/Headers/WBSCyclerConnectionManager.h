//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSXPCListener, WBSCyclerServiceProxy;
@protocol WBSCyclerTestTarget;

@interface WBSCyclerConnectionManager : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_xpcListener;
    WBSCyclerServiceProxy *_cyclerProxy;
    id <WBSCyclerTestTarget> _testTarget;
}

+ (BOOL)isCyclerEnabled;
@property(readonly, nonatomic) id <WBSCyclerTestTarget> testTarget; // @synthesize testTarget=_testTarget;
// - (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)connect;
- (id)initWithTestTarget:(id)arg1;
- (id)init;

@end

