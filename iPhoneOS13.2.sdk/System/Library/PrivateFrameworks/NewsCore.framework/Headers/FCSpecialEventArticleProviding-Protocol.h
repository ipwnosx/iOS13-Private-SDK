//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCSpecialEventItemProviding-Protocol.h>

@class NSDate, NSString;

@protocol FCSpecialEventArticleProviding <FCSpecialEventItemProviding>
@property(readonly, copy, nonatomic) NSString *storyType;
@property(readonly, copy, nonatomic) NSDate *displayDate;
@property(readonly, copy, nonatomic) NSString *articleID;
@end

