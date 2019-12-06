//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FindMyDevice/FMDAccessory-Protocol.h>
#import <FindMyDevice/FMDAudioAccessory-Protocol.h>

@class FMDAccessoryIdentifier, NSString, NSURL;

@interface FMDGenericAudioAccessory : NSObject <NSSecureCoding, FMDAudioAccessory, FMDAccessory>
{
    FMDAccessoryIdentifier *_accessoryIdentifier;
    NSString *_audioRoutingIdentifier;
    NSURL *_audioURL;
}

+ (BOOL)supportsSecureCoding;
+ (id)copyAccessory:(id)arg1;
@property(retain, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
@property(retain, nonatomic) NSString *audioRoutingIdentifier; // @synthesize audioRoutingIdentifier=_audioRoutingIdentifier;
@property(retain, nonatomic) FMDAccessoryIdentifier *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
// - (void).cxx_destruct;
- (BOOL)updatePlaybackChannels:(id)arg1;
- (BOOL)updateAudioAsset:(id)arg1;
@property(readonly, nonatomic) NSUInteger inEar;
@property(readonly, nonatomic) BOOL playingSound;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;

@end

