//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSMutableArray, NSString, NoteContext;
@protocol OS_dispatch_queue;

@interface DALocalDBHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_abDBQueue;
    NSObject<OS_dispatch_queue> *_calDBQueue;
    NSObject<OS_dispatch_queue> *_noteDBQueue;
    int _abConnectionCount;
    int _calConnectionCount;
    int _noteConnectionCount;
    void _abDB;
    CNContactStore *_contactStore;
    NSString *_familyDelegateAltDSID;
    NSMutableArray *_saveRequests;
//     struct CalDatabase _calDB;
    NSString *_clientIdentifier;
    NoteContext *_noteDB;
    id /* CDUnknownBlockType */ _calUnitTestCallbackBlock;
}

+ (id)calTestCalDBDir;
+ (void)calSetTestCalDBDir:(id)arg1;
+ (id)abTestABDBDir;
+ (void)abSetTestABDBDir:(id)arg1;
+ (id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2;
+ (id)os_log;
@property(copy, nonatomic) id /* CDUnknownBlockType */ calUnitTestCallbackBlock; // @synthesize calUnitTestCallbackBlock=_calUnitTestCallbackBlock;
@property(nonatomic) int noteConnectionCount; // @synthesize noteConnectionCount=_noteConnectionCount;
@property(retain, nonatomic) NoteContext *noteDB; // @synthesize noteDB=_noteDB;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) int calConnectionCount; // @synthesize calConnectionCount=_calConnectionCount;
// @property(nonatomic) struct CalDatabase calDB; // @synthesize calDB=_calDB;
@property(nonatomic) int abConnectionCount; // @synthesize abConnectionCount=_abConnectionCount;
@property(retain, nonatomic) NSMutableArray *saveRequests; // @synthesize saveRequests=_saveRequests;
@property(retain, nonatomic) NSString *familyDelegateAltDSID; // @synthesize familyDelegateAltDSID=_familyDelegateAltDSID;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) void abDB; // @synthesize abDB=_abDB;
// - (void).cxx_destruct;
- (void)calUnitTestsSetCallbackBlockForSave:(CDUnknownBlockType)arg1;
- (BOOL)noteCloseDBAndSave:(BOOL)arg1;
- (BOOL)noteSaveDB;
- (void)noteOpenDB;
- (BOOL)calCloseDBAndSave:(BOOL)arg1;
- (BOOL)calSaveDBAndFlushCaches;
- (BOOL)calSaveDB;
- (void)calClearSuperfluousChanges;
- (void)calOpenDBAsGenericClient;
- (void)calOpenDBWithClientIdentifier:(id)arg1;
- (BOOL)_calOpenDBWithClientIdentifier:(id)arg1;
- (void)_registerForCalendarYieldNotifications;
- (id)abDefaultAccountInfoSuitableForLogging;
- (id)abConstraintPlistPath;
- (BOOL)abCloseDBAndSave:(BOOL)arg1;
- (BOOL)abSaveDB;
- (void)abValidateDefaultSource;
- (void)abProcessAddedImages;
- (void)abProcessAddedRecords;
- (void)abOpenDBAsGenericClient;
- (void)abOpenDBWithClientIdentifier:(id)arg1;
- (BOOL)_abOpenDBWithClientIdentifier:(id)arg1;
- (void)_registerForAddressBookYieldNotifications;
- (BOOL)useContacts;
- (void)executeAllSaveRequests;
- (void)addSaveRequest:(id)arg1;
- (void )abDBThrowOnNil:(BOOL)arg1;
- (id)changeTrackingID;
- (void)dealloc;
- (id)initWithContactsFamilyDelegateAltDSID:(id)arg1;
- (id)init;

@end

