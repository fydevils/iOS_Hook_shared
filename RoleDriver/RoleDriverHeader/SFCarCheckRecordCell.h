//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SFCheckRecordModel, UIImageView, UILabel, UIView;

@interface SFCarCheckRecordCell : UITableViewCell
{
    int _checkStyle;
    SFCheckRecordModel *_model;
    UIView *_bgView;
    UILabel *_carNumberLab;
    UILabel *_timeLab;
    UILabel *_statusLab;
    UIImageView *_arrowsImageV;
    UIImageView *_lineImageV;
    UILabel *_checkCodeLab1;
    UILabel *_checkCodeLab2;
}

+ (double)getCellHeightWithData:(id)arg1;
@property(nonatomic) int checkStyle; // @synthesize checkStyle=_checkStyle;
@property(retain, nonatomic) UILabel *checkCodeLab2; // @synthesize checkCodeLab2=_checkCodeLab2;
@property(retain, nonatomic) UILabel *checkCodeLab1; // @synthesize checkCodeLab1=_checkCodeLab1;
@property(retain, nonatomic) UIImageView *lineImageV; // @synthesize lineImageV=_lineImageV;
@property(retain, nonatomic) UIImageView *arrowsImageV; // @synthesize arrowsImageV=_arrowsImageV;
@property(retain, nonatomic) UILabel *statusLab; // @synthesize statusLab=_statusLab;
@property(retain, nonatomic) UILabel *timeLab; // @synthesize timeLab=_timeLab;
@property(retain, nonatomic) UILabel *carNumberLab; // @synthesize carNumberLab=_carNumberLab;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) SFCheckRecordModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)getCheckTypeStr:(id)arg1;
- (id)getTitleLab:(id)arg1;
- (void)createUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andBusinessType:(int)arg3;
- (void)awakeFromNib;

@end

