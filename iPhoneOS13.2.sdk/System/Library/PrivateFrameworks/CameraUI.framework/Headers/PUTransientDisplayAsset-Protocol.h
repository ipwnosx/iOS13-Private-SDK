//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/PUDisplayAsset-Protocol.h>

@class NSString, NSURL, UIImage;

@protocol PUTransientDisplayAsset <PUDisplayAsset>
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) NSUInteger numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSString *burstIdentifier;
@property(readonly, nonatomic, getter=isHDR) BOOL HDR;
@property(readonly, copy, nonatomic) NSURL *persistenceURL;
@end

