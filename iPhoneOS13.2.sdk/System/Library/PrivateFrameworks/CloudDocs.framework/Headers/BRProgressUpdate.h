//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BRFileObjectID, NSArray;

@interface BRProgressUpdate : NSObject <NSSecureCoding, NSCopying>
{
    BRFileObjectID *_folderID;
    NSUInteger _uploadCompletedSize;
    NSUInteger _uploadTotalSize;
    NSUInteger _downloadCompletedSize;
    NSUInteger _downloadTotalSize;
    NSArray *_parentFileIDs;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger downloadTotalSize; // @synthesize downloadTotalSize=_downloadTotalSize;
@property(nonatomic) NSUInteger downloadCompletedSize; // @synthesize downloadCompletedSize=_downloadCompletedSize;
@property(nonatomic) NSUInteger uploadTotalSize; // @synthesize uploadTotalSize=_uploadTotalSize;
@property(nonatomic) NSUInteger uploadCompletedSize; // @synthesize uploadCompletedSize=_uploadCompletedSize;
@property(copy, nonatomic) BRFileObjectID *folderID; // @synthesize folderID=_folderID;
@property(copy, nonatomic) NSArray *parentFileIDs; // @synthesize parentFileIDs=_parentFileIDs;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

