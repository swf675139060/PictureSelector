//
//  MSSCollectionViewCell.m
//  MSSBrowse
//
//  Created by 申文峰 on 15/12/6.
//  Copyright © 2015年 申文峰. All rights reserved.
//

#import "MSSCollectionViewCell.h"

@implementation MSSCollectionViewCell

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
        [self createCell];
    }
    return self;
}

- (void)createCell
{
    _imageView = [[UIImageView alloc]initWithFrame:self.contentView.bounds];
    [self.contentView addSubview:_imageView];
}

@end
