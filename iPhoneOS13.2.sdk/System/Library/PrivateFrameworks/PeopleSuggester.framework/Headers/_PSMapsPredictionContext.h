//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSString;

@interface _PSMapsPredictionContext : NSObject <NSSecureCoding>
{
    NSDate *_suggestionDate;
    NSString *_bundleID;
    NSString *_navigationStartLocationId;
    NSString *_navigationEndLocationId;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *navigationEndLocationId; // @synthesize navigationEndLocationId=_navigationEndLocationId;
@property(copy, nonatomic) NSString *navigationStartLocationId; // @synthesize navigationStartLocationId=_navigationStartLocationId;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSDate *suggestionDate; // @synthesize suggestionDate=_suggestionDate;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

