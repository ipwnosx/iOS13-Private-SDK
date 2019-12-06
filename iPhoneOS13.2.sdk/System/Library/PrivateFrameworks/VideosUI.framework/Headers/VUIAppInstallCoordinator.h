//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, VUIAccessViewController, VUIAppInstallerViewController, WLKChannelDetails;

__attribute__((visibility("hidden")))
@interface VUIAppInstallCoordinator : NSObject
{
    WLKChannelDetails *_channelDetails;
    NSString *_contentTitle;
    VUIAppInstallerViewController *_installerViewController;
    VUIAccessViewController *_accessViewController;
    NSUUID *_uuid;
}

@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) VUIAccessViewController *accessViewController; // @synthesize accessViewController=_accessViewController;
@property(retain, nonatomic) VUIAppInstallerViewController *installerViewController; // @synthesize installerViewController=_installerViewController;
@property(retain, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(retain, nonatomic) WLKChannelDetails *channelDetails; // @synthesize channelDetails=_channelDetails;
// - (void).cxx_destruct;
- (void)_installAppWithChannel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installAppWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithChannelDetails:(id)arg1 contentTitle:(id)arg2;

@end

