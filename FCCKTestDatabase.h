//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCCKDatabase.h>

@class FCCKTestFeedQueryEndpoint, NSMutableArray;

@interface FCCKTestDatabase : FCCKDatabase
{
    NSMutableArray *_records;
    FCCKTestFeedQueryEndpoint *_feedQueryEndpoint;
}

@property(retain, nonatomic) FCCKTestFeedQueryEndpoint *feedQueryEndpoint; // @synthesize feedQueryEndpoint=_feedQueryEndpoint;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
- (void).cxx_destruct;
@property(nonatomic) _Bool simulate23795861AtEnd;
- (id)addArticlesToTopOfFeed:(id)arg1 count:(unsigned long long)arg2;
- (void)deleteFeedID:(id)arg1;
- (void)populateWithBasicTestFeeds;
- (void)updateArticleID:(id)arg1 inFeedID:(id)arg2 withProperties:(id)arg3;
- (void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3;
- (void)insertArticleID:(id)arg1 atBottomOfFeedID:(id)arg2;
- (void)insertArticleID:(id)arg1 atTopOfFeedID:(id)arg2;
- (void)updateTagWithID:(id)arg1 properties:(id)arg2;
- (id)insertTestTagWithType:(id)arg1 properties:(id)arg2;
- (id)insertTestTagWithType:(id)arg1 feedID:(id)arg2 properties:(id)arg3;
- (id)insertTestTagWithType:(id)arg1 feedID:(id)arg2;
- (void)updateArticleWithID:(id)arg1 modDate:(id)arg2 properties:(id)arg3;
- (void)updateArticleWithID:(id)arg1 properties:(id)arg2;
- (void)insertTestArticleWithID:(id)arg1 properties:(id)arg2;
- (id)insertTestArticleWithProperties:(id)arg1;
- (id)insertTestArticle;
- (void)addOperation:(id)arg1;
- (id)initWithDatabase:(id)arg1 middleware:(id)arg2;

@end

