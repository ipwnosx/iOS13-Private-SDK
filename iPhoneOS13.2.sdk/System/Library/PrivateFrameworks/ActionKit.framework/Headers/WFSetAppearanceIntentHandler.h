//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFSetAppearanceIntentHandling-Protocol.h>

@class UISUserInterfaceStyleMode;

@interface WFSetAppearanceIntentHandler : NSObject <WFSetAppearanceIntentHandling>
{
    UISUserInterfaceStyleMode *_styleMode;
}

@property(retain, nonatomic) UISUserInterfaceStyleMode *styleMode; // @synthesize styleMode=_styleMode;
// - (void).cxx_destruct;
- (void)setDeviceAppearance:(long long)arg1;
- (void)handleSetAppearance:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveStyleForSetAppearance:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;

@end

