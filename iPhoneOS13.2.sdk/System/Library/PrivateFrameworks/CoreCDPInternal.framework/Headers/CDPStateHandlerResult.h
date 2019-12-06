//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface CDPStateHandlerResult : NSObject
{
    BOOL _cloudDataProtectionEnabled;
    BOOL _shouldCompleteSignIn;
    NSUInteger _peeriCloudKeychainState;
    NSError *_error;
}

+ (id)successResult;
+ (id)resultWithError:(id)arg1;
+ (id)resultWithCloudDataProtectionEnabled:(BOOL)arg1 shouldCompleteSignIn:(BOOL)arg2 peeriCloudKeychainState:(NSUInteger)arg3 error:(id)arg4;
+ (id)resultWithCloudDataProtectionEnabled:(BOOL)arg1 shouldCompleteSignIn:(BOOL)arg2 error:(id)arg3;
@property(retain) NSError *error; // @synthesize error=_error;
@property NSUInteger peeriCloudKeychainState; // @synthesize peeriCloudKeychainState=_peeriCloudKeychainState;
@property BOOL shouldCompleteSignIn; // @synthesize shouldCompleteSignIn=_shouldCompleteSignIn;
@property BOOL cloudDataProtectionEnabled; // @synthesize cloudDataProtectionEnabled=_cloudDataProtectionEnabled;
// - (void).cxx_destruct;

@end

