//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKConversationListLargeTextCell.h>

#import <ChatKit/CKConversationSearchCellProtocol-Protocol.h>

@interface CKConversationLargeTextSearchCell : CKConversationListLargeTextCell <CKConversationSearchCellProtocol>
{
    UIEdgeInsets marginInsets;
}

+ (id)annotatedResultStringWithSearchText:(id)arg1 resultText:(id)arg2 primaryTextColor:(id)arg3 primaryFont:(id)arg4 annotatedTextColor:(id)arg5 annotatedFont:(id)arg6;
@property(nonatomic) UIEdgeInsets marginInsets; // @synthesize marginInsets;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2;
- (void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2;
- (void)layoutSubviews;
- (id)avatarView;

@end

