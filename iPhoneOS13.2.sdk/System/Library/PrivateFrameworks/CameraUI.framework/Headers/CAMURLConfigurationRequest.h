//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMURLConfigurationRequest : NSObject
{
    BOOL _wantsQRCodeForSession;
    long long _requestedCaptureMode;
    long long _requestedCaptureDevice;
}

@property(readonly, nonatomic) BOOL wantsQRCodeForSession; // @synthesize wantsQRCodeForSession=_wantsQRCodeForSession;
@property(readonly, nonatomic) long long requestedCaptureDevice; // @synthesize requestedCaptureDevice=_requestedCaptureDevice;
@property(readonly, nonatomic) long long requestedCaptureMode; // @synthesize requestedCaptureMode=_requestedCaptureMode;
- (long long)_captureDeviceFromString:(id)arg1 outCaptureDevice:(long long )arg2;
- (BOOL)_captureModeFromString:(id)arg1 outCaptureMode:(long long )arg2;
- (BOOL)_initializeFromQueryDictionary:(id)arg1;
- (id)initWithQueryDictionary:(id)arg1;

@end

