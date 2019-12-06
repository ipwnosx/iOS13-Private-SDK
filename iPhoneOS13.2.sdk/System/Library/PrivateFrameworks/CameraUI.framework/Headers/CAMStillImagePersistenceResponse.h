//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMPersistenceResponse.h>

#import <CameraUI/CAMTransientAssetConvertible-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface CAMStillImagePersistenceResponse : CAMPersistenceResponse <CAMTransientAssetConvertible>
{
    BOOL _expectingPairedVideo;
    NSDictionary *_metadata;
    NSString *_burstIdentifier;
    NSUInteger _burstRepresentedCount;
}

@property(readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo; // @synthesize expectingPairedVideo=_expectingPairedVideo;
@property(readonly, nonatomic) NSUInteger burstRepresentedCount; // @synthesize burstRepresentedCount=_burstRepresentedCount;
@property(readonly, copy, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
// - (void).cxx_destruct;
// @property(readonly, nonatomic) CDStruct_1b6d18a9 irisStillDisplayTime;
@property(readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property(readonly, nonatomic) NSString *irisStillImageUUID;
@property(readonly, nonatomic) CGSize finalExpectedPixelSize;
// @property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) NSUInteger numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) NSDate *captureDate;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSUInteger mediaSubtypes;
@property(readonly, nonatomic) NSUInteger mediaType;
@property(readonly, copy) NSString *description;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scrubberImage:(id)arg5 finalExpectedPixelSize:(CGSize)arg6 metadata:(id)arg7 burstIdentifier:(id)arg8 burstRepresentedCount:(NSUInteger)arg9 expectingPairedVideo:(BOOL)arg10 coordinationInfo:(id)arg11;

@end

