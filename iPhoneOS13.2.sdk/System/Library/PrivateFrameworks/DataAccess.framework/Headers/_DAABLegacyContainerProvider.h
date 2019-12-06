//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAContainerProvider.h>

@interface _DAABLegacyContainerProvider : DAContainerProvider
{
    void _addressBook;
}

@property(readonly, nonatomic) void addressBook; // @synthesize addressBook=_addressBook;
- (BOOL)setLastSyncDateForContainer:(id)arg1;
- (void)mergeAllRecordsIntoContainer:(id)arg1 shouldInsertChangeHistoryRecords:(BOOL)arg2;
- (void)setDefaultContainer:(id)arg1 withLocalDBHelper:(id)arg2 onlyIfNotSet:(BOOL)arg3;
- (id)createNewContainerWithType:(int)arg1 name:(id)arg2 externalIdentifier:(id)arg3 constraintsPath:(id)arg4 syncData:(id)arg5 contentReadonly:(BOOL)arg6 propertiesReadonly:(BOOL)arg7 forAccount:(id)arg8;
- (id)allContainersForAccountWithExternalIdentifier:(id)arg1;
- (id)allContainers;
- (id)containerWithExternalIdentifier:(id)arg1 forAccountWithExternalIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithAddressBook:(void )arg1;

@end

