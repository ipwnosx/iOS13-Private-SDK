//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatChainedConversionRequest : PHMediaFormatConversionCompositeRequest
{
    PHMediaFormatConversionRequest *_independentRequest;
    PHMediaFormatConversionRequest *_dependentRequest;
    id /* CDUnknownBlockType */ _successUpdateHandler;
}

+ (id)chainedRequestForAdjustmentRenderRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id )arg3;
+ (id)chainedRequestForRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id )arg3 successUpdateHandler:(CDUnknownBlockType)arg4;
+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id )arg3;
@property(copy) id /* CDUnknownBlockType */ successUpdateHandler; // @synthesize successUpdateHandler=_successUpdateHandler;
@property(retain) PHMediaFormatConversionRequest *dependentRequest; // @synthesize dependentRequest=_dependentRequest;
@property(retain) PHMediaFormatConversionRequest *independentRequest; // @synthesize independentRequest=_independentRequest;
// - (void).cxx_destruct;
- (void)postProcessSuccessfulCompositeRequest;
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;

@end

