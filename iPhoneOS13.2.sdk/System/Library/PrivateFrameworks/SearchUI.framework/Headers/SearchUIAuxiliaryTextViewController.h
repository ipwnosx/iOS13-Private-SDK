//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIAccessoryViewController.h>

@class TLKAuxilliaryTextView;

@interface SearchUIAuxiliaryTextViewController : SearchUIAccessoryViewController
{
    BOOL _shouldCenter;
    TLKAuxilliaryTextView *_auxilliaryTextView;
}

+ (BOOL)supportsRowModel:(id)arg1;
@property(nonatomic) BOOL shouldCenter; // @synthesize shouldCenter=_shouldCenter;
@property(retain, nonatomic) TLKAuxilliaryTextView *auxilliaryTextView; // @synthesize auxilliaryTextView=_auxilliaryTextView;
// - (void).cxx_destruct;
- (NSUInteger)type;
- (void)updateWithRowModel:(id)arg1;
- (id)setupView;
- (BOOL)shouldVerticallyCenter;

@end

