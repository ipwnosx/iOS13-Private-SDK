//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class PKPaymentContentItem;

@interface PKPaymentContentDataItem : PKPaymentDataItem
{
    PKPaymentContentItem *_contentItem;
}

+ (BOOL)supportsMultipleItems;
+ (long long)dataType;
@property(readonly, nonatomic) PKPaymentContentItem *contentItem; // @synthesize contentItem=_contentItem;
// - (void).cxx_destruct;
- (BOOL)isValidWithError:(id )arg1;
- (id)initWithContentItem:(id)arg1;

@end

