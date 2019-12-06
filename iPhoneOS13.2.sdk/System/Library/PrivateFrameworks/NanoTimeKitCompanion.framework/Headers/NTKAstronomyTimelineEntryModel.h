//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class CLLocation, NSDate;

@interface NTKAstronomyTimelineEntryModel : NTKTimelineEntryModel
{
    NSUInteger _vista;
    NSDate *_currentDate;
    CLLocation *_currentLocation;
    CLLocation *_anyLocation;
}

@property(readonly, nonatomic) CLLocation *anyLocation; // @synthesize anyLocation=_anyLocation;
@property(readonly, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(readonly, nonatomic) NSUInteger vista; // @synthesize vista=_vista;
// - (void).cxx_destruct;
- (id)templateForComplicationFamily:(long long)arg1;
- (id)initWithVista:(NSUInteger)arg1 entryDate:(id)arg2 currentDate:(id)arg3 currentLocation:(id)arg4 anyLocation:(id)arg5;

@end

