//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUI/SearchUIDetailedRowComponent-Protocol.h>

@class SearchUIDetailedRowModel, UIView;
@protocol SearchUIAccessoryViewDelegate, SearchUIFeedbackDelegate;

@interface SearchUIAccessoryViewController : NSObject <SearchUIDetailedRowComponent>
{
    SearchUIDetailedRowModel *rowModel;
    UIView *view;
    id <SearchUIFeedbackDelegate> feedbackDelegate;
    id <SearchUIAccessoryViewDelegate> _delegate;
}

+ (BOOL)supportsRowModel:(id)arg1;
+ (Class)accessoryViewClassForRowModel:(id)arg1;
@property __weak id <SearchUIAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SearchUIFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate;
@property(retain, nonatomic) UIView *view; // @synthesize view;
@property(retain, nonatomic) SearchUIDetailedRowModel *rowModel; // @synthesize rowModel;
// - (void).cxx_destruct;
- (void)updateWithContacts:(id)arg1;
@property(readonly) NSUInteger type;
- (BOOL)shouldTopAlignForAccessibilityContentSizes;
- (void)buttonPressed;
- (void)hide;
- (void)updateWithRowModel:(id)arg1;
- (void)didEngageAction:(NSUInteger)arg1 destination:(NSUInteger)arg2;
- (id)setupView;
- (id)controlInView:(id)arg1;
- (id)init;
- (BOOL)shouldVerticallyCenter;

@end
