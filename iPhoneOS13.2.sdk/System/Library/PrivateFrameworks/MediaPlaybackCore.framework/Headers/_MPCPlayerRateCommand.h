//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>

#import <MediaPlaybackCore/MPCPlayerRateCommand-Protocol.h>

@interface _MPCPlayerRateCommand : _MPCPlayerItemCommand <MPCPlayerRateCommand>
{
    float _minimumValue;
    float _maximumValue;
}

@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
- (id)changeValue:(float)arg1;

@end

