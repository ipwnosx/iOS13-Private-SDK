//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@interface NUAuxiliaryImageRenderRequest : NURenderRequest
{
    long long _auxiliaryImageType;
}

@property long long auxiliaryImageType; // @synthesize auxiliaryImageType=_auxiliaryImageType;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
- (long long)mediaComponentType;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithComposition:(id)arg1;

@end

