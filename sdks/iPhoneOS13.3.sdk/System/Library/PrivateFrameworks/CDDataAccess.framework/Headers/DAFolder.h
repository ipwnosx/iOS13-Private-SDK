//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DAFolder : NSObject
{
    BOOL _isDefault;
    BOOL _hasRemoteChanges;
    NSString *_folderName;
    NSString *_folderID;
    NSString *_parentFolderID;
    long long _dataclass;
}

@property(nonatomic) BOOL hasRemoteChanges; // @synthesize hasRemoteChanges=_hasRemoteChanges;
@property(nonatomic) BOOL isDefault; // @synthesize isDefault=_isDefault;
@property(nonatomic) long long dataclass; // @synthesize dataclass=_dataclass;
@property(copy, nonatomic) NSString *parentFolderID; // @synthesize parentFolderID=_parentFolderID;
@property(copy, nonatomic) NSString *folderID; // @synthesize folderID=_folderID;
@property(copy, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)parentMailboxID;
- (id)mailboxID;

@end
