//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageTransformAffine.h>

@interface NUImageTransformScale : NUImageTransformAffine
{
//     CDStruct_1e2b2e48 _scale;
}

// @property(readonly) CDStruct_912cb5d2 scale; // @synthesize scale=_scale;
- (id)inverseTransform;
// - (id)initWithScale:(CDStruct_912cb5d2)arg1;
- (id)initWithAffineTransform:(CGAffineTransform)arg1;

@end

