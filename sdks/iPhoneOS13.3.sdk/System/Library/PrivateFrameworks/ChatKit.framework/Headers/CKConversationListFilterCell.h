//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UISegmentedControl;

__attribute__((visibility("hidden")))
@interface CKConversationListFilterCell : UITableViewCell
{
    UISegmentedControl *_filterControl;
}

+ (double)defaultHeight;
+ (id)identifier;
@property(retain, nonatomic) UISegmentedControl *filterControl; // @synthesize filterControl=_filterControl;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
