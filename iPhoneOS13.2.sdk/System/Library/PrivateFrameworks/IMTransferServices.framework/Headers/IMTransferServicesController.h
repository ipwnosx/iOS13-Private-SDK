//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMTransferServicesController : NSObject
{
}

+ (id)sharedInstance;
- (void)deleteAllPersonalNicknamesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setPersonalNickname:(id)arg1 oldRecordID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)preWarmMMCSForOwnerID:(id)arg1;
- (void)cancelSendTransferID:(id)arg1;
- (void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 fileSize:(NSUInteger)arg8 progressBlock:(CDUnknownBlockType)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 retries:(int)arg8 fileSize:(NSUInteger)arg9 progressBlock:(CDUnknownBlockType)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 userInfo:(id)arg3 transferID:(id)arg4 encryptFile:(BOOL)arg5 progressBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 encryptFile:(BOOL)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_sendFilePath:(id)arg1 topic:(id)arg2 userInfo:(id)arg3 transferID:(id)arg4 encryptFile:(BOOL)arg5 retries:(int)arg6 progressBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;

@end

