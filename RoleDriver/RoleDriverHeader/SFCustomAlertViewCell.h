//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface SFCustomAlertViewCell : UITableViewCell
{
    UILabel *_aletTitel;
    UILabel *_aletText;
}

@property(retain, nonatomic) UILabel *aletText; // @synthesize aletText=_aletText;
@property(retain, nonatomic) UILabel *aletTitel; // @synthesize aletTitel=_aletTitel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configWithAlertModel:(id)arg1;
- (void)stepUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end

