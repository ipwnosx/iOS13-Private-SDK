//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/BSInvalidatable-Protocol.h>

@class NSString, SBWallpaperController;

@interface _SBWallpaperAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>
{
    BOOL _invalidated;
    SBWallpaperController *_wallpaperController;
    long long _type;
    NSString *_reason;
}

@property(nonatomic, getter=isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) __weak SBWallpaperController *wallpaperController; // @synthesize wallpaperController=_wallpaperController;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)invalidate;
- (id)initWithWallpaperController:(id)arg1 type:(long long)arg2 reason:(id)arg3;

@end

