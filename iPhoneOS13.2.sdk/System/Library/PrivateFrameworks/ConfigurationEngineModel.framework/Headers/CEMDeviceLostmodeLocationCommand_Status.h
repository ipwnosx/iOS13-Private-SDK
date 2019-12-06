//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMDeviceLostmodeLocationCommand_Status : CEMPayloadBase
{
    NSNumber *_statusLatitude;
    NSNumber *_statusLongitude;
    NSNumber *_statusHorizontalAccuracy;
    NSNumber *_statusVerticalAccuracy;
    NSNumber *_statusAltitude;
    NSNumber *_statusSpeed;
    NSNumber *_statusCourse;
    NSString *_statusTimestamp;
}

+ (id)buildRequiredOnlyWithLatitude:(id)arg1 withLongitude:(id)arg2 withHorizontalAccuracy:(id)arg3 withVerticalAccuracy:(id)arg4 withAltitude:(id)arg5 withSpeed:(id)arg6 withCourse:(id)arg7 withTimestamp:(id)arg8;
+ (id)buildWithLatitude:(id)arg1 withLongitude:(id)arg2 withHorizontalAccuracy:(id)arg3 withVerticalAccuracy:(id)arg4 withAltitude:(id)arg5 withSpeed:(id)arg6 withCourse:(id)arg7 withTimestamp:(id)arg8;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSString *statusTimestamp; // @synthesize statusTimestamp=_statusTimestamp;
@property(copy, nonatomic) NSNumber *statusCourse; // @synthesize statusCourse=_statusCourse;
@property(copy, nonatomic) NSNumber *statusSpeed; // @synthesize statusSpeed=_statusSpeed;
@property(copy, nonatomic) NSNumber *statusAltitude; // @synthesize statusAltitude=_statusAltitude;
@property(copy, nonatomic) NSNumber *statusVerticalAccuracy; // @synthesize statusVerticalAccuracy=_statusVerticalAccuracy;
@property(copy, nonatomic) NSNumber *statusHorizontalAccuracy; // @synthesize statusHorizontalAccuracy=_statusHorizontalAccuracy;
@property(copy, nonatomic) NSNumber *statusLongitude; // @synthesize statusLongitude=_statusLongitude;
@property(copy, nonatomic) NSNumber *statusLatitude; // @synthesize statusLatitude=_statusLatitude;
// - (void).cxx_destruct;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

