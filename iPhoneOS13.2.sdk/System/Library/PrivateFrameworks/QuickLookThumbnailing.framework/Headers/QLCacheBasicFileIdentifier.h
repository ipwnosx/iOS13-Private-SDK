//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>


@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>
{
    NSUInteger _fileId;
}

+ (BOOL)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;
@property(readonly) NSUInteger fileId; // @synthesize fileId=_fileId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithFileURL:(id)arg1 error:(id )arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithFileId:(NSUInteger)arg1;

@end

