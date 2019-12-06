//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/PQLValuable-Protocol.h>

@class BRCALRowID, BRCZoneRowID, NSString;

@interface BRCItemID : NSObject <NSCopying, NSSecureCoding, PQLValuable>
{
    BRCALRowID *_appLibraryRowID;
    BRCZoneRowID *_zoneRowID;
    unsigned char _kind;
    unsigned char _uuid[16];
}

+ (BOOL)migrateItemIDsToVersion11WithDB:(id)arg1 serverTruth:(BOOL)arg2;
+ (BOOL)migrateItemIDsToVersion8WithDB:(id)arg1 serverTruth:(BOOL)arg2;
+ (BOOL)migrateItemIDsToVersion5WithDB:(id)arg1 serverTruth:(BOOL)arg2;
+ (id)parseMangledItemIDString:(id)arg1 mangledID:(id )arg2 etag:(id )arg3 session:(id)arg4;
+ (BOOL)supportsSecureCoding;
//  (BOOL)isDocumentsItemIDWithSQLiteValue:(struct sqlite3_value )arg1;
//  (BOOL)isRootItemIDWithSQLiteValue:(struct sqlite3_value )arg1;
//  (id)newFromSqliteValue:(struct sqlite3_value )arg1;
+ (id)documentsItemIDWithAppLibraryRowID:(id)arg1;
// - (void).cxx_destruct;
- (id)derivedAliasItemIDWithOwnerName:(id)arg1;
//  (void)sqliteBind:(struct sqlite3_stmt )arg1 index:(int)arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemID:(id)arg1;
//  (id)initWithRootObject:(struct RootItemObject )arg1;
- (id)initWithUUID:(const char )arg1;
- (id)initWithAliasUUID:(id)arg1;
- (id)initAsDocumentsWithAppLibraryRowID:(id)arg1;
- (id)_initAsZoneRootWithZoneRowID:(id)arg1;
- (id)_initAsLibraryRootWithAppLibraryRowID:(id)arg1;
- (id)initWithUUIDString:(id)arg1;
- (id)initWithString:(id)arg1 libraryRowID:(id)arg2 sharedZoneRowID:(id)arg3;
- (id)init;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToItemID:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) const char UTF8String;
@property(readonly, nonatomic) NSString *debugItemIDString;
@property(readonly, nonatomic) NSString *itemIDString;
- (id)zoneUniqueItemIDStringWithSession:(id)arg1;
- (id)itemUUIDString;
@property(readonly, nonatomic) BRCZoneRowID *sharedZoneRowID;
@property(readonly, nonatomic) BRCALRowID *appLibraryRowID;
@property(readonly, nonatomic) BOOL isSharedZoneRoot;
@property(readonly, nonatomic) BOOL isDocumentsFolder;
@property(readonly, nonatomic) BOOL isNonDesktopRoot;
- (id)directoryReferenceInZoneID:(id)arg1 action:(NSUInteger)arg2;
- (id)_directoryRecordName;
- (id)structureRecordIDForItemType:(BOOL)arg1 appLibrary:(id)arg2 zone:(id)arg3 aliasTargetZone:(id)arg4;
- (id)pcsChainDocumentStructureReferenceInZoneID:(id)arg1;
- (id)pcsChainParentReferenceInZoneID:(id)arg1;
- (id)validatingDirectoryReferenceInZoneID:(id)arg1;
- (id)documentStructureRecordIDInZoneID:(id)arg1;
- (id)directoryStructureRecordIDInZoneID:(id)arg1;
- (id)contentsRecordIDInZoneID:(id)arg1;

@end

