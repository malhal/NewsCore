//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class FCArticleContentManifest, FCCloudContext, FCHeadlineTemplate, FCHeadlineThumbnail, FCTopStoriesStyleConfiguration, NSArray, NSDate, NSObject, NSString, NSURL;
@protocol FCChannelProviding;

@protocol FCHeadlineProviding <NSObject, NSCopying>
@property(readonly, nonatomic) _Bool usesImageOnTopLayout;
@property(readonly, nonatomic, getter=isLastTopStoryInCluster) _Bool lastTopStoryInCluster;
@property(readonly, nonatomic, getter=isFirstTopStoryInCluster) _Bool firstTopStoryInCluster;
@property(readonly, nonatomic, getter=isTopStory) _Bool topStory;
@property(readonly, nonatomic) double tileProminenceScore;
@property(readonly, nonatomic) _Bool wasFeatured;
@property(readonly, nonatomic, getter=isFeatured) _Bool featured;
@property(readonly, copy, nonatomic) NSString *surfacedByBinID;
@property(readonly, copy, nonatomic) NSString *surfacedByTopicID;
@property(readonly, copy, nonatomic) NSString *surfacedByChannelID;
@property(readonly, copy, nonatomic) NSString *surfacedBySectionID;
@property(readonly, nonatomic) _Bool needsRapidUpdates;
@property(readonly, copy, nonatomic) NSString *minimumNewsVersion;
@property(readonly, nonatomic) FCTopStoriesStyleConfiguration *storyStyle;
@property(readonly, nonatomic) unsigned long long storyType;
@property(readonly, copy, nonatomic) NSArray *moreFromPublisherArticleIDs;
@property(readonly, copy, nonatomic) NSArray *relatedArticleIDs;
@property(readonly, copy, nonatomic) NSString *localDraftPath;
@property(readonly, nonatomic) _Bool isDraft;
@property(readonly, nonatomic, getter=isDeleted) _Bool deleted;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *iAdSectionIDs;
@property(readonly, copy, nonatomic) NSArray *iAdKeywords;
@property(readonly, copy, nonatomic) NSArray *iAdCategories;
@property(readonly, copy, nonatomic) NSString *displayTopicID;
@property(readonly, nonatomic, getter=isSponsored) _Bool sponsored;
@property(readonly, nonatomic, getter=isFeatureCandidate) _Bool featureCandidate;
@property(readonly, copy, nonatomic) FCHeadlineTemplate *headlineTemplate;
@property(readonly, nonatomic) double videoDuration;
@property(readonly, nonatomic) NSURL *videoURL;
@property(readonly, copy, nonatomic) NSArray *endOfArticleTopicIDs;
@property(readonly, copy, nonatomic) NSArray *topicIDs;
@property(readonly, copy, nonatomic) NSDate *lastFetchedDate;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property(readonly, copy, nonatomic) NSDate *topStoriesClusterDate;
@property(readonly, copy, nonatomic) NSURL *contentURL;
@property(readonly, copy, nonatomic) NSString *accessoryText;
@property(readonly, copy, nonatomic) NSString *shortExcerpt;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailUltraHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailMedium;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnail;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailLQ;
@property(readonly, nonatomic) struct CGSize largestThumbnailSize;
@property(readonly, nonatomic) _Bool hasThumbnail;
@property(readonly, nonatomic) struct CGRect thumbnailFocalFrame;
@property(readonly, copy, nonatomic) NSString *sourceName;
@property(readonly, copy, nonatomic) NSObject<FCChannelProviding> *sourceChannel;
@property(readonly, nonatomic) unsigned long long backendArticleVersion;
@property(readonly, nonatomic) unsigned long long publisherArticleVersion;
@property(readonly, copy, nonatomic) NSDate *publishDate;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *primaryAudience;
@property(readonly, nonatomic) unsigned long long contentType;
@property(readonly, copy, nonatomic) NSString *referencedArticleID;
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *versionIdentifier;

@optional
- (FCArticleContentManifest *)contentManifestWithContext:(FCCloudContext *)arg1;
@end

