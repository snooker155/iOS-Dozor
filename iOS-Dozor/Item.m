//
//  Item.m
//  iOS-Dozor
//
//  Created by Anton Zubarev on 31.10.12.
//  Copyright (c) 2012 izub.anton@gmail.com. All rights reserved.
//

#import "Item.h"

@implementation Item



-(NSString *)name{
    return name;
}
-(void)setName:(NSString*)_name{
    name=_name;
}

-(int)quantity{
    return  quantity;
}
-(void)setQuantity:(int)_quantity{
    quantity=_quantity;
}


-(int)ID{
    return ID;
}
-(void)setID:(int)_ID{
    ID=_ID;
}

-(NSString*)description{
    return description;
}
-(void)setDescription:(NSString*)_description{
    description=_description;
}

-(void)addItem:(int)_quantity{
    quantity+=_quantity;
}

-(void)removeItem:(int)_quantity{
    quantity-=_quantity;
}



@end
