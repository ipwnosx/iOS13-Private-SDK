//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivityProvider-Protocol.h>

@protocol SXContactsPresenter, SXMailPresenter;

@interface SXEmailActionActivityProvider : NSObject <SXActionActivityProvider>
{
    id <SXMailPresenter> _mailPresenter;
    id <SXContactsPresenter> _contactsPresenter;
}

@property(readonly, nonatomic) id <SXContactsPresenter> contactsPresenter; // @synthesize contactsPresenter=_contactsPresenter;
@property(readonly, nonatomic) id <SXMailPresenter> mailPresenter; // @synthesize mailPresenter=_mailPresenter;
// - (void).cxx_destruct;
- (void)addToContacts:(id)arg1;
- (void)composeMailTo:(id)arg1 subject:(id)arg2;
- (id)activityGroupForAction:(id)arg1;
- (id)initWithMailPresenter:(id)arg1 contactsPresenter:(id)arg2;

@end

