//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSIndexPath, NSNumber, SDAutoLayoutModel, UITableView;

@interface UIView (SDAutoLayout)
+ (void)load;
- (void)addAutoLayoutModel:(id)arg1;
- (void)setupCornerRadiusWithView:(id)arg1 model:(id)arg2;
- (void)layoutBottomWithView:(id)arg1 model:(id)arg2;
- (void)layoutTopWithView:(id)arg1 model:(id)arg2;
- (void)layoutRightWithView:(id)arg1 model:(id)arg2;
- (void)layoutLeftWithView:(id)arg1 model:(id)arg2;
- (void)layoutHeightWithView:(id)arg1 model:(id)arg2;
- (void)layoutWidthWithView:(id)arg1 model:(id)arg2;
- (void)layoutAutoWidthWidthView:(id)arg1 model:(id)arg2;
- (void)layoutAutoHeightWidthView:(id)arg1 model:(id)arg2;
- (void)sd_resizeWithModel:(id)arg1;
- (void)sd_layoutSubviewsHandle;
- (void)sd_layoutSubviews;
- (void)sd_clearSubviewsAutoLayoutFrameCaches;
- (void)sd_clearViewFrameCache;
- (void)sd_clearExtraAutoLayoutItems;
- (void)sd_clearAutoLayoutSettings;
- (void)removeFromSuperviewAndClearAutoLayoutSettings;
@property(nonatomic, getter=sd_isClosingAutoLayout) _Bool sd_closeAutoLayout;
- (id)sd_resetNewLayout;
- (id)sd_resetLayout;
- (id)sd_layout;
@property(retain, nonatomic) SDAutoLayoutModel *ownLayoutModel;
@property(retain, nonatomic) NSIndexPath *sd_indexPath;
@property(retain, nonatomic) UITableView *sd_tableView;
- (void)useCellFrameCacheWithIndexPath:(id)arg1 tableView:(id)arg2;
@property(retain, nonatomic) NSNumber *sd_maxWidth;
@property(retain, nonatomic) NSNumber *autoWidthRatioValue;
@property(retain, nonatomic) NSNumber *autoHeightRatioValue;
@property(retain, nonatomic) NSNumber *fixedHeight;
@property(retain, nonatomic) NSNumber *fixedWidth;
- (id)autoLayoutModelsArray;
@end

