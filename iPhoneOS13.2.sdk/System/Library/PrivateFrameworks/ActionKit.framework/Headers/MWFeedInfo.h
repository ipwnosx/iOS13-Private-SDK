//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSURL;

@interface MWFeedInfo : NSObject <NSCoding>
{
    NSString *title;
    NSString *link;
    NSString *summary;
    NSURL *url;
}

@property(copy, nonatomic) NSURL *url; // @synthesize url;
@property(copy, nonatomic) NSString *summary; // @synthesize summary;
@property(copy, nonatomic) NSString *link; // @synthesize link;
@property(copy, nonatomic) NSString *title; // @synthesize title;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

