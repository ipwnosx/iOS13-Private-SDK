//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSecureWindow.h>

@class SBWallpaperDefaults;
@protocol SBWallpaperWindowDelegate;

@interface _SBWallpaperWindow : SBSecureWindow
{
    SBWallpaperDefaults *_wallpaperDefaults;
    id <SBWallpaperWindowDelegate> _delegate;
}

@property(nonatomic) __weak id <SBWallpaperWindowDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)activeInterfaceOrientation;
- (void)_observeDefaults;
- (id)initWithScreen:(id)arg1 debugName:(id)arg2;

@end

