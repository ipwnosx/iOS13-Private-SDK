//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFSelectableAlertButton.h>

@class NSAttributedString, NSString;

@interface WFAttributedAlertButton : WFSelectableAlertButton
{
    NSAttributedString *_attributedTitle;
    NSString *_label;
}

+ (id)buttonWithAttributedTitle:(id)arg1 label:(id)arg2 selected:(BOOL)arg3 style:(long long)arg4 handler:(CDUnknownBlockType)arg5;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
// - (void).cxx_destruct;

@end

