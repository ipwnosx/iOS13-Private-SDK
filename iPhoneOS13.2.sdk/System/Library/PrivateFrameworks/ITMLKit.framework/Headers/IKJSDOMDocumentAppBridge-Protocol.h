//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IKDOMDocument, NSArray, NSDictionary, NSString;

@protocol IKJSDOMDocumentAppBridge <NSObject>
- (void)updateForDocument:(IKDOMDocument *)arg1;

@optional
- (void)runTestWithName:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)scrollToTop;
- (void)recordedImpressionsMatching:(NSString *)arg1 reset:(BOOL)arg2 completion:(void (^)(NSArray *))arg3;
- (void)recordedImpressions:(BOOL)arg1 completion:(void (^)(NSArray *))arg2;
- (NSArray *)impressionsMatching:(NSString *)arg1 reset:(BOOL)arg2;
- (NSArray *)recordedImpressions:(BOOL)arg1;
- (NSArray *)recordedImpressions;
- (NSArray *)snapshotImpressions;
- (void)setNeedsUpdateForDocument:(IKDOMDocument *)arg1;
@end

