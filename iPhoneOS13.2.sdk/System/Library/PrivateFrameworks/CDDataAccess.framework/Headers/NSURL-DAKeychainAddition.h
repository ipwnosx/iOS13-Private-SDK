//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSURL (DAKeychainAddition)
+ (int)da_classicPortForScheme:(id)arg1;
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 user:(id)arg3 port:(int)arg4 uri:(id)arg5;
+ (id)da_URLWithDirtyString:(id)arg1;
- (id)URLWithUsername:(id)arg1;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)URLByRemovingLastPathComponent;
- (id)URLWithoutUsername;
- (id)uri;
- (id)da_pathWithoutTrailingRemovingSlash;
- (id)da_rawPath;
- (id)da_urlBySettingPath:(id)arg1;
- (id)da_urlBySettingPort:(id)arg1;
- (id)da_urlBySettingHost:(id)arg1;
- (id)da_urlBySettingScheme:(id)arg1;
- (id)da_urlForLogging;
- (id)da_urlByRemovingUsername;
- (id)da_urlBySettingUsername:(id)arg1;
- (id)da_urlBySettingPath:(id)arg1 keepUsername:(BOOL)arg2;
- (id)da_urlBySettingPort:(id)arg1 keepUsername:(BOOL)arg2;
- (id)da_urlBySettingHost:(id)arg1 keepUsername:(BOOL)arg2;
- (id)da_urlBySettingScheme:(id)arg1 keepUsername:(BOOL)arg2;
- (BOOL)da_isEqualToDAVURL:(id)arg1;
- (id)da_leastInfoStringRepresentationRelativeToParentURL:(id)arg1;
@end

