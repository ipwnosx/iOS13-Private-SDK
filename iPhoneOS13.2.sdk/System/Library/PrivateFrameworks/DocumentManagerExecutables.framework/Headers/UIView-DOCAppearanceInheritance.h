//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <DocumentManagerExecutables/DOCAppearanceCustomization-Protocol.h>

@class DOCAppearance;

@interface UIView (DOCAppearanceInheritance) <DOCAppearanceCustomization>
+ (void)load;
- (void)effectiveAppearanceDidChange:(id)arg1;
@property(readonly) DOCAppearance *effectiveAppearance;
- (id)_appearance;
- (id)_inheritedAppearance;
- (void)_notifyAppearanceChange:(id)arg1;
- (void)doc_didMoveToSuperview;
@end

