//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSMutableURLRequest (GKAdditions)
+ (int)hashForPlayerID:(id)arg1;
+ (id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3;
- (void)setSAPversion:(id)arg1;
- (void)setSAPSignature:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setInternal:(BOOL)arg1;
- (void)setPushToken:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setStoreMode:(id)arg1;
- (void)setGameDescriptor:(id)arg1;
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;
@end

