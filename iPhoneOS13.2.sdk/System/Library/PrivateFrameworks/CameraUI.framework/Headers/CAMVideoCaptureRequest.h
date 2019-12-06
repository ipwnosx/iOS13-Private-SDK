//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureRequest.h>


@protocol CAMVideoCaptureRequestDelegate;

@interface CAMVideoCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying>
{
    BOOL _timelapse;
    BOOL _shouldGenerateVideoPreviewImage;
    double _maximumRecordedDuration;
    long long _maximumRecordedFileSize;
    long long _remainingDiskUsageThreshold;
    id <CAMVideoCaptureRequestDelegate> _delegate;
    long long _captureVideoConfiguration;
    long long _torchMode;
    double _userInitationTimestamp;
}

@property(readonly, nonatomic) long long remainingDiskUsageThreshold; // @synthesize remainingDiskUsageThreshold=_remainingDiskUsageThreshold;
@property(readonly, nonatomic) long long maximumRecordedFileSize; // @synthesize maximumRecordedFileSize=_maximumRecordedFileSize;
@property(readonly, nonatomic) double maximumRecordedDuration; // @synthesize maximumRecordedDuration=_maximumRecordedDuration;
@property(readonly, nonatomic) BOOL shouldGenerateVideoPreviewImage; // @synthesize shouldGenerateVideoPreviewImage=_shouldGenerateVideoPreviewImage;
@property(readonly, nonatomic, getter=isTimelapse) BOOL timelapse; // @synthesize timelapse=_timelapse;
@property(readonly, nonatomic) double userInitationTimestamp; // @synthesize userInitationTimestamp=_userInitationTimestamp;
@property(readonly, nonatomic) long long torchMode; // @synthesize torchMode=_torchMode;
@property(readonly, nonatomic) long long captureVideoConfiguration; // @synthesize captureVideoConfiguration=_captureVideoConfiguration;
@property(readonly, nonatomic) __weak id <CAMVideoCaptureRequestDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2;
- (id)init;

@end

