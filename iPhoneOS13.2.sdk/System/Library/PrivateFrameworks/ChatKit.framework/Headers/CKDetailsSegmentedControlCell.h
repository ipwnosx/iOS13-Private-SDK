//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKDetailsCell.h>

#import <ChatKit/CKDetailsCell-Protocol.h>

@class UISegmentedControl;

__attribute__((visibility("hidden")))
@interface CKDetailsSegmentedControlCell : CKDetailsCell <CKDetailsCell>
{
    UISegmentedControl *_segmentedControl;
}

+ (BOOL)shouldHighlight;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
// - (void).cxx_destruct;
- (void)layoutSubviews;

@end

