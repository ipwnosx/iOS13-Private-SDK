//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken;

@interface REScriptASTDeclarationNode : REScriptASTNode
{
    REScriptToken *_type;
    REScriptToken *_name;
    REScriptASTNode *_value;
}

+ (id)parseBuffer:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) REScriptASTNode *value; // @synthesize value=_value;
@property(readonly, nonatomic) REScriptToken *name; // @synthesize name=_name;
@property(readonly, nonatomic) REScriptToken *type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)dependencies;
- (id)initWithName:(id)arg1 type:(id)arg2 expression:(id)arg3;

@end

