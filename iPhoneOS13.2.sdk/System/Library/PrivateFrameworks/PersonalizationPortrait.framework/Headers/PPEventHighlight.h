//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, NSString, NSURL;

@interface PPEventHighlight : NSObject <NSSecureCoding>
{
    BOOL _isExtraordinary;
    NSString *_eventIdentifier;
    NSURL *_externalURI;
    NSString *_title;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_location;
    NSString *_organizer;
    CGColorRef _calendarColor;
    NSUInteger _prominentFeature;
    NSArray *_features;
    double _score;
}

+ (BOOL)supportsSecureCoding;
+ (id)describeProminentFeature:(NSUInteger)arg1;
+ (id)eventHighlightWithEvent:(id)arg1 score:(double)arg2 prominentFeature:(NSUInteger)arg3 features:(id)arg4 isExtraordinary:(BOOL)arg5;
+ (id)eventHighlightWithEKEvent:(id)arg1 score:(double)arg2 prominentFeature:(NSUInteger)arg3 features:(id)arg4 isExtraordinary:(BOOL)arg5;
@property(nonatomic) BOOL isExtraordinary; // @synthesize isExtraordinary=_isExtraordinary;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
@property(nonatomic) NSUInteger prominentFeature; // @synthesize prominentFeature=_prominentFeature;
@property(nonatomic) CGColorRef calendarColor; // @synthesize calendarColor=_calendarColor;
@property(retain, nonatomic) NSString *organizer; // @synthesize organizer=_organizer;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *externalURI; // @synthesize externalURI=_externalURI;
@property(retain, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
// - (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqualToEventHighlight:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithEventIdentifier:(id)arg1 externalURI:(id)arg2 title:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 location:(id)arg6 organizer:(id)arg7 calendarColor:(CGColorRef)arg8 prominentFeature:(NSUInteger)arg9 features:(id)arg10 score:(double)arg11 isExtraordinary:(BOOL)arg12;

@end

