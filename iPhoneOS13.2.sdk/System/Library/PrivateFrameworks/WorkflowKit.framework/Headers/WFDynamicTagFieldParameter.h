//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFTagFieldParameter.h>

@protocol WFDynamicTagFieldDataSource;

@interface WFDynamicTagFieldParameter : WFTagFieldParameter
{
    id <WFDynamicTagFieldDataSource> _dataSource;
}

@property(nonatomic) __weak id <WFDynamicTagFieldDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (id)suggestedTags;

@end

