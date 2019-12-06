//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/ACHTemplateSource-Protocol.h>

@class NSCalendar, NSString;

@interface ACHPerfectMonthTemplateSource : NSObject <ACHTemplateSource>
{
    NSCalendar *_utcGregorianCalendar;
}

@property(retain, nonatomic) NSCalendar *utcGregorianCalendar; // @synthesize utcGregorianCalendar=_utcGregorianCalendar;
// - (void).cxx_destruct;
- (id)stickerBundleURLForTemplate:(id)arg1;
- (id)_monthStringFromTemplateName:(id)arg1;
- (id)_modelsDirectoryBasePathForTemplate:(id)arg1;
- (id)_monthlyAchievementsAssetsDirectoryBasePath;
- (id)propertyListBundleURLForTemplate:(id)arg1;
- (id)resourceBundleURLForTemplate:(id)arg1;
- (id)localizationBundleURLForTemplate:(id)arg1;
- (void)templatesForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)sourceShouldRunForDate:(id)arg1;
@property(readonly, nonatomic) long long runCadence;
@property(readonly, nonatomic) NSString *identifier;
- (id)init;

@end

