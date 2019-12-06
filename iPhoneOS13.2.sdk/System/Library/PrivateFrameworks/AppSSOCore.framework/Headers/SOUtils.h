//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SOUtils : NSObject
{
}

+ (BOOL)checkSignatureOfFile:(id)arg1 teamIdentifier:(id )arg2 trusted:(BOOL )arg3 signedBySet:(long long )arg4 certificates:(id )arg5 error:(id )arg6;
+ (id)signatureSetToString:(long long)arg1;
+ (BOOL)currentProcessInSystemSession;
+ (id)processNameForPID:(int)arg1;
+ (id)currentProcessName;
// + (id)bundleIdentifierFromAuditToken:(CDStruct_6ad76789)arg1;
// + (int)pidFromAuditToken:(CDStruct_6ad76789)arg1;
// + (BOOL)auditTokenFromData:(id)arg1 auditToken:(CDStruct_6ad76789 )arg2;
+ (id)mapArray:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (BOOL)isInternalBuild;
+ (id)currentProcessContainerPath;
+ (BOOL)sandboxAllowsXPC:(const char )arg1;
+ (BOOL)currentProcessIsSandboxed;
+ (BOOL)checkEntitlementFromXPC:(id)arg1;
+ (void)unmapFile:(int)arg1 data:(id)arg2;
+ (int)mmapFile:(id)arg1 mode:(long long)arg2 mmapData:(id )arg3;

@end

