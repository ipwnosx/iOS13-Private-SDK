//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSString;

@interface ABFacebookMigrator : NSObject
{
    BOOL _mayHaveFacebookSource;
    int _mergeDestinationSourceID;
    NSUInteger _facebookContactsCount;
    NSString *_destinationDescription;
    void _addressBook;
    ACAccountStore *_accountStore;
    void _facebookSource;
}

//  (BOOL)_performQuery:(id)arg1 withStoreID:(int)arg2 connection:(struct CPSqliteConnection )arg3;
//  (int)_findFacebookStoreID:(struct CPSqliteConnection )arg1;
//  (BOOL)removeFacebookSensitiveInformation:(struct CPSqliteConnection )arg1;
+ (BOOL)mayHaveFacebookContacts:(void )arg1;
+ (BOOL)isAccountTypeFacebook:(id)arg1;
+ (BOOL)isSourceFacebook:(void )arg1;
@property(nonatomic) BOOL mayHaveFacebookSource; // @synthesize mayHaveFacebookSource=_mayHaveFacebookSource;
@property(nonatomic) int mergeDestinationSourceID; // @synthesize mergeDestinationSourceID=_mergeDestinationSourceID;
@property(nonatomic) void facebookSource; // @synthesize facebookSource=_facebookSource;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) void addressBook; // @synthesize addressBook=_addressBook;
@property(retain, nonatomic) NSString *destinationDescription; // @synthesize destinationDescription=_destinationDescription;
@property(nonatomic) NSUInteger facebookContactsCount; // @synthesize facebookContactsCount=_facebookContactsCount;
// - (void).cxx_destruct;
- (BOOL)_removeContactsAccount:(void )arg1;
- (BOOL)_mergeContactsFromAccount:(void )arg1 toDestinationSourceID:(int)arg2;
- (void)performPendingMergeOrDeleteAction;
- (void)_startDatabaseDoctorToPerformAction:(id)arg1;
- (int)findBestMergeDestinationSourceID;
- (void)_detectFacebookSource;
- (void)deleteFacebookContacts;
- (void)mergeFacebookContacts;
- (BOOL)canMergeFacebookContacts;
@property(nonatomic, getter=isCheckDone) BOOL checkDone;
- (void)dealloc;
- (id)initWithAddressBook:(void )arg1 accountStore:(id)arg2;
- (id)initWithAddressBook:(void )arg1;

@end

