//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CDDataAccess/DACardDAVRecord-Protocol.h>

@class CNContainer, NSData, NSString;

@protocol DAContainer <DACardDAVRecord>
- (CNContainer *)asContainer;
- (void )asSource;
- (void)markAsDefault;
- (BOOL)isSearchContainer;
- (void)setArePropertiesReadonly:(BOOL)arg1;
- (BOOL)arePropertiesReadonly;
- (void)setContentReadonly:(BOOL)arg1;
- (BOOL)isContentReadonly;
- (void)setAccountIdentifier:(NSString *)arg1;
- (NSString *)accountIdentifier;
- (void)setMeContactIdentifier:(NSString *)arg1;
- (NSString *)meContactidentifier;
- (void)setConstraintsPath:(NSString *)arg1;
- (NSString *)constraintsPath;
- (void)setSyncData:(NSData *)arg1;
- (NSData *)syncData;
- (void)setSyncTag:(NSString *)arg1;
- (NSString *)syncTag;
- (void)setCTag:(NSString *)arg1;
- (NSString *)cTag;
- (void)setExternalIdentifier:(NSString *)arg1;
- (NSString *)externalIdentifier;
- (void)setType:(long long)arg1;
- (long long)type;
- (BOOL)isLocal;
- (void)setName:(NSString *)arg1;
- (NSString *)name;
- (NSString *)identifier;
@end

