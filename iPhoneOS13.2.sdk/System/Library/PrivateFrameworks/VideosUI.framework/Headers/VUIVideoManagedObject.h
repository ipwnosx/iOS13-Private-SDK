//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface VUIVideoManagedObject : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingLocalPlaybackURL;
+ (id)fetchRequest;
- (id)mediaMetrics;
- (id)additionalFPSRequestParams;
@property(copy, nonatomic) NSURL *localPlaybackURL; // @dynamic localPlaybackURL;

@end

