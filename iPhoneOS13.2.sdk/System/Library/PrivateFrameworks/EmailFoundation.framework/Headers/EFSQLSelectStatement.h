//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLExpressable-Protocol.h>
#import <EmailFoundation/EFSQLSelectComponent-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol EFSQLExpressable;

@interface EFSQLSelectStatement : NSObject <EFSQLExpressable, EFSQLSelectComponent>
{
    BOOL _distinct;
    id <EFSQLExpressable> _where;
    NSUInteger _limit;
    NSString *_tableName;
    NSMutableArray *_results;
    NSMutableArray *_joinExpressions;
    NSArray *_groupExpressions;
    NSMutableArray *_orderExpressions;
}

@property(readonly, nonatomic) NSMutableArray *orderExpressions; // @synthesize orderExpressions=_orderExpressions;
@property(retain, nonatomic) NSArray *groupExpressions; // @synthesize groupExpressions=_groupExpressions;
@property(readonly, nonatomic) NSMutableArray *joinExpressions; // @synthesize joinExpressions=_joinExpressions;
@property(readonly, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(readonly, copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(nonatomic) NSUInteger limit; // @synthesize limit=_limit;
@property(retain, nonatomic) id <EFSQLExpressable> where; // @synthesize where=_where;
@property(nonatomic) BOOL distinct; // @synthesize distinct=_distinct;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property(readonly, copy, nonatomic) NSString *queryString;
- (void)orderByColumn:(id)arg1 fromTable:(id)arg2 ascending:(BOOL)arg3;
- (void)orderByColumn:(id)arg1 ascending:(BOOL)arg2;
- (void)orderBy:(id)arg1 ascending:(BOOL)arg2;
- (void)groupByColumn:(id)arg1 fromTable:(id)arg2;
- (void)groupByColumn:(id)arg1;
- (void)groupBy:(id)arg1;
- (id)leftOuterJoin:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;
- (id)join:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;
- (id)leftOuterJoin:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;
- (id)join:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;
- (id)leftOuterJoin:(id)arg1 alias:(id)arg2 on:(id)arg3;
- (id)join:(id)arg1 alias:(id)arg2 on:(id)arg3;
- (id)leftOuterJoin:(id)arg1 on:(id)arg2;
- (id)join:(id)arg1 on:(id)arg2;
- (void)addResultColumn:(id)arg1 fromTable:(id)arg2;
- (void)addResultColumn:(id)arg1;
- (void)addResult:(id)arg1 alias:(id)arg2;
- (id)initWithResultColumn:(id)arg1;
- (id)initWithResultColumn:(id)arg1 table:(id)arg2;
- (id)initWithResult:(id)arg1;
- (id)initWithResult:(id)arg1 table:(id)arg2;

@end

