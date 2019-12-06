//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreFamilyInfoFetching-Protocol.h>

@class CNFuture, FAFetchFamilyCircleRequest;
@protocol CNSchedulerProvider, CNUICoreContactStoreFacade;

@interface CNUICoreFamilyInfoRetriever : NSObject <CNUICoreFamilyInfoFetching>
{
    BOOL _matchFamilyMembersWithContacts;
    id <CNUICoreContactStoreFacade> _mainContactStore;
    FAFetchFamilyCircleRequest *_fetchFamilyCircleRequest;
    id <CNSchedulerProvider> _schedulerProvider;
    CNFuture *_familyFuture;
}

+ (id)contactsMatchingFamilyMember:(id)arg1 inContactStore:(id)arg2;
+ (id)familyInfoWithFamilyMembers:(id)arg1 meContact:(id)arg2 matchedWithContactsInContactStore:(id)arg3;
+ (id)familyInfoWithFamilyMembers:(id)arg1 meContact:(id)arg2;
+ (id)familyCircleFromRequest:(id)arg1 schedulerProvider:(id)arg2;
+ (id)meContactFromStore:(id)arg1 schedulerProvider:(id)arg2;
+ (id)keysToFetch;
@property(retain, nonatomic) CNFuture *familyFuture; // @synthesize familyFuture=_familyFuture;
@property(readonly, nonatomic) BOOL matchFamilyMembersWithContacts; // @synthesize matchFamilyMembersWithContacts=_matchFamilyMembersWithContacts;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) FAFetchFamilyCircleRequest *fetchFamilyCircleRequest; // @synthesize fetchFamilyCircleRequest=_fetchFamilyCircleRequest;
@property(readonly, nonatomic) id <CNUICoreContactStoreFacade> mainContactStore; // @synthesize mainContactStore=_mainContactStore;
// - (void).cxx_destruct;
- (id)createFamilyFuture;
- (id)familyInfo;
- (void)commonInitWithMainContactStoreFacade:(id)arg1 fetchFamilyCircleRequest:(id)arg2 matchFamilyMembersWithContacts:(BOOL)arg3 schedulerProvider:(id)arg4;
- (id)initWithMainContactStoreFacade:(id)arg1 fetchFamilyCircleRequest:(id)arg2 matchFamilyMembersWithContacts:(BOOL)arg3 schedulerProvider:(id)arg4;
- (id)initWithMainContactStoreFacade:(id)arg1 matchFamilyMembersWithContacts:(BOOL)arg2 schedulerProvider:(id)arg3;
- (id)init;

@end

