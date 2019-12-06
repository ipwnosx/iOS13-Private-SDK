//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSIndexSet, NSString, PLImageContainer;

@protocol PLThumbPersistenceManager <NSObject>
@property(readonly, nonatomic) BOOL isReadOnly;
@property(readonly, nonatomic) NSString *path;
- (NSString *)_debugDescription;
- (BOOL)usesThumbIdentifiers;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(NSString *)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(NSString *)arg1;
- (CGImageRef)createImageWithIdentifier:(NSString *)arg1 orIndex:(NSUInteger)arg2 decodeSession:(void )arg3;
- (BOOL)validateData:(NSData *)arg1 withToken:(NSString *)arg2;
- (void)preheatDataForThumbnailIndexes:(NSIndexSet *)arg1;
- (NSData *)imageDataWithIdentifier:(NSString *)arg1 orIndex:(NSUInteger)arg2 width:(int )arg3 height:(int )arg4 bytesPerRow:(int )arg5 dataWidth:(int )arg6 dataHeight:(int )arg7 dataOffset:(int )arg8;

@optional
- (NSString *)thumbnailPathForThumbIdentifier:(NSString *)arg1;
- (void)deleteEntryWithIdentifier:(NSString *)arg1 orIndex:(NSUInteger)arg2 uuid:(NSString *)arg3;
- (BOOL)setImageForEntry:(PLImageContainer *)arg1 withIdentifier:(NSString *)arg2 orIndex:(NSUInteger)arg3 photoUUID:(NSString *)arg4 options:(NSDictionary *)arg5;
@end

