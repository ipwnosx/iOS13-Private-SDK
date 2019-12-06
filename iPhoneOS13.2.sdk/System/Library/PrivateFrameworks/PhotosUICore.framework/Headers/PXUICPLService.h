//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXCPLService-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class PXCPLServiceStatus, PXCPLState, PXCPLStatus;

@interface PXUICPLService : NSObject <PXChangeObserver, PXCPLService>
{
    PXCPLStatus *_statusProvider;
    PXCPLState *_state;
    PXCPLServiceStatus *_serviceStatus;
    id /* CDUnknownBlockType */ _handler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_serviceStatusDidChange:(id)arg1;
- (void)_setState:(id)arg1;
- (void)performAction:(long long)arg1;
- (BOOL)canPerformAction:(long long)arg1;
- (id)init;

@end

