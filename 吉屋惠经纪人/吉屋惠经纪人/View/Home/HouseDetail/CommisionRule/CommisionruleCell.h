//
//  CommisionruleCell.h
//  吉屋惠经纪人
//
//  Created by mac on 16/6/9.
//  Copyright © 2016年 zhangtao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CommisionruleCell : UITableViewCell

@property (nonatomic, copy) NSString *yjgz;
@property (nonatomic, strong)UILabel *yongjinuize;
@property (nonatomic, strong)UITextView *yjgzLabel;

+(instancetype)cellWithTableView:(UITableView *)tableView;

@end
