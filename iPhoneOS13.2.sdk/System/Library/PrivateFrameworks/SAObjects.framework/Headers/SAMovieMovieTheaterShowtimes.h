//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, SALocalSearchBusiness2;

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable>
{
}

+ (id)movieTheaterShowtimesWithDictionary:(id)arg1 context:(id)arg2;
+ (id)movieTheaterShowtimes;
@property(retain, nonatomic) SALocalSearchBusiness2 *theater;
@property(copy, nonatomic) NSArray *showtimes;
@property(copy, nonatomic) NSArray *movieShowtimes;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

