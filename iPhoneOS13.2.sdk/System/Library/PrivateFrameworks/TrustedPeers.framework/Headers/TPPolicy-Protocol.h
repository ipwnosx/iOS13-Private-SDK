//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSSet, NSString;

@protocol TPPolicy <NSObject>
- (NSString *)mapKeyToView:(NSDictionary *)arg1;
- (NSSet *)excludedViewsForModel:(NSString *)arg1;
- (NSSet *)viewsForModel:(NSString *)arg1;
- (BOOL)peerInCategory:(NSString *)arg1 canAccessView:(NSString *)arg2;
- (BOOL)trustedPeerInCategory:(NSString *)arg1 canIntroduceCategory:(NSString *)arg2;
- (NSString *)categoryForModel:(NSString *)arg1;
- (BOOL)unknownRedactions;
- (NSUInteger)version;
@end

