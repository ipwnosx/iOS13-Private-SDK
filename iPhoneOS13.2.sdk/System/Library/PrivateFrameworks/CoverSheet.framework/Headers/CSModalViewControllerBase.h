//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <CoverSheet/CSModalViewDelegate-Protocol.h>

@interface CSModalViewControllerBase : CSCoverSheetViewControllerBase <CSModalViewDelegate>
{
}

+ (Class)viewClass;
- (void)handleSecondaryActionForView:(id)arg1;
- (void)handlePrimaryActionForView:(id)arg1;
- (BOOL)isPortrait;
- (long long)presentationPriority;
- (long long)presentationType;
- (long long)presentationStyle;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)viewDidLoad;
- (id)viewIfLoaded;
- (id)view;

@end

