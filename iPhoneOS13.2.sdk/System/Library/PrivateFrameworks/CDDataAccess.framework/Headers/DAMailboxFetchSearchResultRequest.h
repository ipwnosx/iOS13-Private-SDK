//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject
{
    int _bodyFormat;
    int _maxSize;
    NSString *_longID;
    NSString *_folderID;
    NSString *_serverID;
}

@property(nonatomic) int maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) int bodyFormat; // @synthesize bodyFormat=_bodyFormat;
@property(copy, nonatomic) NSString *serverID; // @synthesize serverID=_serverID;
@property(copy, nonatomic) NSString *folderID; // @synthesize folderID=_folderID;
@property(copy, nonatomic) NSString *longID; // @synthesize longID=_longID;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initRequestForBodyFormat:(int)arg1 withFolderID:(id)arg2 withServerID:(id)arg3 withLongID:(id)arg4 withBodySizeLimit:(int)arg5;
- (id)initRequestForBodyFormat:(int)arg1 withLongID:(id)arg2 withBodySizeLimit:(int)arg3;

@end

