//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIImage;

@interface UIAccessibilityCustomAction (Private)
- (id)_accessibilityAXAttributedName;
- (BOOL)_accessibilityMatchesCustomActionIdentifier:(id)arg1;
- (id)_accessibilityCustomActionIdentifier;
@property(nonatomic) NSUInteger sortPriority;
@property(retain, nonatomic) NSString *localizedActionRotorCategory;
@property(nonatomic) BOOL ignoreWhenVoiceOverTouches;
@property(nonatomic) BOOL shouldSuppressActionHint;
@property(retain, nonatomic, getter=_accessibilityInternalCustomActionIdentifier, setter=_accessibilitySetInternalCustomActionIdentifier:) NSString *internalCustomActionIdentifier;
@property(retain, nonatomic, getter=_shortName, setter=_setShortName:) NSString *shortName;
@property(retain, nonatomic, getter=_image, setter=_setImage:) UIImage *image;
@end

