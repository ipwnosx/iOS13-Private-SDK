//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

#import <NeutrinoCore/NUTimeBased-Protocol.h>

@class NSString;
@protocol NUScalePolicy;

@interface NUFaceDetectionRequest : NURenderRequest <NUTimeBased>
{
    long long _maxFaceCount;
    id <NUScalePolicy> _scalePolicy;
}

@property(retain) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
@property long long maxFaceCount; // @synthesize maxFaceCount=_maxFaceCount;
// - (void).cxx_destruct;
- (void)submit:(CDUnknownBlockType)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithComposition:(id)arg1;

@end

