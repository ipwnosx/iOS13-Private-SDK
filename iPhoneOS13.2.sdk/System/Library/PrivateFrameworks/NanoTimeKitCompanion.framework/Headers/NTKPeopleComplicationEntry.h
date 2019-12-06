//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSString, UIImage;

@interface NTKPeopleComplicationEntry : NTKTimelineEntryModel
{
    NSString *_fullName;
    NSString *_abbreviation;
    UIImage *_profileImage;
    BOOL _isLocked;
}

+ (id)lockedEntry;
@property(readonly, nonatomic) UIImage *profileImage; // @synthesize profileImage=_profileImage;
@property(readonly, nonatomic) NSString *abbreviation; // @synthesize abbreviation=_abbreviation;
@property(readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
// - (void).cxx_destruct;
- (id)templateForComplicationFamily:(long long)arg1;
- (id)initWithFullName:(id)arg1 abbreviation:(id)arg2 profileImage:(id)arg3;

@end

