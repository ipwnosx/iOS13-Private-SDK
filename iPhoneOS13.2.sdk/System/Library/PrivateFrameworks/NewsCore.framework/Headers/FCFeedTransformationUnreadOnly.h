//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class FCReadingHistory;

@interface FCFeedTransformationUnreadOnly : NSObject <FCFeedTransforming>
{
    FCReadingHistory *_history;
}

+ (id)transformationWithReadingHistory:(id)arg1;
@property(retain, nonatomic) FCReadingHistory *history; // @synthesize history=_history;
// - (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;

@end

