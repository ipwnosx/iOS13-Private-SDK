//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRKCourse, NSString;

@interface CRKExpiredCourseAlertText : NSObject
{
    CRKCourse *_course;
}

+ (id)new;
@property(readonly, nonatomic) CRKCourse *course; // @synthesize course=_course;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) NSString *acknowledgeOptionTitle;
@property(readonly, nonatomic) NSString *title;
- (id)initWithCourse:(id)arg1;
- (id)init;

@end

