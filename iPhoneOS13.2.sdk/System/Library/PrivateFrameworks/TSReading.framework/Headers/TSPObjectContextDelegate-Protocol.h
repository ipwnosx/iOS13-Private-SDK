//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPSupportDirectoryDelegate-Protocol.h>

@class NSArray, NSDictionary, NSError, NSSet, NSURL, SFUCryptoKey, TSPData, TSPObjectContext;
@protocol NSFilePresenter, TSPPassphraseConsumer;

@protocol TSPObjectContextDelegate <TSPSupportDirectoryDelegate>

@optional
@property(readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property(readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property(readonly, nonatomic) BOOL ignoreDocumentSupport;
@property(readonly, nonatomic) id <NSFilePresenter> filePresenter;
- (void)context:(TSPObjectContext *)arg1 didDownloadDocumentResources:(NSArray *)arg2 failedOrCancelledDocumentResources:(NSArray *)arg3 error:(NSError *)arg4;
- (NSSet *)persistenceWarningsForData:(TSPData *)arg1 isReadable:(BOOL)arg2 isExternal:(BOOL)arg3;
- (BOOL)areExternalReferencesToDataAllowedAtURL:(NSURL *)arg1;
- (NSDictionary *)additionalDocumentPropertiesForWrite;
- (NSDictionary *)packageDataForWrite;
- (void)decryptedDocumentWithKey:(SFUCryptoKey *)arg1;
- (BOOL)retrievePassphraseWithConsumer:(id <TSPPassphraseConsumer>)arg1;
- (void)makeDocumentReadOnly;
- (void)addPersistenceWarnings:(NSSet *)arg1;
- (void)presentPersistenceError:(NSError *)arg1;
@end

