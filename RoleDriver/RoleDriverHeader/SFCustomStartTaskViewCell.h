//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface SFCustomStartTaskViewCell : UITableViewCell
{
    UIView *_backView;
    UILabel *_identLabel;
    UILabel *_timeAndDeptCode;
    UILabel *_address;
    UIImageView *_downLine;
    UIImageView *_upLine;
}

- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setLabelTextWithLabel:(id)arg1 text:(id)arg2;
- (id)getCornerLabel;
- (void)configWithStartAndEnd:(long long)arg1 customTaskModel:(id)arg2;
- (void)createUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end

