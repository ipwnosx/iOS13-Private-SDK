//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString, SADistance, SAMovieV2ShowtimeSnippet;

@interface SAMovieV2TheaterShowtimeListCell : SADomainObject
{
}

+ (id)theaterShowtimeListCellWithDictionary:(id)arg1 context:(id)arg2;
+ (id)theaterShowtimeListCell;
@property(copy, nonatomic) NSString *theaterName;
@property(retain, nonatomic) SAMovieV2ShowtimeSnippet *showtimeSnippet;
@property(retain, nonatomic) SADistance *relativeDistance;
@property(nonatomic) BOOL bookable;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

