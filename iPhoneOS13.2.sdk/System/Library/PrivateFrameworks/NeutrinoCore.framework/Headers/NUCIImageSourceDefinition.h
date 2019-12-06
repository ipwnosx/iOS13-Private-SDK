//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@class CIImage;

@interface NUCIImageSourceDefinition : NUSingleSourceDefinition
{
    CIImage *_image;
    long long _orientation;
}

@property(readonly) long long orientation; // @synthesize orientation=_orientation;
@property(readonly) CIImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (long long)mediaType;
- (id)initWithCIImage:(id)arg1 orientation:(long long)arg2;
- (id)init;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id )arg2;

@end

