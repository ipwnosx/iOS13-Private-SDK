//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatLivePhotoConversionRequest;

@interface PHMediaFormatLivePhotoBundleConversionRequest : PHMediaFormatConversionCompositeRequest
{
    PHMediaFormatLivePhotoConversionRequest *_livePhotoConversionRequest;
}

@property(retain) PHMediaFormatLivePhotoConversionRequest *livePhotoConversionRequest; // @synthesize livePhotoConversionRequest=_livePhotoConversionRequest;
// - (void).cxx_destruct;
- (void)postProcessSuccessfulCompositeRequest;
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (BOOL)prepareWithError:(id )arg1;

@end

