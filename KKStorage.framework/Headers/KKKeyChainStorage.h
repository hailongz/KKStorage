//
//  KKKeyChainStorage.h
//  KKStorage
//
//  Created by hailong11 on 2018/4/11.
//  Copyright © 2018年 kkmofang.cn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KKStorage/KKStorageProtocol.h>

@interface KKKeyChainStorage : NSObject<KKStorageProtocol>

-(instancetype) initWithName:(NSString *) name;

@end
