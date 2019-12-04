//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class ACHTemplate, HDDatabaseTransactionContext, NSDate, NSDictionary, NSObject, NSString, NSURL;
@protocol ACHTemplateSourceDelegate;

@protocol ACHTemplateSource 
@property(readonly, nonatomic) long long runCadence;
@property(readonly, nonatomic) NSString *identifier;
- (NSURL *)stickerBundleURLForTemplate:(ACHTemplate *)arg1;
- (NSURL *)propertyListBundleURLForTemplate:(ACHTemplate *)arg1;
- (NSURL *)resourceBundleURLForTemplate:(ACHTemplate *)arg1;
- (NSURL *)localizationBundleURLForTemplate:(ACHTemplate *)arg1;
- (void)templatesForDate:(NSDate *)arg1 completion:(void (^)(NSSet *, NSSet *, NSError *))arg2;
- (_Bool)sourceShouldRunForDate:(NSDate *)arg1;

@optional
@property(nonatomic) __weak NSObject<ACHTemplateSourceDelegate> *delegate;
- (NSString *)textureFilenameForTemplate:(ACHTemplate *)arg1;
- (NSDictionary *)customPlaceholderValuesForTemplate:(ACHTemplate *)arg1;
- (void)templatesForDate:(NSDate *)arg1 databaseContext:(HDDatabaseTransactionContext *)arg2 completion:(void (^)(NSSet *, NSSet *, NSError *))arg3;
@end
