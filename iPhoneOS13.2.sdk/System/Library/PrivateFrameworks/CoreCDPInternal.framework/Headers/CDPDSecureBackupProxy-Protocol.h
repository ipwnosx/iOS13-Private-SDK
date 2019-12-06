//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CDPContext, NSDictionary, NSString;

@protocol CDPDSecureBackupProxy <NSObject>
@property(retain, nonatomic) CDPContext *cdpContext;
- (void)uncacheAllSecrets;
- (void)cacheRecoveryKey:(NSString *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)enableWithInfo:(NSDictionary *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)disableWithInfo:(NSDictionary *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (NSDictionary *)recoverWithInfo:(NSDictionary *)arg1 error:(id )arg2;
- (BOOL)enableWithInfo:(NSDictionary *)arg1 error:(id )arg2;
- (BOOL)disableWithInfo:(NSDictionary *)arg1 error:(id )arg2;
- (NSDictionary *)accountInfoWithInfo:(NSDictionary *)arg1 error:(id )arg2;
- (id)init;
- (id)initWithContext:(CDPContext *)arg1;
@end

