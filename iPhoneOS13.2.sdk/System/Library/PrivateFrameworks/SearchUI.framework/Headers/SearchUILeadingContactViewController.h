//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUILeadingViewController.h>

#import <SearchUI/CNAvatarViewDelegate-Protocol.h>

@interface SearchUILeadingContactViewController : SearchUILeadingViewController <CNAvatarViewDelegate>
{
}

+ (BOOL)supportsRowModel:(id)arg1;
- (NSUInteger)type;
- (id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2;
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)setupView;
- (void)hide;

@end

