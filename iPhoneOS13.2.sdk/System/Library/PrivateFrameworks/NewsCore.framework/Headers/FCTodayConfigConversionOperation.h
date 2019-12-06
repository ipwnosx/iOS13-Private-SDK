//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSArray, NSDictionary, NTPBTodayConfig;
@protocol FCContentContext, FCCoreConfiguration;

@interface FCTodayConfigConversionOperation : FCOperation
{
    NSDictionary *_widgetConfiguration;
    id <FCCoreConfiguration> _configuration;
    id <FCContentContext> _context;
    id /* CDUnknownBlockType */ _todayConfigCompletionHandler;
    NTPBTodayConfig *_resultTodayConfig;
    NSArray *_networkEvents;
    NSDictionary *_resultHeldRecordsByType;
}

@property(retain, nonatomic) NSDictionary *resultHeldRecordsByType; // @synthesize resultHeldRecordsByType=_resultHeldRecordsByType;
@property(copy, nonatomic) NSArray *networkEvents; // @synthesize networkEvents=_networkEvents;
@property(copy, nonatomic) NTPBTodayConfig *resultTodayConfig; // @synthesize resultTodayConfig=_resultTodayConfig;
@property(copy, nonatomic) id /* CDUnknownBlockType */ todayConfigCompletionHandler; // @synthesize todayConfigCompletionHandler=_todayConfigCompletionHandler;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSDictionary *widgetConfiguration; // @synthesize widgetConfiguration=_widgetConfiguration;
// - (void).cxx_destruct;
- (void)_collectRecordIDsReferencedBySectionConfig:(id)arg1 withArticleListIDs:(id)arg2 articleIDs:(id)arg3;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)init;

@end

