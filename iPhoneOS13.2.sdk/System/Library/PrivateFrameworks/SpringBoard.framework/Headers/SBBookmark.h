//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBLeafIconDataSource-Protocol.h>

@class NSString, NSURL, UIWebClip;

@interface SBBookmark : NSObject <SBLeafIconDataSource>
{
    UIWebClip *_webClip;
}

+ (id)bookmarkWithWebClip:(id)arg1;
@property(readonly, nonatomic) UIWebClip *webClip; // @synthesize webClip=_webClip;
// - (void).cxx_destruct;
- (BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (BOOL)iconCompleteUninstall:(id)arg1;
- (BOOL)iconSupportsUninstall:(id)arg1;
//  (id)icon:(id)arg1 unmaskedImageWithInfo:(struct SBIconImageInfo)arg2;
- (NSUInteger)priorityForIcon:(id)arg1;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (BOOL)isUninstallSupported;
- (void)_deviceUnlockedForFirstTime:(id)arg1;
@property(readonly, nonatomic) NSURL *launchURL;
@property(readonly, nonatomic) NSString *identifier;
- (void)dealloc;
- (id)initWithWebClip:(id)arg1;

@end

