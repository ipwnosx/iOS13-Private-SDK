//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI2/FCHeadlineMetadata-Protocol.h>

@class MISSING_TYPE, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _TtC7NewsUI219MagazineFeedArticle : NSObject <FCHeadlineMetadata>
{
    MISSING_TYPE *articleID;
    MISSING_TYPE *title;
    MISSING_TYPE *displayDate;
    MISSING_TYPE *storyType;
}

// - (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *storyType;
@property(nonatomic, readonly) NSDate *displayDate;
@property(nonatomic, readonly) NSString *title;

@end

