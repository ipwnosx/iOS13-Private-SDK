//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DAAccountLoader : NSObject
{
    NSMutableDictionary *_acAccountTypeToAccountFrameworkSubpath;
    NSMutableDictionary *_acAccountTypeToAccountDaemonBundleSubpath;
    NSMutableDictionary *_acAccountTypeToClassNames;
    NSMutableDictionary *_acParentAccountTypeToChildAccountTypes;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *acParentAccountTypeToChildAccountTypes; // @synthesize acParentAccountTypeToChildAccountTypes=_acParentAccountTypeToChildAccountTypes;
@property(retain, nonatomic) NSMutableDictionary *acAccountTypeToClassNames; // @synthesize acAccountTypeToClassNames=_acAccountTypeToClassNames;
@property(retain, nonatomic) NSMutableDictionary *acAccountTypeToAccountDaemonBundleSubpath; // @synthesize acAccountTypeToAccountDaemonBundleSubpath=_acAccountTypeToAccountDaemonBundleSubpath;
@property(retain, nonatomic) NSMutableDictionary *acAccountTypeToAccountFrameworkSubpath; // @synthesize acAccountTypeToAccountFrameworkSubpath=_acAccountTypeToAccountFrameworkSubpath;
// - (void).cxx_destruct;
- (Class)daemonAppropriateAccountClassForACAccount:(id)arg1;
- (Class)agentClassForACAccount:(id)arg1;
- (Class)daemonAccountClassForACAccount:(id)arg1;
- (Class)clientAccountClassForACAccount:(id)arg1;
- (Class)accountClassForACAccount:(id)arg1;
- (void)loadDaemonBundleForACAccountType:(id)arg1;
- (void)loadFrameworkForACAccountType:(id)arg1;
- (BOOL)_loadFrameworkAtSubpath:(id)arg1;
- (id)init;
- (void)_addAccountInfo:(id)arg1 forFrameworkNamed:(id)arg2;

@end

