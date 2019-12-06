//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCacheableResource-Protocol.h>

@class AVTPreset, NSString;

@interface AVTPresetResources : NSObject <AVTCacheableResource>
{
    AVTPreset *_preset;
}

@property(readonly, nonatomic) AVTPreset *preset; // @synthesize preset=_preset;
// - (void).cxx_destruct;
- (BOOL)requiresEncryption;
- (NSUInteger)costForScope:(id)arg1;
- (id)volatileIdentifierForScope:(id)arg1;
@property(readonly, nonatomic) id resources;
@property(readonly, copy, nonatomic) NSString *presetIdentifier;
- (id)initWithPreset:(id)arg1;

@end

