//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconLocationPresenting-Protocol.h>
#import <SpringBoardHome/SBIconViewQuerying-Protocol.h>

@class NSString, SBFolder, SBFolderIconImageCache, SBHIconImageCache, SBIcon, UIView, UIViewController, _UILegibilitySettings;

@protocol SBHIconRootViewProviding <SBIconLocationPresenting, SBIconViewQuerying, NSObject>
@property(retain, nonatomic) SBHIconImageCache *iconImageCache;
@property(retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property(nonatomic) long long currentPageIndex;
@property(readonly, nonatomic, getter=isScrollTracking) BOOL scrollTracking;
@property(readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property(nonatomic, getter=isEditing) BOOL editing;
@property(readonly, nonatomic) UIViewController *deepestFolderController;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) UIView *contentView;
@property(retain, nonatomic) SBFolder *folder;
- (void)setIdleText:(NSString *)arg1;
- (void)revealIcon:(SBIcon *)arg1 animated:(BOOL)arg2 completionHandler:(void (^)(BOOL))arg3;
- (BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(void (^)(void))arg3;
- (void)noteUserIsInteractingWithIcons;
- (void)cancelScrolling;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@end

