//
//  BaseModel.h
//  KeyArchiver
//
//  Created by Mr.Yang on 13-7-17.
//  Copyright (c) 2013年 Hunter. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseModel : NSObject <NSCopying, NSCoding>

//-------------------------------------------------------
//判断两个对象是否相同
//-------------------------------------------------------

- (BOOL)isSameWithObject:(id)obj;

//--------------------------------------------------------
//输出类的所有属性名， 当stop 为yes的时候停止输出
//--------------------------------------------------------

- (void)classPropertListNameWithBlock:(void(^)(NSString *name, bool *stop))propretyBlock;

//--------------------------------------------------------
//将类转换成字典
//--------------------------------------------------------
- (NSDictionary *)encodeToDictionary;

//--------------------------------------------------------
//将字典转换到数据类
//--------------------------------------------------------
- (void)decodeFromDictionary:(NSDictionary *)dic;


@end
