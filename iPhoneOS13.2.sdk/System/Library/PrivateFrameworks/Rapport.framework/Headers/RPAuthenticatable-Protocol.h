//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol RPAuthenticatable
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForPasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ hidePasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ showPasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ authCompletionHandler;
@property(readonly, nonatomic) int passwordTypeActual;
@property(nonatomic) int passwordType;
@property(copy, nonatomic) NSString *password;
@property(nonatomic) unsigned int pairVerifyFlags;
@property(nonatomic) unsigned int pairSetupFlags;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)tryPassword:(NSString *)arg1;
@end

