//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/SSTestingCoordinatorDelegate-Protocol.h>
#import <ScreenshotServices/SSUIServiceServerDelegate-Protocol.h>

@class RCPEventStreamRecorder, RCPScreenRecorder, SSApplicationScreenshotSupplementalDataCapturer, SSDittoRemoteConnection, SSScreenshotsWindow, SSSnapshotter, SSTestingCoordinator, SSUIServiceServer, UIWindow;
@protocol SSScreenCapturerDelegate;

@interface SSScreenCapturer : NSObject <SSUIServiceServerDelegate, SSTestingCoordinatorDelegate>
{
    SSSnapshotter *_snapshotter;
    SSDittoRemoteConnection *_dittoRemoteConnection;
    SSApplicationScreenshotSupplementalDataCapturer *_metadataCapturer;
    SSUIServiceServer *_uiServiceServer;
    SSTestingCoordinator *_testingCoordinator;
    SSScreenshotsWindow *_serviceWindow;
    RCPEventStreamRecorder *_recap;
    RCPScreenRecorder *_recapSnapshotter;
    id <SSScreenCapturerDelegate> _delegate;
}

+ (void)playScreenshotSound;
+ (BOOL)shouldUseScreenCapturerForScreenshots;
+ (id)_currentDisplayLayout;
+ (BOOL)_filesAppExistsOnSystem;
@property(nonatomic) __weak id <SSScreenCapturerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)testingCoordinator:(id)arg1 requestsTakingScreenshotForRunPPTRequest:(id)arg2;
- (id)_testingCoordinator;
@property(readonly, nonatomic) UIWindow *screenshotsWindow;
- (void)server:(id)arg1 handleRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)_betaFeedbackEnabled:(id)arg1;
- (id)_applicationProxyForCurrentApp;
- (id)_bundleIDForCurrentApplication;
- (id)_betaApplicationName;
- (BOOL)_screenshotWasTakenOverBetaApp;
- (void)_takeScreenshotWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 appleInternalOptions:(id)arg3;
- (void)_preheatAndTakeScreenshotIfPossibleWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 appleInternalOptions:(id)arg3;
- (void)_saveImageToPhotoLibrary:(id)arg1 environmentDescription:(id)arg2;
- (void)_captureAndSendMetadataAndDocumentForEnvironmentDescription:(id)arg1;
- (void)_captureAndSendDocumentForEnvironmentElement:(id)arg1;
- (void)_captureAndSendMetadataForEnvironmentElement:(id)arg1 sendCompletion:(CDUnknownBlockType)arg2;
- (void)_sendEnvironmentDescription:(id)arg1 savingImageToPhotos:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_environmentDescriptionFromImage:(id)arg1;
- (void)takeScreenshot;
- (void)takeScreenshotWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2;
- (void)takeScreenshotWithPresentationOptions:(id)arg1;
- (void)preheatWithPresentationOptions:(id)arg1;
- (void)startRecap;
- (id)init;

@end

