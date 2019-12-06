//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatLivePhotoConversionRequest : PHMediaFormatConversionCompositeRequest
{
    PHMediaFormatConversionRequest *_imageConversionRequest;
    PHMediaFormatConversionRequest *_videoConversionRequest;
}

+ (id)requestForImageConversionRequest:(id)arg1 videoConversionRequest:(id)arg2 error:(id )arg3;
+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id )arg3;
@property(retain) PHMediaFormatConversionRequest *videoConversionRequest; // @synthesize videoConversionRequest=_videoConversionRequest;
@property(retain) PHMediaFormatConversionRequest *imageConversionRequest; // @synthesize imageConversionRequest=_imageConversionRequest;
// - (void).cxx_destruct;
- (void)didPreflightSubrequest:(id)arg1;
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;

@end

