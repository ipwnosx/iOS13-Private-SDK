//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

@class CRRecentContact;

@interface CNRecentComposeRecipient : CNComposeRecipient
{
    CRRecentContact *_recent;
}

// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGroup;
- (id)placeholderName;
- (id)preferredSendingAddress;
- (id)recentContact;
- (id)initWithRecentContact:(id)arg1;

@end

