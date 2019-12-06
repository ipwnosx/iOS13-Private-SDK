//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError, NSString, NSURL;

@interface RPFileTransferItem : NSObject
{
    BOOL _completed;
    long long _fileSize;
    id /* CDUnknownBlockType */ _completionHandler;
    NSString *_filename;
    NSURL *_itemURL;
    NSDictionary *_metadata;
    NSData *_sha256HashData;
    NSError *_error;
    NSUInteger _estimatedSize;
    NSData *_fileData;
    NSUInteger _fileID;
    NSUInteger _metadataSize;
}

@property(nonatomic) NSUInteger metadataSize; // @synthesize metadataSize=_metadataSize;
@property(nonatomic) NSUInteger fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(nonatomic) NSUInteger estimatedSize; // @synthesize estimatedSize=_estimatedSize;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(copy, nonatomic) NSData *sha256HashData; // @synthesize sha256HashData=_sha256HashData;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSURL *itemURL; // @synthesize itemURL=_itemURL;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
// - (void).cxx_destruct;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (id)init;

@end

