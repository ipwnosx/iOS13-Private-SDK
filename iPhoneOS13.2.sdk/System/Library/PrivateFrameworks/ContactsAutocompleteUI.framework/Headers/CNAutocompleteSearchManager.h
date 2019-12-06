//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteStore, NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;
@protocol CNAutocompleteUIFetchDelegate;

@interface CNAutocompleteSearchManager : NSObject
{
    NSMutableDictionary *_taskContextsByTaskID;
    CNAutocompleteStore *_autocompleteStore;
    NSOperationQueue *_queue;
    unsigned int _genNumber;
    NSUInteger _searchTypes;
    NSArray *_explicitSearchAccountIDs;
    NSArray *_searchAccounts;
    int _contactSearchAccountChangedToken;
    BOOL _registeredForAddressBookChanges;
    NSNumber *_shouldIncludeGroupResultsImpl;
    NSMutableArray *_corecipientSearchTaskIDs;
    NSString *_sendingAddress;
    BOOL _includeUpcomingEventMembers;
    BOOL _shouldUnifyResults;
    BOOL _simulatedResultsEnabled;
    NSString *_recentsBundleIdentifier;
    id <CNAutocompleteUIFetchDelegate> _fetchDelegate;
    NSUInteger _implicitGroupCreationThreshold;
    NSUInteger _autocompleteSearchType;
    NSString *_sendingAccountIdentifier;
}

@property(readonly, nonatomic) NSArray *searchAccounts; // @synthesize searchAccounts=_searchAccounts;
@property(nonatomic, getter=isSimulatedResultsEnabled) BOOL simulatedResultsEnabled; // @synthesize simulatedResultsEnabled=_simulatedResultsEnabled;
@property(nonatomic) BOOL shouldUnifyResults; // @synthesize shouldUnifyResults=_shouldUnifyResults;
@property(copy, nonatomic) NSString *sendingAccountIdentifier; // @synthesize sendingAccountIdentifier=_sendingAccountIdentifier;
@property(nonatomic) NSUInteger autocompleteSearchType; // @synthesize autocompleteSearchType=_autocompleteSearchType;
@property(nonatomic) BOOL includeUpcomingEventMembers; // @synthesize includeUpcomingEventMembers=_includeUpcomingEventMembers;
@property(nonatomic) NSUInteger implicitGroupCreationThreshold; // @synthesize implicitGroupCreationThreshold=_implicitGroupCreationThreshold;
@property __weak id <CNAutocompleteUIFetchDelegate> fetchDelegate; // @synthesize fetchDelegate=_fetchDelegate;
@property(copy, nonatomic) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;
@property(retain) NSArray *searchAccountIDs; // @synthesize searchAccountIDs=_explicitSearchAccountIDs;
@property(copy, nonatomic) NSString *recentsBundleIdentifier; // @synthesize recentsBundleIdentifier=_recentsBundleIdentifier;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)cancelTaskWithID:(id)arg1;
- (void)_handleContactsAutocompleteSearch:(id)arg1 returnedResults:(id)arg2 taskID:(id)arg3;
- (void)_handleContactsAutocompleteSearchFinished:(id)arg1 taskID:(id)arg2;
- (void)_handleTaskFinished:(id)arg1 context:(id)arg2;
- (id)searchForCorecipientsWithAutocompleteFetchContext:(id)arg1 consumer:(id)arg2;
- (id)searchForText:(id)arg1 consumer:(id)arg2;
- (id)searchForText:(id)arg1 withAutocompleteFetchContext:(id)arg2 consumer:(id)arg3;
- (void)removeRecipientResult:(id)arg1;
- (void)didSelectRecipient:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)_nextTaskID;
@property(nonatomic) BOOL shouldIncludeGroupResults;
- (void)setSearchTypes:(NSUInteger)arg1;
- (id)init;
- (id)initWithAutocompleteStore:(id)arg1 searchType:(NSUInteger)arg2;
- (id)initWithAutocompleteSearchType:(NSUInteger)arg1;

@end

