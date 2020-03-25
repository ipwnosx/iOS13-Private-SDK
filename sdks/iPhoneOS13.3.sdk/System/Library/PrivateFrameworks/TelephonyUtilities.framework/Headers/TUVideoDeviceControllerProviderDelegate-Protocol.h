//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/AVConferencePreviewClientDelegate-Protocol.h>

@class NSError, NSString, VideoAttributes;
@protocol TUVideoDeviceControllerProvider;

@protocol TUVideoDeviceControllerProviderDelegate <AVConferencePreviewClientDelegate>
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 cameraZoomAvailabilityDidChange:(BOOL)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(NSString *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didReceiveErrorFromCameraUniqueID:(NSString *)arg2 error:(NSError *)arg3;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didChangeLocalVideoAttributes:(VideoAttributes *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 cameraDidBecomeAvailableForUniqueID:(NSString *)arg2;
- (void)captureDevicesChangedForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
- (void)didStopPreviewForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
- (void)didStartPreviewForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
@end
