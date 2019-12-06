//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPUDataSourceConfiguration : NSObject
{
    Class _dataSourceClass;
    NSString *_dataSourceCachingKey;
    id /* CDUnknownBlockType */ _defaultQueryCreationBlock;
    long long _entityType;
}

+ (id)configurationWithDataSourceClass:(Class)arg1;
@property(nonatomic) long long entityType; // @synthesize entityType=_entityType;
@property(copy, nonatomic) id /* CDUnknownBlockType */ defaultQueryCreationBlock; // @synthesize defaultQueryCreationBlock=_defaultQueryCreationBlock;
@property(copy, nonatomic) NSString *dataSourceCachingKey; // @synthesize dataSourceCachingKey=_dataSourceCachingKey;
@property(readonly, nonatomic) Class dataSourceClass; // @synthesize dataSourceClass=_dataSourceClass;
// - (void).cxx_destruct;
- (id)initWithDataSourceClass:(Class)arg1;

@end

