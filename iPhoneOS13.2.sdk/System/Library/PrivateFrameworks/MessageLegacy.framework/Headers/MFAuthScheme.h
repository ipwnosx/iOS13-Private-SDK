//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFAuthScheme : NSObject
{
}

+ (id)authSchemesForAccount:(id)arg1 connection:(id)arg2;
+ (id)schemeWithName:(id)arg1;
+ (void)registerSchemeClass:(Class)arg1;
+ (id)knownSchemes;
+ (void)initialize;
- (id)humanReadableName;
- (id)name;
- (BOOL)requiresPassword;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (BOOL)hasEncryption;
- (unsigned int)defaultPortForAccount:(id)arg1;
- (Class)authenticatorClass;
- (Class)connectionClassForAccountClass:(Class)arg1;

@end

