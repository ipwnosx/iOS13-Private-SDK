//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol QLThumbnailService <NSObject>
- (void)generateThumbnailOfSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(NSUInteger)arg4 withContents:(id)arg5 additionalResourcesWrapper:(id)arg6 completionHandler:(void (^)(NSData *, QLURLHandler *, IOSurface *, CGSize, BOOL, NSError *))arg7;
@end

