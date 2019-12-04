//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAppLibrary, BRCLocalItem, BRCRelativePath, BRCServerItem, BRCServerZone, NSURL;

@interface BRCItemToPathLookup : NSObject
{
    BRCLocalItem *_item;
    BRCServerItem *_serverItem;
    BRCServerZone *_serverZone;
    BRCRelativePath *_parentPath;
    BRCRelativePath *_matchByFileID;
    BRCRelativePath *_matchByDocumentID;
    BRCRelativePath *_matchByPath;
    unsigned long long _parentFileID;
    _Bool _fileSystemIDMayStillExist;
    _Bool _cleanupFaults;
    struct {
        unsigned int byFileID:1;
        unsigned int byDocumentID:1;
        unsigned int byPath:1;
        unsigned int parent:1;
    } _fetched;
}

+ (id)lookupForServerItem:(id)arg1 cleanupFaults:(_Bool)arg2;
+ (id)lookupForItem:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)closePaths;
- (_Bool)_fetchByDocumentID;
- (_Bool)_fetchByPath;
- (_Bool)_fetchByFileID;
- (void)_fetchParent;
@property(readonly, nonatomic) _Bool fileSystemIDMayStillExist;
@property(readonly, nonatomic) BRCRelativePath *byFileSystemID;
@property(readonly, nonatomic) BRCAppLibrary *coordinatedURLAppLibrary;
@property(readonly, nonatomic) NSURL *coordinatedReadURL;
@property(readonly, nonatomic) NSURL *coordinatedWriteURL;
- (_Bool)computeLogicalPath:(id *)arg1 physicalPath:(id *)arg2 isDirectory:(_Bool *)arg3;
@property(readonly, nonatomic) BRCRelativePath *byPath;
@property(readonly, nonatomic) BRCRelativePath *parentPath;
- (id)initWithServerItem:(id)arg1 cleanupFaults:(_Bool)arg2;
- (id)initWithItem:(id)arg1;

@end
