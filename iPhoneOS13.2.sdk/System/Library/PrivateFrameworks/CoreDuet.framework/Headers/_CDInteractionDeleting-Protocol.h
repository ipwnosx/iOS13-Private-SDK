//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSPredicate, NSString;

@protocol _CDInteractionDeleting
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 domainIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSUInteger, NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 account:(NSString *)arg2 completionHandler:(void (^)(NSUInteger, NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 completionHandler:(void (^)(NSUInteger, NSError *))arg2;
- (void)deleteInteractionsMatchingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(NSUInteger)arg3 completionHandler:(void (^)(NSUInteger, NSError *))arg4;
- (NSUInteger)deleteInteractionsWithBundleId:(NSString *)arg1 domainIdentifier:(NSString *)arg2 error:(id )arg3;
- (NSUInteger)deleteInteractionsWithBundleId:(NSString *)arg1 account:(NSString *)arg2 error:(id )arg3;
- (NSUInteger)deleteInteractionsWithBundleId:(NSString *)arg1 error:(id )arg2;
- (NSUInteger)deleteInteractionsMatchingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(NSUInteger)arg3 error:(id )arg4;
@end

