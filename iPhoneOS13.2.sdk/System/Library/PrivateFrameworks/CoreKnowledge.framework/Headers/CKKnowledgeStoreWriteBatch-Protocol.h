//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol CKKnowledgeStoreWriteBatch
- (void)writeWithCompletionHandler:(void (^)(NSError *))arg1;
- (BOOL)writeAndReturnError:(id )arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
@end

