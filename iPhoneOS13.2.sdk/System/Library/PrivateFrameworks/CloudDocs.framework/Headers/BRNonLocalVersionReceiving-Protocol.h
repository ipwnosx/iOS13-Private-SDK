//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDate, NSNumber, NSPersonNameComponents, NSString, NSURL;

@protocol BRNonLocalVersionReceiving <NSObject>
- (oneway void)newThumbnailForVersionWithEtag:(NSString *)arg1;
- (oneway void)versionsDone;
- (oneway void)newCachedVersionAtURL:(NSURL *)arg1 size:(NSNumber *)arg2 etag:(NSString *)arg3 hasThumbnail:(BOOL)arg4 displayName:(NSString *)arg5 lastEditorDeviceName:(NSString *)arg6 lastEditorNameComponents:(NSPersonNameComponents *)arg7 modificationDate:(NSDate *)arg8;
- (oneway void)newFaultVersionAtURL:(NSURL *)arg1 faultURL:(NSURL *)arg2 faultExtension:(NSData *)arg3 etag:(NSString *)arg4 hasThumbnail:(BOOL)arg5 displayName:(NSString *)arg6 lastEditorDeviceName:(NSString *)arg7 lastEditorNameComponents:(NSPersonNameComponents *)arg8 modificationDate:(NSDate *)arg9;
@end

