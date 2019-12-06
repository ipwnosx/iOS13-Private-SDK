//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchSafariBookmarksResultObject : CATTaskResultObject
{
    NSArray *_bookmarks;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *bookmarks; // @synthesize bookmarks=_bookmarks;
// - (void).cxx_destruct;
- (void)_appendDescriptionOfBookmark:(id)arg1 toString:(id)arg2 level:(NSUInteger)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBookmarks:(id)arg1;

@end

