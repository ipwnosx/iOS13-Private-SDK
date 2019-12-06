//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/PQLValuable-Protocol.h>

@class NSNumber, NSString;

@interface BRFileObjectID : NSObject <NSSecureCoding, NSCopying, PQLValuable>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)fileObjectIDForURL:(id)arg1 allocateDocID:(BOOL)arg2 error:(id )arg3;
//  (id)newFromSqliteValue:(struct sqlite3_value )arg1;
+ (id)fileObjectIDWithString:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFileObjectID:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSUInteger rawID;
@property(readonly, nonatomic) NSString *asString;
@property(readonly, nonatomic) NSNumber *documentID;
@property(readonly, nonatomic) NSNumber *folderID;
@property(readonly, nonatomic) BOOL isDocumentID;
@property(readonly, nonatomic) BOOL isFolderOrAliasID;
//  (void)sqliteBind:(struct sqlite3_stmt )arg1 index:(int)arg2;

@end

