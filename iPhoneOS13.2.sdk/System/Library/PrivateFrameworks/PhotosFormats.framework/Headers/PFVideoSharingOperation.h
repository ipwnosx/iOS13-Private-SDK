//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVAsset, AVAssetExportSession, AVAudioMix, AVVideoComposition, CLLocation, NSArray, NSDate, NSError, NSObject, NSString, NSURL, PFAssetAdjustments;
@protocol OS_dispatch_queue;

@interface PFVideoSharingOperation : NSOperation
{
    AVAsset *_videoAsset;
    AVAudioMix *_audioMix;
    AVVideoComposition *_videoComposition;
    NSArray *_videoMetadata;
    NSObject<OS_dispatch_queue> *_externalIsolation;
    AVAssetExportSession *_exportSession;
    BOOL _beganExport;
    BOOL _operationSuccess;
    NSError *_operationError;
    BOOL _shouldStripMetadata;
    BOOL _shouldStripLocation;
    NSURL *_outputDirectoryURL;
    NSString *_outputFilename;
    CLLocation *_customLocation;
    NSDate *_customDate;
    NSString *_customAccessibilityLabel;
    NSString *_exportPreset;
    NSString *_exportFileType;
    NSURL *_videoURL;
    NSURL *_resultingFileURL;
    PFAssetAdjustments *__adjustments;
}

+ (id)operationErrorWithCode:(long long)arg1 underlyingError:(id)arg2 withDescription:(id)arg3;
@property(retain, nonatomic, setter=_setAdjustments:) PFAssetAdjustments *_adjustments; // @synthesize _adjustments=__adjustments;
@property(readonly, copy, nonatomic) NSURL *resultingFileURL; // @synthesize resultingFileURL=_resultingFileURL;
@property(copy, nonatomic, setter=_setVideoURL:) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) NSString *exportFileType; // @synthesize exportFileType=_exportFileType;
@property(copy, nonatomic) NSString *exportPreset; // @synthesize exportPreset=_exportPreset;
@property(copy, nonatomic) NSString *customAccessibilityLabel; // @synthesize customAccessibilityLabel=_customAccessibilityLabel;
@property(copy, nonatomic) NSDate *customDate; // @synthesize customDate=_customDate;
@property(copy, nonatomic) CLLocation *customLocation; // @synthesize customLocation=_customLocation;
@property(nonatomic) BOOL shouldStripLocation; // @synthesize shouldStripLocation=_shouldStripLocation;
@property(nonatomic) BOOL shouldStripMetadata; // @synthesize shouldStripMetadata=_shouldStripMetadata;
@property(copy, nonatomic) NSString *outputFilename; // @synthesize outputFilename=_outputFilename;
@property(copy, nonatomic) NSURL *outputDirectoryURL; // @synthesize outputDirectoryURL=_outputDirectoryURL;
// - (void).cxx_destruct;
@property(retain, nonatomic, setter=_setOperationError:) NSError *operationError;
@property(nonatomic, setter=_setSuccess:) BOOL success;
- (void)cancel;
@property(readonly, nonatomic) float progress;
- (BOOL)_runExport;
- (void)_validateMetadata;
- (BOOL)_ensureVideoProperties;
- (void)main;
- (id)initWithVideoURL:(id)arg1 adjustmentData:(id)arg2;

@end

