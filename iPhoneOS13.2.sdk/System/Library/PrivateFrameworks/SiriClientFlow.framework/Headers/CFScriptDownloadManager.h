//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString, NSURLSession;
@protocol CFScriptDownloadDelegate;

@interface CFScriptDownloadManager : NSObject <NSURLSessionDelegate>
{
    id <CFScriptDownloadDelegate> _delegate;
    NSURLSession *_session;
}

@property(readonly) NSURLSession *session; // @synthesize session=_session;
@property(readonly) id <CFScriptDownloadDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)_hmacVerificationEventContextWithEncryptionParameters:(id)arg1 script:(id)arg2 scriptData:(id)arg3;
- (_Bool)_isValidDecryptedData:(id)arg1 forScript:(id)arg2;
- (id)_scriptStringFromData:(id)arg1;
- (id)_decryptedDataForScriptEncryptedData:(id)arg1 forScript:(id)arg2;
- (_Bool)_verifyScriptData:(id)arg1 hmac:(id)arg2 hmacKey:(id)arg3 iv:(id)arg4;
- (_Bool)_isValidURL:(id)arg1;
- (id)_filePathForScriptArchiveIdentifier:(id)arg1;
- (void)_saveDecryptedData:(id)arg1 script:(id)arg2;
- (void)invalidateTasks;
- (void)downloadScript:(id)arg1 onDispatchGroup:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
